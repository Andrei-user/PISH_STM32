/*
 * pish_os.c
 *
 *  Created on: Feb 28, 2026
 *      Author: andre
 */
#include "pish_f411_sfr.h"

void *stasks[2];
uint8_t OS_threadsNum = 0;
uint8_t index = 0;
void *currTread;
void *nextTread;

void OS_Init()
{
	SCB->SHPR3.B.PRI_14 = 0xFF;
}

void OS_AddThread(void *sp)
{
	stasks[OS_threadsNum] = sp;
	if(OS_threadsNum == 0){
		currTread = stasks[0];
	}

	OS_threadsNum++;
}

void OS_Shed()
{
	index++;
	if (index >= OS_threadsNum)
	{
		index = 0;
	}
	nextTread = stasks[index];
	SCB->ICSR.B.PENDSVSET = 1;
}

/* inline assembly syntax for Compiler 6 (ARMCLANG) */
__attribute__ ((naked))
void PendSV_Handler(void) {
__asm volatile (
  /* __disable_irq(); */
  /* if (OS_curr != (OSThread *)0) { */
  /*     push registers r4-r11 on the stack */
  /*     OS_curr->sp = sp; */
  /* } */
  /* sp = OS_next->sp; */
  /* OS_curr = OS_next; */
  /* pop registers r4-r11 */
  /* __enable_irq(); */
  /* return to the next thread */


    /* __disable_irq(); */
    "  CPSID         I                 \n"

    /* if (OS_curr != (OSThread *)0) { */
    "  LDR           r1,=currTread       \n"
    "  LDR           r1,[r1,#0x00]     \n"
    "  CMP           r1,#0             \n"
    "  BEQ           PendSV_restore    \n"

    /*     push registers r4-r11 on the stack */
#if (__ARM_ARCH == 6)               // if ARMv6-M...
    "  SUB           sp,sp,#(8*4)     \n" // make room for 8 registers r4-r11
    "  MOV           r0,sp            \n" // r0 := temporary stack pointer
    "  STMIA         r0!,{r4-r7}      \n" // save the low registers
    "  MOV           r4,r8            \n" // move the high registers to low registers...
    "  MOV           r5,r9            \n"
    "  MOV           r6,r10           \n"
    "  MOV           r7,r11           \n"
    "  STMIA         r0!,{r4-r7}      \n" // save the high registers
#else                               // ARMv7-M or higher
    "  PUSH          {r4-r11}          \n"
#endif                              // ARMv7-M or higher

    /*     OS_curr->sp = sp; */
    "  LDR           r1,=currTread       \n"
    "  LDR           r1,[r1,#0x00]     \n"
    "  MOV           r0,sp             \n"
    "  STR           r0,[r1,#0x00]     \n"
    /* } */

    "PendSV_restore:                   \n"
    /* sp = OS_next->sp; */
    "  LDR           r1,=nextTread       \n"
    "  LDR           r1,[r1,#0x00]     \n"
    "  LDR           r0,[r1,#0x00]     \n"
    "  MOV           sp,r0             \n"

    /* OS_curr = OS_next; */
    "  LDR           r1,=nextTread       \n"
    "  LDR           r1,[r1,#0x00]     \n"
    "  LDR           r2,=currTread       \n"
    "  STR           r1,[r2,#0x00]     \n"

    /* pop registers r4-r11 */
#if (__ARM_ARCH == 6)               // if ARMv6-M...
    "  MOV           r0,sp             \n" // r0 := top of stack
    "  MOV           r2,r0             \n"
    "  ADDS          r2,r2,#(4*4)      \n" // point r2 to the 4 high registers r7-r11
    "  LDMIA         r2!,{r4-r7}       \n" // pop the 4 high registers into low registers
    "  MOV           r8,r4             \n" // move low registers into high registers
    "  MOV           r9,r5             \n"
    "  MOV           r10,r6            \n"
    "  MOV           r11,r7            \n"
    "  LDMIA         r0!,{r4-r7}       \n" // pop the low registers
    "  ADD           sp,sp,#(8*4)      \n" // remove 8 registers from the stack
#else                               // ARMv7-M or higher
    "  POP           {r4-r11}          \n"
#endif                              // ARMv7-M or higher

    /* __enable_irq(); */
    "  CPSIE         I                 \n"

    /* return to the next thread */
    "  BX            lr                \n"
    );
}

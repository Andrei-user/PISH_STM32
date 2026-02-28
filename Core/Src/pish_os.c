/*
 * pish_os.c
 *
 *  Created on: Feb 28, 2026
 *      Author: andre
 */
#include "pish_f411_sfr.h"
#include "pish_os.h"

OSThread* OS_thread[2];

OSThread* volatile OS_curr =0;
OSThread* volatile OS_next =0;

uint8_t OS_threadsNum = 0;
uint8_t index = 0;


void OS_Init()
{
	SCB->SHPR3.B.PRI_14 = 0xFF;
}

void OS_AddThread(OSThread* thread,
				  OSThreadHandler handler,
				  void *stk,
				  uint32_t stk_size)
{
	uint32_t *sp = (uint32_t*)((((uint32_t)stk + stk_size)/8)*8);

	*(--sp) = 0x61000000;
	*(--sp) = (uint32_t)&handler;
	*(--sp) = 0x0;
	*(--sp) = 13;
	*(--sp) = 12;
	*(--sp) = 11;
	*(--sp) = 10;
	*(--sp) = 9;

	*(--sp) = 8;
	*(--sp) = 7;
	*(--sp) = 6;
	*(--sp) = 5;
	*(--sp) = 4;
	*(--sp) = 3;
	*(--sp) = 2;
	*(--sp) = 1;

	thread->sp =sp;
	OS_thread[OS_threadsNum] = thread;
	if(OS_threadsNum == 0){
		OS_curr = OS_thread[0];
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
	OS_next = OS_thread[index];
	if (OS_next != OS_curr){
		SCB->ICSR.B.PENDSVSET = 1;
	}
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
    "  LDR           r1,=OS_curr       \n"
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
    "  LDR           r1,=OS_curr       \n"
    "  LDR           r1,[r1,#0x00]     \n"
    "  MOV           r0,sp             \n"
    "  STR           r0,[r1,#0x00]     \n"
    /* } */

    "PendSV_restore:                   \n"
    /* sp = OS_next->sp; */
    "  LDR           r1,=OS_next       \n"
    "  LDR           r1,[r1,#0x00]     \n"
    "  LDR           r0,[r1,#0x00]     \n"
    "  MOV           sp,r0             \n"

    /* OS_curr = OS_next; */
    "  LDR           r1,=OS_next       \n"
    "  LDR           r1,[r1,#0x00]     \n"
    "  LDR           r2,=OS_curr       \n"
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

/*
 * pish_os.c
 *
 *  Created on: Feb 28, 2026
 *      Author: andre
 */


void OS_Init()
{
	SCB->SHPR3.B.PRI_14 = 0xFF;
}

void OS_AddThread(void *sp);

void OS_Shed();

void PendSV_Handler(void){
	int i = 0;
}

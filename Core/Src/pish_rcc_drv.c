/*
 * pish_rcc_drv.c
 *
 *  Created on: Oct 18, 2025
 *      Author: andre
 */
#include "pish_rcc_drv.h"
#include  "pish_f411_sfr.h"

void PISH_RCC_Int(){
	SysTick->LOAD.B.RELOAD = 16000 - 1;
	SysTick->CTRL.B.CLKSOURCE = 1;
	SysTick->CTRL.B.TICKINT = 1;
	SysTick->CTRL.B.ENABLE = 1;


}




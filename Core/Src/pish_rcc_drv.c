/*
 * pish_rcc_drv.c
 *
 *  Created on: Oct 18, 2025
 *      Author: andre
 */
#include "pish_rcc_drv.h"
#include  "pish_f411_sfr.h"
#define ON (1U)
#define OFF (0U)
#define PPL_SRC_HSE (1U)
#define OFF_SET (6U)
void PISH_RCC_Int(){
	RCC->CR.B.HSION = ON;

	uint32_t counter = 0;
	while(RCC->CR.B.HSIRDY == OFF){
		counter++;
	}

	RCC->PLLCFGR.R |= (4<<0); // SET M DIVIDDER
	RCC->PLLCFGR.R |= (100<<6); // SET N MULTIOPLAY
	RCC->PLLCFGR.R &= ~(3<<16); // SET P DRIVER
	RCC->PLLCFGR.B.PLLSRC = PPL_SRC_HSE; // SET hse

	RCC->CR.B.PLLON = ON;
	counter = 0;
	while(RCC->CR.B.PLLON == OFF){
		counter++;
	}
	RCC->CFGR.B.SW0 = 0;
	RCC->CFGR.B.SW1 = 1;

	RCC->CFGR.R |= 2;


	SysTick->LOAD.B.RELOAD = 16000 - 1;
	SysTick->CTRL.B.CLKSOURCE = ON;
	SysTick->CTRL.B.TICKINT = ON;
	SysTick->CTRL.B.ENABLE = ON;


}




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
	RCC->CR.B.HSEON = ON;

	uint32_t counter = 0;
	while(RCC->CR.B.HSERDY == OFF){
		counter++;
	}

	RCC->PLLCFGR.R &= ~(0x3F); // SET M DIVIDDER
	RCC->PLLCFGR.R |= (4<<0); // SET M DIVIDDER
	RCC->PLLCFGR.R &= ~(0x1FF<<OFF_SET); // SET N MULTIOPLAY
	RCC->PLLCFGR.R |= (100<<OFF_SET); // SET N MULTIOPLAY
	RCC->PLLCFGR.R &= ~(3<<16); // SET P DRIVER
	RCC->PLLCFGR.B.PLLSRC = PPL_SRC_HSE; // SET hse

	RCC->CR.B.PLLON = ON;
	counter = 0;
	while(RCC->CR.B.PLLON == OFF){
		counter++;
	}

	FLASH->ACR.B.LATENCY = 3;


	RCC->CFGR.R |= 2;


	SysTick->LOAD.B.RELOAD = 100000 - 1;
	SysTick->CTRL.B.CLKSOURCE = ON;
	SysTick->CTRL.B.TICKINT = ON;
	SysTick->CTRL.B.ENABLE = ON;


}




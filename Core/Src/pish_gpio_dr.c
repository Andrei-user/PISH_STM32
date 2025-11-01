/*
 * pish_gpio_dr.c
 *
 *  Created on: Sep 6, 2025
 *      Author: andre
 */
#include "pish_gpio_dr.h"

void PISH_GPIO_Init(){
	RCC->AHB1ENR.B.GPIOAEN = 1;
	RCC->AHB1ENR.B.GPIOCEN = 1;
	GPIOA->MODER.B.MODER5 = 1;

	EXTI->IMR.B.MR13 = ON;

	EXTI->RTSR.B.TR13 = ON;
	EXTI->FTSR.B.TR13 = ON;

	SYSCFG->EXTICR4.B.EXTI13 = 2;

	NVIC->ISER1.R |= 1<<(40-32);

}


void PISH_GPIO_Write(GPIOx_t* port, uint8_t pin, uint8_t state){
	if(state)
	{
		port-> ODR.R |= 1<<pin;
	}
	else
	{
		port->ODR.R &= ~(1<<pin);
	}
}

uint8_t PISH_GPIO_Read(GPIOx_t* port, uint8_t pin){
	return ((port-> IDR.R >> pin) & 0x01);
}

void PISH_GPIO_Toggle(GPIOx_t* port, uint8_t pin){
	uint8_t state = PISH_GPIO_Read(port, pin);
	PISH_GPIO_Write(port, pin, !state);
}

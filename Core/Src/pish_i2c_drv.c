/*
 * pish_i2c_drv.c
 *
 *  Created on: Dec 13, 2025
 *      Author: andre
 */

#include "pish_i2c_drv.h"
#include "pish_f411_sfr.h"

void PISH_I2C_Init(){

	RCC->AHB1ENR.B.GPIOBEN = 1;

	GPIOB->MODER.B.MODER8 = 2;
	GPIOB->MODER.B.MODER9 = 2;

	GPIOB->OSPEEDR.B.OSPEEDR8 = 3;
	GPIOB->OSPEEDR.B.OSPEEDR9 = 3;

	GPIOB->OTYPER.B.OT8 = 1;
	GPIOB->OTYPER.B.OT9 = 1;

	GPIOB->AFRH.B.AFRH8 = 4;
	GPIOB->AFRH.B.AFRH9 = 4;

	RCC->APB1ENR.B.I2C1EN = 1;
	I2C1->CR2.B.FREQ = 50;
	I2C1->CCR.B.CCR = 25000000/100000;
	I2C1->CR1.B.PE = 1;

}
void I2C_Start(){

	I2C1->CR1.R |= 1<<8| 1<<10;
	while(!I2C1->SR1.B.SB);
}
void I2C_Select(uint8_t addr, uint8_t write){

	I2C1->DR.R = (addr << 1) | write;
	while(!I2C1->SR1.B.ADDR);
	(void)I2C1->SR1.R;
	(void)I2C1->SR2.R;
}
void I2C_Write(uint8_t data){
	I2C1->DR.R = data;
	while(!I2C1->SR1.B.BTF);

}
void I2C_Stop(){
	I2C1->CR1.B.STOP = 1;
	while(!I2C1->CR1.B.STOP);
}

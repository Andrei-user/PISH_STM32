/*
 * pish_gpio_dr.h
 *
 *  Created on: Sep 6, 2025
 *      Author: andre
 */

#ifndef INC_PISH_GPIO_DR_H_
#define INC_PISH_GPIO_DR_H_
#include "stdint.h"
#include "pish_f411_sfr.h"

void PISH_GPIO_Init();

void PISH_GPIO_Write(GPIOx_t* port, uint8_t pin, uint8_t state);

uint8_t PISH_GPIO_Read(GPIOx_t* port, uint8_t pin);

void PISH_GPIO_Toggle(GPIOx_t* port, uint8_t pin);



#endif /* INC_PISH_GPIO_DR_H_ */

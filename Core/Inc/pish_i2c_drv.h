/*
 * pish_i2c_drv.h
 *
 *  Created on: Dec 13, 2025
 *      Author: andre
 */

#ifndef INC_PISH_I2C_DRV_H_
#define INC_PISH_I2C_DRV_H_
#include "stdint.h"

void PISH_I2C_Init();
void I2C_Start();
void I2C_Select(uint8_t addr, uint8_t write);
void I2C_Write(uint8_t data);
void I2C_Stop();



#endif /* INC_PISH_I2C_DRV_H_ */

/*
 * pish_flash_driver.h
 *
 *  Created on: Nov 15, 2025
 *      Author: andre
 */
#ifndef INC_PISH_FLASH_DRIVER_H_
#define INC_PISH_FLASH_DRIVER_H_
#include "stdint.h"

void PISH_FLASH_Write(uint8_t* data, uint32_t size, uint32_t offset);

void PISH_FLASH_Read(uint8_t* data, uint32_t size, uint32_t offset);

void PISH_FLASH_Erase(uint8_t sectorNum);


#endif /* INC_PISH_FLASH_DRIVER_H_ */

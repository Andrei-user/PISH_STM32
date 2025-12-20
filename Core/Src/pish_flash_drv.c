/*
 * pish_flash_drv.c
 *
 *  Created on: Nov 15, 2025
 *      Author: andre
 */
#include "pish_flash_driver.h"
#include "pish_f411_sfr.h"
#include "stdint.h"
#define PISH_FLASH_DATA_START (0x08060000)

void PISH_FLASH_Write(uint8_t* data, uint32_t size, uint32_t offset){
	uint32_t startAddress = PISH_FLASH_DATA_START + offset;
	FLASH->KEYR.R = 0x45670123;
	FLASH->KEYR.R = 0xCDEF89AB;

	while(FLASH->SR.B.BSY);

	FLASH->CR.B.PSIZE = 2;

	FLASH->CR.B.PG = 1;

	for(int i=0; i < size; i++)
	{
		*(uint32_t*)(startAddress) = data[i];
		startAddress += 4;
		while(FLASH->SR.B.BSY);
	}
	FLASH->CR.B.PG = 0;
	FLASH->CR.B.LOCK = 1;
}

void PISH_FLASH_Read(uint8_t* data, uint32_t size, uint32_t offset){
	uint32_t startAddress = PISH_FLASH_DATA_START + offset;

	for(uint32_t i=0; i < size; i++){
		data[i] = (uint32_t*)(startAddress);
		startAddress += 4;
	}
}

void PISH_FLASH_Erase(uint8_t sectorNum)
{
	FLASH->KEYR.R = 0x45670123;
	FLASH->KEYR.R = 0xCDEF89AB;

	while(FLASH->SR.B.BSY);

	FLASH->CR.B.SER = 1;
	FLASH->CR.B.SNB = sectorNum;

	FLASH->CR.B.STRT = 1;

	while(FLASH->SR.B.BSY);
	FLASH->CR.B.SER = 0;
	FLASH->CR.B.SNB = 0;

	FLASH->CR.B.LOCK = 1;
}

/*
 * pish_uart_drv.h
 *
 *  Created on: Nov 1, 2025
 *      Author: andre
 */
#include  "pish_f411_sfr.h"
#include "stdint.h"

#ifndef INC_PISH_UART_DRV_H_
#define INC_PISH_UART_DRV_H_

typedef struct
{
	uint32_t speed;
	uint32_t parity : 1U;
	uint32_t stopbits : 1U;
	uint32_t databits : 2U;
} UARTParam_t;

void PISH_UART_Int(USARTx_t* uart, UARTParam_t* params);
uint8_t PISH_UART_ReadSync(USARTx_t* uart);

void PISH_UART_WriteSync(USARTx_t* uart, uint8_t data);

void PISH_UART_WriteStr(USARTx_t* uart, uint8_t* data);

void PISH_UART_SetCallback(void(*callback)(uint8_t data));
#endif /* INC_PISH_UART_DRV_H_ */

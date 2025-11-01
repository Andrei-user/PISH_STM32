/*
 * pish_uart_drv.c
 *
 *  Created on: Nov 1, 2025
 *      Author: andre
 */

#include "pish_uart_drv.h"
#include  "pish_f411_sfr.h"
#include "pish_rcc_drv.h"
#include "stdint.h"


static void (*rx_callback)(uint8_t data);

void PISH_UART_Init(USARTx_t* uart, UARTParam_t* params)
{
    // [translate:Проверяем, если uart - это USART2]
    if (USART2 == uart)
    {
        // [translate:Включаем тактирование GPIOA (необходимо для пинов UART)]
        RCC->AHB1ENR.B.GPIOAEN = 1U;

        // [translate:Настраиваем альтернативную функцию для PA2 (USART2_TX) в AF7]
        GPIOA->AFRL.B.AFRL2 = 7U;
        // [translate:Настраиваем альтернативную функцию для PA3 (USART2_RX) в AF7 (бинарно 0b111 = 7)]
        GPIOA->AFRL.B.AFRL3 = 0b111;

        // [translate:Устанавливаем режим PA2 и PA3 в альтернативную функцию (2)]
        GPIOA->MODER.B.MODER2 = 2U;
        GPIOA->MODER.B.MODER3 = 2U;

        // [translate:Устанавливаем тип вывода для PA2 и PA3 на push-pull (0)]
        GPIOA->OTYPER.B.OT2 = 0;
        GPIOA->OTYPER.B.OT3 = 0;

        // [translate:Устанавливаем скорость вывода для PA2 и PA3 на очень высокую (3)]
        GPIOA->OSPEEDR.B.OSPEEDR2 = 3U;
        GPIOA->OSPEEDR.B.OSPEEDR3 = 3U;

        // [translate:Включаем тактирование USART2]
        RCC->APB1ENR.B.USART2EN = 1U;

        // [translate:Включаем прерывание USART2 в NVIC (номер прерывания 38)]
        NVIC->ISER1.R |= (1<< (38 % 32));
    }

    // [translate:Вычисляем делитель для скорости передачи при частоте 100 МГц и скорости 9600 бод]
    uint16_t uartdiv = 100000000 / 9600U;

    // [translate:Устанавливаем мантиссу и дробную часть делителя в регистр BRR]
    uart->BRR.B.DIV_Mantissa = uartdiv / 16;
    uart->BRR.B.DIV_Fraction = uartdiv % 16;

    // [translate:Включаем передачу и прием]
    uart->CR1.B.TE = 1;
    uart->CR1.B.RE = 1;

    // [translate:Включаем сам USART]
    uart->CR1.B.UE = 1;

    // [translate:Включаем прерывание при непустом регистре приема (RXNE)]
    uart->CR1.B.RXNEIE = 1;
}

void PISH_UART_SetCallback(void (*callback)(uint8_t data))
{
	rx_callback = callback;
}

void USART2_IRQHandler()
{
	if (0 == rx_callback){
		return;
	}

	uint8_t data = PISH_UART_ReadSync(USART2);
	rx_callback(data);
}

uint8_t PISH_UART_ReadSync(USARTx_t* uart)
{
	while(!(uart->SR.B.RXNE)) {};
	uint8_t res = uart->DR.B.DR;
	return res;
}

void PISH_UART_WriteSync(USARTx_t* uart, uint8_t data)
{
	while(!(uart->SR.B.TXE)) {};
	uart->DR.B.DR = data;
}

void PISH_UART_WriteStr(USARTx_t* uart, uint8_t* data)
{
	while(*data)
	{
		PISH_UART_WriteSync(uart, *data++);
	}
}

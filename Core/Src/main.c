/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "pish_f411_sfr.h"
#include "pish_gpio_dr.h"
#include "pish_rcc_drv.h"
#include "stm32f4xx_it.h"
#include "pish_uart_drv.h"
#include "pish_flash_driver.h"
#include "SSD1306_drv.h"
#include <stdio.h>
#include "pish_types.h"
#include "sowt_timer.h"
#include "joyst_i.h"

#define CMD_BUFFER_SIZE 12
char cmd_buffer[CMD_BUFFER_SIZE];
uint8_t cmd_index = 0;

joyst_state_t js_state;


void delay(uint32_t ms);



int main(void)
{
    PISH_RCC_Int();
    PISH_UART_Init(USART2, 0);
    PISH_GPIO_Init();
    PISH_ADC_Init();
    // PISH_I2C_Init();

    // Включаем только GPIOB для кнопки
    RCC->AHB1ENR.B.GPIOBEN = 1;
    GPIOB->MODER.B.MODER0 = 0;   // Input
    GPIOB->PUPDR.B.PUPDR0 = 0b01; // Pull-up

    while (1) {
        // RAW X
        uint16_t raw_x = PISH_ADC_ReadX();
        // RAW Y
        uint16_t raw_y = PISH_ADC_ReadY();

        // RAW Button
        uint8_t raw_btn = PISH_GPIO_Read(GPIOB, 0);

        char buff[80];
        sprintf(buff,
            "RAW X: %d | RAW Y: %d | RAW BTN: %d\n\r",
            raw_x,
            raw_y,
            raw_btn
        );
        PISH_UART_WriteStr(USART2, (uint8_t*)buff);

        delay(500);
    }
}






void delay(uint32_t ms){
	uint32_t currTicks = get_Ticks();
	while (get_Ticks() - currTicks < ms);
}

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
//#include "pish_i2c_drv.h"

#define CMD_BUFFER_SIZE 12
char cmd_buffer[CMD_BUFFER_SIZE];
uint8_t cmd_index = 0;


void delay(uint32_t ms);

void rx_callback(uint8_t data)
{
	PISH_Timer_SetDuty((data - '0') *10);
//    if (cmd_index < CMD_BUFFER_SIZE - 1)
//    {
//        cmd_buffer[cmd_index++] = data;
//    }
//    if (data == ';')
//    {
//    	char*start = &cmd_buffer[cmd_index - 3];
//    	cmd_buffer[cmd_index] = '\0';
//
//        if ((strcmp(start, "on;") == 0)&&(cmd_index >= 3))
//        {
//            PISH_GPIO_Write(GPIOA, 5, 1);
//        }
//        else if (cmd_index >= 4)
//        {
//        	start = &cmd_buffer[cmd_index - 4];
//        	if (strcmp(start, "off;") == 0){
//        		PISH_GPIO_Write(GPIOA, 5, 0);
//        	}
//        }
//
//        cmd_index = 0; // Сброс индекса для следующей команды
//    }
}



/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */


/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
void EXTI15_10_IRQHandler(){
	if(EXTI->PR.B.PR13){
		EXTI->PR.B.PR13 = 1;
		clearTicks();
	}
}

int main(void)
{
	//SCB->VTOR.R = 0x08004000;
    PISH_RCC_Int();

	PISH_UART_Init(USART2,0);
	PISH_UART_SetCallback(rx_callback);

	PISH_GPIO_Init();
	PISH_Timer_Init();

	PISH_I2C_Init();
	SSD1306_Init();
	uint32_t orig[20];
	uint32_t copy[20];

	for (int i = 0; i < 20; i++){
		orig[i]=i;
	}

	SSD1306_Picture2();
	//PISH_FLASH_Write(orig, 20, 0);
	//PISH_FLASH_Read(copy, 20, 0);
	//PISH_FLASH_Erase(7);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
	while (1)
	{
		PISH_UART_WriteStr(USART2,(uint8_t*) "Hello World!!!\r\n");
		delay(500);
//		PISH_GPIO_Toggle(GPIOA, 5);
//		delay(500);

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	}

  /* USER CODE END 3 */
}
void delay(uint32_t ms){
	uint32_t currTicks = get_Ticks();
	while (get_Ticks() - currTicks < ms);
}

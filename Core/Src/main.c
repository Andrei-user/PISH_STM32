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


void delay(uint32_t ms);
void rx_callback(uint8_t data);

void rx_callback(uint8_t data)
{

	if('1' == data)
	{
		PISH_GPIO_Write(GPIOA, 5, 1);
	}
	else if ('0' == data)
	{
		PISH_GPIO_Write(GPIOA, 5, 0);
	}
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
    PISH_RCC_Int();

	PISH_UART_Init(USART2, 0);
	PISH_UART_SetCallback(rx_callback);

	PISH_GPIO_Init();

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
	while (1)
	{
		PISH_UART_WriteStr(USART2,(uint8_t*) "Hello World\r\n");
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

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
#include "pish_os.h"
//#include "pish_i2c_drv.h"

#define CMD_BUFFER_SIZE 12
char cmd_buffer[CMD_BUFFER_SIZE];
uint8_t cmd_index = 0;


void delay(uint32_t ms);

uint8_t buttonFlag = 0;


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



typedef enum
{
	STATE_SLOW,
	STATE_FAST,
	STATE_MES,
	STATE_FINISH,
	//
	TOTAL_STATES
} states;



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
int messages = 0;
states state = STATE_SLOW;
uint32_t machineTimer = 0;

/* USER CODE END PV */
void buttonInterrupt()
{
	if(STATE_SLOW == state){
		buttonFlag = 1;
	}
}




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
		buttonInterrupt();
	}
}
uint32_t stack_blink1[40];
uint32_t *sp_blink1 = &stack_blink1[40];

void blink_1(){
	while (1)
	{
		PISH_GPIO_Toggle(GPIOA, 6);
		delay(1000);
	}
}

uint32_t stack_blink2[40];
uint32_t *sp_blink2 = &stack_blink2[40];
void blink_2(){
	while (1)
	{
		PISH_GPIO_Toggle(GPIOA, 5);
		delay(1000);
	}
}
int main(void)
{
	*(--sp_blink1) = 0x81000000;
	*(--sp_blink1) = (uint32_t)&blink_1;
	*(--sp_blink1) = 0x0;
	*(--sp_blink1) = 0x00000000;
	*(--sp_blink1) = 1;
	*(--sp_blink1) = 2;
	*(--sp_blink1) = 3;
	*(--sp_blink1) = 4;

	*(--sp_blink2) = 0x81000000;
	*(--sp_blink2) = (uint32_t)&blink_2;
	*(--sp_blink2) = 0x0;
	*(--sp_blink2) = 0x00000000;
	*(--sp_blink2) = 1;
	*(--sp_blink2) = 2;
	*(--sp_blink2) = 3;
	*(--sp_blink2) = 4;

	OS_Init();
	OS_AddThread(sp_blink1);
	OS_AddThread(sp_blink2);
	//SCB->VTOR.R = 0x08004000;
    PISH_RCC_Int();

	PISH_UART_Init(USART2,0);
	PISH_UART_SetCallback(rx_callback);

	PISH_GPIO_Init();
	//PISH_Timer_Init();

	PISH_I2C_Init();
//	SSD1306_Init();
//	uint32_t orig[20];
//	uint32_t copy[20];
//
//	for (int i = 0; i < 20; i++){
//		orig[i]=i;
//	}
//
//	SSD1306_Picture2();

	//PISH_FLASH_Write(orig, 20, 0);
	//PISH_FLASH_Read(copy, 20, 0);
	//PISH_FLASH_Erase(7);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
	machineTimer = get_Ticks();
	STIMER_arm(1000);

	blink_2();
	blink_1();

	while (1)
	{

	}

  /* USER CODE END 3 */
}

int getValue(){
	return 123;
}

void message (int val){
	char buff[30];
	int len = sprintf(buff, "Button_presed: %d\n\r", val);

	PISH_UART_WriteStr(USART2, buff);

}

void printValue(int val){
	char buff[30];
	int len = sprintf(buff, "Value: %d\n\r", val);

	//sprintf(&buff[len], "Done\n\r", val);

	PISH_UART_WriteStr(USART2, buff);

}


void delay(uint32_t ms){
	uint32_t currTicks = get_Ticks();
	while (get_Ticks() - currTicks < ms);
}

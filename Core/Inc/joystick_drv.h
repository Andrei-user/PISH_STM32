/*
 * joystick_drv.h
 *
 *  Created on: Feb 28, 2026
 *      Author: andre
 */

#ifndef INC_JOYSTICK_DRV_H_
#define INC_JOYSTICK_DRV_H_

#include <stdint.h>

/**
 * @brief Инициализация джойстика (ADC + кнопка)
 */
void Joystick_Init(void);

/**
 * @brief Считать ось X
 * @return 12-bit значение 0–4095
 */
uint16_t Joystick_ReadX(void);

/**
 * @brief Считать ось Y
 * @return 12-bit значение 0–4095
 */
uint16_t Joystick_ReadY(void);

/**
 * @brief Считать кнопку
 * @return 0 = нажата, 1 = не нажата
 */
uint8_t Joystick_ReadBtn(void);

#endif /* INC_JOYSTICK_DRV_H_ */

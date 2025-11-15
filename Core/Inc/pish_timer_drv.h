/*
 * pish_timer_drv.h
 *
 *  Created on: 15 нояб. 2025 г.
 *      Author: aleks
 */

#ifndef INC_PISH_TIMER_DRV_H_
#define INC_PISH_TIMER_DRV_H_

#include "stdint.h"

void PISH_Timer_Init();

void PISH_Timer_SetDuty(uint8_t duty);

#endif /* INC_PISH_TIMER_DRV_H_ */

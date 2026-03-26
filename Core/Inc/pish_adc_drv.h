/*
 * pish_adc_drv.h
 *
 *  Created on: Feb 28, 2026
 *      Author: andre
 */

#ifndef INC_PISH_ADC_DRV_H_
#define INC_PISH_ADC_DRV_H_

#include <stdint.h>

void PISH_ADC_Init(void);

uint16_t PISH_ADC_ReadX(void);  // PA0
uint16_t PISH_ADC_ReadY(void);  // PA1

#endif /* INC_PISH_ADC_DRV_H_ */

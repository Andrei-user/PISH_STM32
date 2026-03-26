/*
 * joyst_i.h
 *
 * Created on: Mar 26, 2026
 *      Author: generated
 */

#ifndef INC_JOYST_I_H_
#define INC_JOYST_I_H_

#include "stdint.h"
#include "pish_f411_sfr.h"

// X / Y — как и раньше
#define JOYST_PIN_VRX_PORT    GPIOA
#define JOYST_PIN_VRX         0   // PA0 (ADC_IN0)

#define JOYST_PIN_VRY_PORT    GPIOA
#define JOYST_PIN_VRY         1   // PA1 (ADC_IN1)

// Кнопка SW на PB0 (вместо PC13)
#define JOYST_PIN_SW_PORT     GPIOB
#define JOYST_PIN_SW          0   // PB0

typedef struct {
    int x;          // 0..4095
    int y;          // 0..4095
    uint8_t btn;    // 1=не нажата, 0=нажата
} joyst_state_t;

void JOYST_Init(void);
int  JOYST_Read_X(void);
int  JOYST_Read_Y(void);
uint8_t JOYST_Read_Button(void);
void JOYST_PrintState(joyst_state_t *state);


#endif /* INC_JOYST_I_H_ */

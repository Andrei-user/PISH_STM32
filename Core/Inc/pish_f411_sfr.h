//**************************************************************************************************
//  @Module Special Function Registers file
//! \file   stm32f411_sfr.h
//! \brief  Register definitions.
//! \par    Platform    STM32F411
//! \par    Abbreviations
//! \par    History
//! | Date       | Author  | Comment
//! |:----------:|:-------:|------------------------------------------------------------------------
//**************************************************************************************************

#ifndef STM32F411_SFR_H
#define STM32F411_SFR_H

#include "stdint.h"



/**************************************************************************************************/
/*!                                     ADC1 module memory map                                    */
/**************************************************************************************************/
typedef volatile struct ADC1_struct
{
    union ADC1_SR_union
    {
        uint32_t R;
        struct ADC1_SR_B_struct
        {
            uint32_t AWD        :1U; //!< Analog watchdog flag
            uint32_t EOC        :1U; //!< Regular channel end of
                                     //!<               conversion
            uint32_t JEOC       :1U; //!< Injected channel end of
                                     //!<               conversion
            uint32_t JSTRT      :1U; //!< Injected channel start
                                     //!<               flag
            uint32_t STRT       :1U; //!< Regular channel start flag
            uint32_t OVR        :1U; //!< Overrun
            uint32_t            :26U;
        }B;
    } SR; //!< status register (Offset: 0x00, reset: 0x00)

    union ADC1_CR1_union
    {
        uint32_t R;
        struct ADC1_CR1_B_struct
        {
            uint32_t AWDCH      :5U; //!< Analog watchdog channel select
                                     //!<               bits
            uint32_t EOCIE      :1U; //!< Interrupt enable for EOC
            uint32_t AWDIE      :1U; //!< Analog watchdog interrupt
                                     //!<               enable
            uint32_t JEOCIE     :1U; //!< Interrupt enable for injected
                                     //!<               channels
            uint32_t SCAN       :1U; //!< Scan mode
            uint32_t AWDSGL     :1U; //!< Enable the watchdog on a single channel
                                     //!<               in scan mode
            uint32_t JAUTO      :1U; //!< Automatic injected group
                                     //!<               conversion
            uint32_t DISCEN     :1U; //!< Discontinuous mode on regular
                                     //!<               channels
            uint32_t JDISCEN    :1U; //!< Discontinuous mode on injected
                                     //!<               channels
            uint32_t DISCNUM    :3U; //!< Discontinuous mode channel
                                     //!<               count
            uint32_t            :6U;
            uint32_t JAWDEN     :1U; //!< Analog watchdog enable on injected
                                     //!<               channels
            uint32_t AWDEN      :1U; //!< Analog watchdog enable on regular
                                     //!<               channels
            uint32_t RES        :2U; //!< Resolution
            uint32_t OVRIE      :1U; //!< Overrun interrupt enable
            uint32_t            :5U;
        }B;
    } CR1; //!< control register 1 (Offset: 0x04, reset: 0x00)

    union ADC1_CR2_union
    {
        uint32_t R;
        struct ADC1_CR2_B_struct
        {
            uint32_t ADON       :1U; //!< A/D Converter ON / OFF
            uint32_t CONT       :1U; //!< Continuous conversion
            uint32_t            :6U;
            uint32_t DMA        :1U; //!< Direct memory access mode (for single
                                     //!<               ADC mode)
            uint32_t DDS        :1U; //!< DMA disable selection (for single ADC
                                     //!<               mode)
            uint32_t EOCS       :1U; //!< End of conversion
                                     //!<               selection
            uint32_t ALIGN      :1U; //!< Data alignment
            uint32_t            :4U;
            uint32_t JEXTSEL    :4U; //!< External event select for injected
                                     //!<               group
            uint32_t JEXTEN     :2U; //!< External trigger enable for injected
                                     //!<               channels
            uint32_t JSWSTART   :1U; //!< Start conversion of injected
                                     //!<               channels
            uint32_t            :1U;
            uint32_t EXTSEL     :4U; //!< External event select for regular
                                     //!<               group
            uint32_t EXTEN      :2U; //!< External trigger enable for regular
                                     //!<               channels
            uint32_t SWSTART    :1U; //!< Start conversion of regular
                                     //!<               channels
            uint32_t            :1U;
        }B;
    } CR2; //!< control register 2 (Offset: 0x08, reset: 0x00)

    union ADC1_SMPR1_union
    {
        uint32_t R;
        struct ADC1_SMPR1_B_struct
        {
            uint32_t SMPx_x     :32U; //!< Sample time bits
        }B;
    } SMPR1; //!< sample time register 1 (Offset: 0x0c, reset: 0x00)

    union ADC1_SMPR2_union
    {
        uint32_t R;
        struct ADC1_SMPR2_B_struct
        {
            uint32_t SMPx_x     :32U; //!< Sample time bits
        }B;
    } SMPR2; //!< sample time register 2 (Offset: 0x10, reset: 0x00)

    union ADC1_JOFR1_union
    {
        uint32_t R;
        struct ADC1_JOFR1_B_struct
        {
            uint32_t JOFFSET1   :12U; //!< Data offset for injected channel
                                     //!<               x
            uint32_t            :20U;
        }B;
    } JOFR1; //!< injected channel data offset register (Offset: 0x14, reset: 0x00)

    union ADC1_JOFR2_union
    {
        uint32_t R;
        struct ADC1_JOFR2_B_struct
        {
            uint32_t JOFFSET2   :12U; //!< Data offset for injected channel
                                     //!<               x
            uint32_t            :20U;
        }B;
    } JOFR2; //!< injected channel data offset register (Offset: 0x18, reset: 0x00)

    union ADC1_JOFR3_union
    {
        uint32_t R;
        struct ADC1_JOFR3_B_struct
        {
            uint32_t JOFFSET3   :12U; //!< Data offset for injected channel
                                     //!<               x
            uint32_t            :20U;
        }B;
    } JOFR3; //!< injected channel data offset register (Offset: 0x1c, reset: 0x00)

    union ADC1_JOFR4_union
    {
        uint32_t R;
        struct ADC1_JOFR4_B_struct
        {
            uint32_t JOFFSET4   :12U; //!< Data offset for injected channel
                                     //!<               x
            uint32_t            :20U;
        }B;
    } JOFR4; //!< injected channel data offset register (Offset: 0x20, reset: 0x00)

    union ADC1_HTR_union
    {
        uint32_t R;
        struct ADC1_HTR_B_struct
        {
            uint32_t HT         :12U; //!< Analog watchdog higher
                                     //!<               threshold
            uint32_t            :20U;
        }B;
    } HTR; //!< watchdog higher threshold (Offset: 0x24, reset: 0xfff)

    union ADC1_LTR_union
    {
        uint32_t R;
        struct ADC1_LTR_B_struct
        {
            uint32_t LT         :12U; //!< Analog watchdog lower
                                     //!<               threshold
            uint32_t            :20U;
        }B;
    } LTR; //!< watchdog lower threshold (Offset: 0x28, reset: 0x00)

    union ADC1_SQR1_union
    {
        uint32_t R;
        struct ADC1_SQR1_B_struct
        {
            uint32_t SQ13       :5U; //!< 13th conversion in regular
                                     //!<               sequence
            uint32_t SQ14       :5U; //!< 14th conversion in regular
                                     //!<               sequence
            uint32_t SQ15       :5U; //!< 15th conversion in regular
                                     //!<               sequence
            uint32_t SQ16       :5U; //!< 16th conversion in regular
                                     //!<               sequence
            uint32_t L          :4U; //!< Regular channel sequence
                                     //!<               length
            uint32_t            :8U;
        }B;
    } SQR1; //!< regular sequence register 1 (Offset: 0x2c, reset: 0x00)

    union ADC1_SQR2_union
    {
        uint32_t R;
        struct ADC1_SQR2_B_struct
        {
            uint32_t SQ7        :5U; //!< 7th conversion in regular
                                     //!<               sequence
            uint32_t SQ8        :5U; //!< 8th conversion in regular
                                     //!<               sequence
            uint32_t SQ9        :5U; //!< 9th conversion in regular
                                     //!<               sequence
            uint32_t SQ10       :5U; //!< 10th conversion in regular
                                     //!<               sequence
            uint32_t SQ11       :5U; //!< 11th conversion in regular
                                     //!<               sequence
            uint32_t SQ12       :5U; //!< 12th conversion in regular
                                     //!<               sequence
            uint32_t            :2U;
        }B;
    } SQR2; //!< regular sequence register 2 (Offset: 0x30, reset: 0x00)

    union ADC1_SQR3_union
    {
        uint32_t R;
        struct ADC1_SQR3_B_struct
        {
            uint32_t SQ1        :5U; //!< 1st conversion in regular
                                     //!<               sequence
            uint32_t SQ2        :5U; //!< 2nd conversion in regular
                                     //!<               sequence
            uint32_t SQ3        :5U; //!< 3rd conversion in regular
                                     //!<               sequence
            uint32_t SQ4        :5U; //!< 4th conversion in regular
                                     //!<               sequence
            uint32_t SQ5        :5U; //!< 5th conversion in regular
                                     //!<               sequence
            uint32_t SQ6        :5U; //!< 6th conversion in regular
                                     //!<               sequence
            uint32_t            :2U;
        }B;
    } SQR3; //!< regular sequence register 3 (Offset: 0x34, reset: 0x00)

    union ADC1_JSQR_union
    {
        uint32_t R;
        struct ADC1_JSQR_B_struct
        {
            uint32_t JSQ1       :5U; //!< 1st conversion in injected
                                     //!<               sequence
            uint32_t JSQ2       :5U; //!< 2nd conversion in injected
                                     //!<               sequence
            uint32_t JSQ3       :5U; //!< 3rd conversion in injected
                                     //!<               sequence
            uint32_t JSQ4       :5U; //!< 4th conversion in injected
                                     //!<               sequence
            uint32_t JL         :2U; //!< Injected sequence length
            uint32_t            :10U;
        }B;
    } JSQR; //!< injected sequence register (Offset: 0x38, reset: 0x00)

    union ADC1_JDR1_union
    {
        uint32_t R;
        struct ADC1_JDR1_B_struct
        {
            uint32_t JDATA      :16U; //!< Injected data
            uint32_t            :16U;
        }B;
    } JDR1; //!< injected data register x (Offset: 0x3c, reset: 0x00)

    union ADC1_JDR2_union
    {
        uint32_t R;
        struct ADC1_JDR2_B_struct
        {
            uint32_t JDATA      :16U; //!< Injected data
            uint32_t            :16U;
        }B;
    } JDR2; //!< injected data register x (Offset: 0x40, reset: 0x00)

    union ADC1_JDR3_union
    {
        uint32_t R;
        struct ADC1_JDR3_B_struct
        {
            uint32_t JDATA      :16U; //!< Injected data
            uint32_t            :16U;
        }B;
    } JDR3; //!< injected data register x (Offset: 0x44, reset: 0x00)

    union ADC1_JDR4_union
    {
        uint32_t R;
        struct ADC1_JDR4_B_struct
        {
            uint32_t JDATA      :16U; //!< Injected data
            uint32_t            :16U;
        }B;
    } JDR4; //!< injected data register x (Offset: 0x48, reset: 0x00)

    union ADC1_DR_union
    {
        uint32_t R;
        struct ADC1_DR_B_struct
        {
            uint32_t DATA       :16U; //!< Regular data
            uint32_t            :16U;
        }B;
    } DR; //!< regular data register (Offset: 0x4c, reset: 0x00)
} ADC1_t;



/**************************************************************************************************/
/*!                                  ADC_Common module memory map                                 */
/**************************************************************************************************/
typedef volatile struct ADC_Common_struct
{
    union ADC_Common_CSR_union
    {
        uint32_t R;
        struct ADC_Common_CSR_B_struct
        {
            uint32_t AWD1       :1U; //!< Analog watchdog flag of ADC
                                     //!<               1
            uint32_t EOC1       :1U; //!< End of conversion of ADC 1
            uint32_t JEOC1      :1U; //!< Injected channel end of conversion of
                                     //!<               ADC 1
            uint32_t JSTRT1     :1U; //!< Injected channel Start flag of ADC
                                     //!<               1
            uint32_t STRT1      :1U; //!< Regular channel Start flag of ADC
                                     //!<               1
            uint32_t OVR1       :1U; //!< Overrun flag of ADC 1
            uint32_t            :2U;
            uint32_t AWD2       :1U; //!< Analog watchdog flag of ADC
                                     //!<               2
            uint32_t EOC2       :1U; //!< End of conversion of ADC 2
            uint32_t JEOC2      :1U; //!< Injected channel end of conversion of
                                     //!<               ADC 2
            uint32_t JSTRT2     :1U; //!< Injected channel Start flag of ADC
                                     //!<               2
            uint32_t STRT2      :1U; //!< Regular channel Start flag of ADC
                                     //!<               2
            uint32_t OVR2       :1U; //!< Overrun flag of ADC 2
            uint32_t            :2U;
            uint32_t AWD3       :1U; //!< Analog watchdog flag of ADC
                                     //!<               3
            uint32_t EOC3       :1U; //!< End of conversion of ADC 3
            uint32_t JEOC3      :1U; //!< Injected channel end of conversion of
                                     //!<               ADC 3
            uint32_t JSTRT3     :1U; //!< Injected channel Start flag of ADC
                                     //!<               3
            uint32_t STRT3      :1U; //!< Regular channel Start flag of ADC
                                     //!<               3
            uint32_t OVR3       :1U; //!< Overrun flag of ADC3
            uint32_t            :10U;
        }B;
    } CSR; //!< ADC Common status register (Offset: 0x00, reset: 0x00)

    union ADC_Common_CCR_union
    {
        uint32_t R;
        struct ADC_Common_CCR_B_struct
        {
            uint32_t            :8U;
            uint32_t DELAY      :4U; //!< Delay between 2 sampling
                                     //!<               phases
            uint32_t            :1U;
            uint32_t DDS        :1U; //!< DMA disable selection for multi-ADC
                                     //!<               mode
            uint32_t DMA        :2U; //!< Direct memory access mode for multi ADC
                                     //!<               mode
            uint32_t ADCPRE     :2U; //!< ADC prescaler
            uint32_t            :4U;
            uint32_t VBATE      :1U; //!< VBAT enable
            uint32_t TSVREFE    :1U; //!< Temperature sensor and VREFINT
                                     //!<               enable
            uint32_t            :8U;
        }B;
    } CCR; //!< ADC common control register (Offset: 0x04, reset: 0x00)
} ADC_Common_t;



/**************************************************************************************************/
/*!                                     CRC module memory map                                     */
/**************************************************************************************************/
typedef volatile struct CRC_struct
{
    union CRC_DR_union
    {
        uint32_t R;
        struct CRC_DR_B_struct
        {
            uint32_t DR         :32U; //!< Data Register
        }B;
    } DR; //!< Data register (Offset: 0x00, reset: 0xffffffff)

    union CRC_IDR_union
    {
        uint32_t R;
        struct CRC_IDR_B_struct
        {
            uint32_t IDR        :8U; //!< Independent Data register
            uint32_t            :24U;
        }B;
    } IDR; //!< Independent Data register (Offset: 0x04, reset: 0x00)

    union CRC_CR_union
    {
        uint32_t R;
        struct CRC_CR_B_struct
        {
            uint32_t CR         :1U; //!< Control regidter
            uint32_t            :31U;
        }B;
    } CR; //!< Control register (Offset: 0x08, reset: 0x00)
} CRC_t;



/**************************************************************************************************/
/*!                                     DBG module memory map                                     */
/**************************************************************************************************/
typedef volatile struct DBG_struct
{
    union DBG_DBGMCU_IDCODE_union
    {
        uint32_t R;
        struct DBG_DBGMCU_IDCODE_B_struct
        {
            uint32_t DEV_ID     :12U; //!< DEV_ID
            uint32_t            :4U;
            uint32_t REV_ID     :16U; //!< REV_ID
        }B;
    } DBGMCU_IDCODE; //!< IDCODE (Offset: 0x00, reset: 0x10006411)

    union DBG_DBGMCU_CR_union
    {
        uint32_t R;
        struct DBG_DBGMCU_CR_B_struct
        {
            uint32_t DBG_SLEEP  :1U; //!< DBG_SLEEP
            uint32_t DBG_STOP   :1U; //!< DBG_STOP
            uint32_t DBG_STANDBY:1U; //!< DBG_STANDBY
            uint32_t            :2U;
            uint32_t TRACE_IOEN :1U; //!< TRACE_IOEN
            uint32_t TRACE_MODE :2U; //!< TRACE_MODE
            uint32_t            :24U;
        }B;
    } DBGMCU_CR; //!< Control Register (Offset: 0x04, reset: 0x00)

    union DBG_DBGMCU_APB1_FZ_union
    {
        uint32_t R;
        struct DBG_DBGMCU_APB1_FZ_B_struct
        {
            uint32_t DBG_TIM2_STOP:1U; //!< DBG_TIM2_STOP
            uint32_t DBG_TIM3_STOP:1U; //!< DBG_TIM3 _STOP
            uint32_t DBG_TIM4_STOP:1U; //!< DBG_TIM4_STOP
            uint32_t DBG_TIM5_STOP:1U; //!< DBG_TIM5_STOP
            uint32_t            :6U;
            uint32_t DBG_RTC_Stop:1U; //!< RTC stopped when Core is
                                     //!<               halted
            uint32_t DBG_WWDG_STOP:1U; //!< DBG_WWDG_STOP
            uint32_t DBG_IWDEG_STOP:1U; //!< DBG_IWDEG_STOP
            uint32_t            :8U;
            uint32_t DBG_I2C1_SMBUS_TIMEOUT:1U; //!< DBG_J2C1_SMBUS_TIMEOUT
            uint32_t DBG_I2C2_SMBUS_TIMEOUT:1U; //!< DBG_J2C2_SMBUS_TIMEOUT
            uint32_t DBG_I2C3SMBUS_TIMEOUT:1U; //!< DBG_J2C3SMBUS_TIMEOUT
            uint32_t            :8U;
        }B;
    } DBGMCU_APB1_FZ; //!< Debug MCU APB1 Freeze registe (Offset: 0x08, reset: 0x00)

    union DBG_DBGMCU_APB2_FZ_union
    {
        uint32_t R;
        struct DBG_DBGMCU_APB2_FZ_B_struct
        {
            uint32_t DBG_TIM1_STOP:1U; //!< TIM1 counter stopped when core is
                                     //!<               halted
            uint32_t            :15U;
            uint32_t DBG_TIM9_STOP:1U; //!< TIM9 counter stopped when core is
                                     //!<               halted
            uint32_t DBG_TIM10_STOP:1U; //!< TIM10 counter stopped when core is
                                     //!<               halted
            uint32_t DBG_TIM11_STOP:1U; //!< TIM11 counter stopped when core is
                                     //!<               halted
            uint32_t            :13U;
        }B;
    } DBGMCU_APB2_FZ; //!< Debug MCU APB2 Freeze registe (Offset: 0x0c, reset: 0x00)
} DBG_t;



/**************************************************************************************************/
/*!                                     DMAx module memory map                                    */
/**************************************************************************************************/
typedef volatile struct DMAx_struct
{
    union DMAx_LISR_union
    {
        uint32_t R;
        struct DMAx_LISR_B_struct
        {
            uint32_t FEIF0      :1U; //!< Stream x FIFO error interrupt flag
                                     //!<               (x=3..0)
            uint32_t            :1U;
            uint32_t DMEIF0     :1U; //!< Stream x direct mode error interrupt
                                     //!<               flag (x=3..0)
            uint32_t TEIF0      :1U; //!< Stream x transfer error interrupt flag
                                     //!<               (x=3..0)
            uint32_t HTIF0      :1U; //!< Stream x half transfer interrupt flag
                                     //!<               (x=3..0)
            uint32_t TCIF0      :1U; //!< Stream x transfer complete interrupt
                                     //!<               flag (x = 3..0)
            uint32_t FEIF1      :1U; //!< Stream x FIFO error interrupt flag
                                     //!<               (x=3..0)
            uint32_t            :1U;
            uint32_t DMEIF1     :1U; //!< Stream x direct mode error interrupt
                                     //!<               flag (x=3..0)
            uint32_t TEIF1      :1U; //!< Stream x transfer error interrupt flag
                                     //!<               (x=3..0)
            uint32_t HTIF1      :1U; //!< Stream x half transfer interrupt flag
                                     //!<               (x=3..0)
            uint32_t TCIF1      :1U; //!< Stream x transfer complete interrupt
                                     //!<               flag (x = 3..0)
            uint32_t            :4U;
            uint32_t FEIF2      :1U; //!< Stream x FIFO error interrupt flag
                                     //!<               (x=3..0)
            uint32_t            :1U;
            uint32_t DMEIF2     :1U; //!< Stream x direct mode error interrupt
                                     //!<               flag (x=3..0)
            uint32_t TEIF2      :1U; //!< Stream x transfer error interrupt flag
                                     //!<               (x=3..0)
            uint32_t HTIF2      :1U; //!< Stream x half transfer interrupt flag
                                     //!<               (x=3..0)
            uint32_t TCIF2      :1U; //!< Stream x transfer complete interrupt
                                     //!<               flag (x = 3..0)
            uint32_t FEIF3      :1U; //!< Stream x FIFO error interrupt flag
                                     //!<               (x=3..0)
            uint32_t            :1U;
            uint32_t DMEIF3     :1U; //!< Stream x direct mode error interrupt
                                     //!<               flag (x=3..0)
            uint32_t TEIF3      :1U; //!< Stream x transfer error interrupt flag
                                     //!<               (x=3..0)
            uint32_t HTIF3      :1U; //!< Stream x half transfer interrupt flag
                                     //!<               (x=3..0)
            uint32_t TCIF3      :1U; //!< Stream x transfer complete interrupt
                                     //!<               flag (x = 3..0)
            uint32_t            :4U;
        }B;
    } LISR; //!< low interrupt status register (Offset: 0x00, reset: 0x00)

    union DMAx_HISR_union
    {
        uint32_t R;
        struct DMAx_HISR_B_struct
        {
            uint32_t FEIF4      :1U; //!< Stream x FIFO error interrupt flag
                                     //!<               (x=7..4)
            uint32_t            :1U;
            uint32_t DMEIF4     :1U; //!< Stream x direct mode error interrupt
                                     //!<               flag (x=7..4)
            uint32_t TEIF4      :1U; //!< Stream x transfer error interrupt flag
                                     //!<               (x=7..4)
            uint32_t HTIF4      :1U; //!< Stream x half transfer interrupt flag
                                     //!<               (x=7..4)
            uint32_t TCIF4      :1U; //!< Stream x transfer complete interrupt
                                     //!<               flag (x=7..4)
            uint32_t FEIF5      :1U; //!< Stream x FIFO error interrupt flag
                                     //!<               (x=7..4)
            uint32_t            :1U;
            uint32_t DMEIF5     :1U; //!< Stream x direct mode error interrupt
                                     //!<               flag (x=7..4)
            uint32_t TEIF5      :1U; //!< Stream x transfer error interrupt flag
                                     //!<               (x=7..4)
            uint32_t HTIF5      :1U; //!< Stream x half transfer interrupt flag
                                     //!<               (x=7..4)
            uint32_t TCIF5      :1U; //!< Stream x transfer complete interrupt
                                     //!<               flag (x=7..4)
            uint32_t            :4U;
            uint32_t FEIF6      :1U; //!< Stream x FIFO error interrupt flag
                                     //!<               (x=7..4)
            uint32_t            :1U;
            uint32_t DMEIF6     :1U; //!< Stream x direct mode error interrupt
                                     //!<               flag (x=7..4)
            uint32_t TEIF6      :1U; //!< Stream x transfer error interrupt flag
                                     //!<               (x=7..4)
            uint32_t HTIF6      :1U; //!< Stream x half transfer interrupt flag
                                     //!<               (x=7..4)
            uint32_t TCIF6      :1U; //!< Stream x transfer complete interrupt
                                     //!<               flag (x=7..4)
            uint32_t FEIF7      :1U; //!< Stream x FIFO error interrupt flag
                                     //!<               (x=7..4)
            uint32_t            :1U;
            uint32_t DMEIF7     :1U; //!< Stream x direct mode error interrupt
                                     //!<               flag (x=7..4)
            uint32_t TEIF7      :1U; //!< Stream x transfer error interrupt flag
                                     //!<               (x=7..4)
            uint32_t HTIF7      :1U; //!< Stream x half transfer interrupt flag
                                     //!<               (x=7..4)
            uint32_t TCIF7      :1U; //!< Stream x transfer complete interrupt
                                     //!<               flag (x=7..4)
            uint32_t            :4U;
        }B;
    } HISR; //!< high interrupt status register (Offset: 0x04, reset: 0x00)

    union DMAx_LIFCR_union
    {
        uint32_t R;
        struct DMAx_LIFCR_B_struct
        {
            uint32_t CFEIF0     :1U; //!< Stream x clear FIFO error interrupt flag
                                     //!<               (x = 3..0)
            uint32_t            :1U;
            uint32_t CDMEIF0    :1U; //!< Stream x clear direct mode error
                                     //!<               interrupt flag (x = 3..0)
            uint32_t CTEIF0     :1U; //!< Stream x clear transfer error interrupt
                                     //!<               flag (x = 3..0)
            uint32_t CHTIF0     :1U; //!< Stream x clear half transfer interrupt
                                     //!<               flag (x = 3..0)
            uint32_t CTCIF0     :1U; //!< Stream x clear transfer complete
                                     //!<               interrupt flag (x = 3..0)
            uint32_t CFEIF1     :1U; //!< Stream x clear FIFO error interrupt flag
                                     //!<               (x = 3..0)
            uint32_t            :1U;
            uint32_t CDMEIF1    :1U; //!< Stream x clear direct mode error
                                     //!<               interrupt flag (x = 3..0)
            uint32_t CTEIF1     :1U; //!< Stream x clear transfer error interrupt
                                     //!<               flag (x = 3..0)
            uint32_t CHTIF1     :1U; //!< Stream x clear half transfer interrupt
                                     //!<               flag (x = 3..0)
            uint32_t CTCIF1     :1U; //!< Stream x clear transfer complete
                                     //!<               interrupt flag (x = 3..0)
            uint32_t            :4U;
            uint32_t CFEIF2     :1U; //!< Stream x clear FIFO error interrupt flag
                                     //!<               (x = 3..0)
            uint32_t            :1U;
            uint32_t CDMEIF2    :1U; //!< Stream x clear direct mode error
                                     //!<               interrupt flag (x = 3..0)
            uint32_t CTEIF2     :1U; //!< Stream x clear transfer error interrupt
                                     //!<               flag (x = 3..0)
            uint32_t CHTIF2     :1U; //!< Stream x clear half transfer interrupt
                                     //!<               flag (x = 3..0)
            uint32_t CTCIF2     :1U; //!< Stream x clear transfer complete
                                     //!<               interrupt flag (x = 3..0)
            uint32_t CFEIF3     :1U; //!< Stream x clear FIFO error interrupt flag
                                     //!<               (x = 3..0)
            uint32_t            :1U;
            uint32_t CDMEIF3    :1U; //!< Stream x clear direct mode error
                                     //!<               interrupt flag (x = 3..0)
            uint32_t CTEIF3     :1U; //!< Stream x clear transfer error interrupt
                                     //!<               flag (x = 3..0)
            uint32_t CHTIF3     :1U; //!< Stream x clear half transfer interrupt
                                     //!<               flag (x = 3..0)
            uint32_t CTCIF3     :1U; //!< Stream x clear transfer complete
                                     //!<               interrupt flag (x = 3..0)
            uint32_t            :4U;
        }B;
    } LIFCR; //!< low interrupt flag clear (Offset: 0x08, reset: 0x00)

    union DMAx_HIFCR_union
    {
        uint32_t R;
        struct DMAx_HIFCR_B_struct
        {
            uint32_t CFEIF4     :1U; //!< Stream x clear FIFO error interrupt flag
                                     //!<               (x = 7..4)
            uint32_t            :1U;
            uint32_t CDMEIF4    :1U; //!< Stream x clear direct mode error
                                     //!<               interrupt flag (x = 7..4)
            uint32_t CTEIF4     :1U; //!< Stream x clear transfer error interrupt
                                     //!<               flag (x = 7..4)
            uint32_t CHTIF4     :1U; //!< Stream x clear half transfer interrupt
                                     //!<               flag (x = 7..4)
            uint32_t CTCIF4     :1U; //!< Stream x clear transfer complete
                                     //!<               interrupt flag (x = 7..4)
            uint32_t CFEIF5     :1U; //!< Stream x clear FIFO error interrupt flag
                                     //!<               (x = 7..4)
            uint32_t            :1U;
            uint32_t CDMEIF5    :1U; //!< Stream x clear direct mode error
                                     //!<               interrupt flag (x = 7..4)
            uint32_t CTEIF5     :1U; //!< Stream x clear transfer error interrupt
                                     //!<               flag (x = 7..4)
            uint32_t CHTIF5     :1U; //!< Stream x clear half transfer interrupt
                                     //!<               flag (x = 7..4)
            uint32_t CTCIF5     :1U; //!< Stream x clear transfer complete
                                     //!<               interrupt flag (x = 7..4)
            uint32_t            :4U;
            uint32_t CFEIF6     :1U; //!< Stream x clear FIFO error interrupt flag
                                     //!<               (x = 7..4)
            uint32_t            :1U;
            uint32_t CDMEIF6    :1U; //!< Stream x clear direct mode error
                                     //!<               interrupt flag (x = 7..4)
            uint32_t CTEIF6     :1U; //!< Stream x clear transfer error interrupt
                                     //!<               flag (x = 7..4)
            uint32_t CHTIF6     :1U; //!< Stream x clear half transfer interrupt
                                     //!<               flag (x = 7..4)
            uint32_t CTCIF6     :1U; //!< Stream x clear transfer complete
                                     //!<               interrupt flag (x = 7..4)
            uint32_t CFEIF7     :1U; //!< Stream x clear FIFO error interrupt flag
                                     //!<               (x = 7..4)
            uint32_t            :1U;
            uint32_t CDMEIF7    :1U; //!< Stream x clear direct mode error
                                     //!<               interrupt flag (x = 7..4)
            uint32_t CTEIF7     :1U; //!< Stream x clear transfer error interrupt
                                     //!<               flag (x = 7..4)
            uint32_t CHTIF7     :1U; //!< Stream x clear half transfer interrupt
                                     //!<               flag (x = 7..4)
            uint32_t CTCIF7     :1U; //!< Stream x clear transfer complete
                                     //!<               interrupt flag (x = 7..4)
            uint32_t            :4U;
        }B;
    } HIFCR; //!< high interrupt flag clear (Offset: 0x0c, reset: 0x00)

    union DMAx_S0CR_union
    {
        uint32_t R;
        struct DMAx_S0CR_B_struct
        {
            uint32_t EN         :1U; //!< Stream enable / flag stream ready when
                                     //!<               read low
            uint32_t DMEIE      :1U; //!< Direct mode error interrupt
                                     //!<               enable
            uint32_t TEIE       :1U; //!< Transfer error interrupt
                                     //!<               enable
            uint32_t HTIE       :1U; //!< Half transfer interrupt
                                     //!<               enable
            uint32_t TCIE       :1U; //!< Transfer complete interrupt
                                     //!<               enable
            uint32_t PFCTRL     :1U; //!< Peripheral flow controller
            uint32_t DIR        :2U; //!< Data transfer direction
            uint32_t CIRC       :1U; //!< Circular mode
            uint32_t PINC       :1U; //!< Peripheral increment mode
            uint32_t MINC       :1U; //!< Memory increment mode
            uint32_t PSIZE      :2U; //!< Peripheral data size
            uint32_t MSIZE      :2U; //!< Memory data size
            uint32_t PINCOS     :1U; //!< Peripheral increment offset
                                     //!<               size
            uint32_t PL         :2U; //!< Priority level
            uint32_t DBM        :1U; //!< Double buffer mode
            uint32_t CT         :1U; //!< Current target (only in double buffer
                                     //!<               mode)
            uint32_t            :1U;
            uint32_t PBURST     :2U; //!< Peripheral burst transfer
                                     //!<               configuration
            uint32_t MBURST     :2U; //!< Memory burst transfer
                                     //!<               configuration
            uint32_t CHSEL      :3U; //!< Channel selection
            uint32_t            :4U;
        }B;
    } S0CR; //!< stream x configuration (Offset: 0x10, reset: 0x00)

    union DMAx_S0NDTR_union
    {
        uint32_t R;
        struct DMAx_S0NDTR_B_struct
        {
            uint32_t NDT        :16U; //!< Number of data items to
                                     //!<               transfer
            uint32_t            :16U;
        }B;
    } S0NDTR; //!< stream x number of data (Offset: 0x14, reset: 0x00)

    union DMAx_S0PAR_union
    {
        uint32_t R;
        struct DMAx_S0PAR_B_struct
        {
            uint32_t PA         :32U; //!< Peripheral address
        }B;
    } S0PAR; //!< stream x peripheral address (Offset: 0x18, reset: 0x00)

    union DMAx_S0M0AR_union
    {
        uint32_t R;
        struct DMAx_S0M0AR_B_struct
        {
            uint32_t M0A        :32U; //!< Memory 0 address
        }B;
    } S0M0AR; //!< stream x memory 0 address (Offset: 0x1c, reset: 0x00)

    union DMAx_S0M1AR_union
    {
        uint32_t R;
        struct DMAx_S0M1AR_B_struct
        {
            uint32_t M1A        :32U; //!< Memory 1 address (used in case of Double
                                     //!<               buffer mode)
        }B;
    } S0M1AR; //!< stream x memory 1 address (Offset: 0x20, reset: 0x00)

    union DMAx_S0FCR_union
    {
        uint32_t R;
        struct DMAx_S0FCR_B_struct
        {
            uint32_t FTH        :2U; //!< FIFO threshold selection
            uint32_t DMDIS      :1U; //!< Direct mode disable
            uint32_t FS         :3U; //!< FIFO status
            uint32_t            :1U;
            uint32_t FEIE       :1U; //!< FIFO error interrupt
                                     //!<               enable
            uint32_t            :24U;
        }B;
    } S0FCR; //!< stream x FIFO control register (Offset: 0x24, reset: 0x21)

    union DMAx_S1CR_union
    {
        uint32_t R;
        struct DMAx_S1CR_B_struct
        {
            uint32_t EN         :1U; //!< Stream enable / flag stream ready when
                                     //!<               read low
            uint32_t DMEIE      :1U; //!< Direct mode error interrupt
                                     //!<               enable
            uint32_t TEIE       :1U; //!< Transfer error interrupt
                                     //!<               enable
            uint32_t HTIE       :1U; //!< Half transfer interrupt
                                     //!<               enable
            uint32_t TCIE       :1U; //!< Transfer complete interrupt
                                     //!<               enable
            uint32_t PFCTRL     :1U; //!< Peripheral flow controller
            uint32_t DIR        :2U; //!< Data transfer direction
            uint32_t CIRC       :1U; //!< Circular mode
            uint32_t PINC       :1U; //!< Peripheral increment mode
            uint32_t MINC       :1U; //!< Memory increment mode
            uint32_t PSIZE      :2U; //!< Peripheral data size
            uint32_t MSIZE      :2U; //!< Memory data size
            uint32_t PINCOS     :1U; //!< Peripheral increment offset
                                     //!<               size
            uint32_t PL         :2U; //!< Priority level
            uint32_t DBM        :1U; //!< Double buffer mode
            uint32_t CT         :1U; //!< Current target (only in double buffer
                                     //!<               mode)
            uint32_t ACK        :1U; //!< ACK
            uint32_t PBURST     :2U; //!< Peripheral burst transfer
                                     //!<               configuration
            uint32_t MBURST     :2U; //!< Memory burst transfer
                                     //!<               configuration
            uint32_t CHSEL      :3U; //!< Channel selection
            uint32_t            :4U;
        }B;
    } S1CR; //!< stream x configuration (Offset: 0x28, reset: 0x00)

    union DMAx_S1NDTR_union
    {
        uint32_t R;
        struct DMAx_S1NDTR_B_struct
        {
            uint32_t NDT        :16U; //!< Number of data items to
                                     //!<               transfer
            uint32_t            :16U;
        }B;
    } S1NDTR; //!< stream x number of data (Offset: 0x2c, reset: 0x00)

    union DMAx_S1PAR_union
    {
        uint32_t R;
        struct DMAx_S1PAR_B_struct
        {
            uint32_t PA         :32U; //!< Peripheral address
        }B;
    } S1PAR; //!< stream x peripheral address (Offset: 0x30, reset: 0x00)

    union DMAx_S1M0AR_union
    {
        uint32_t R;
        struct DMAx_S1M0AR_B_struct
        {
            uint32_t M0A        :32U; //!< Memory 0 address
        }B;
    } S1M0AR; //!< stream x memory 0 address (Offset: 0x34, reset: 0x00)

    union DMAx_S1M1AR_union
    {
        uint32_t R;
        struct DMAx_S1M1AR_B_struct
        {
            uint32_t M1A        :32U; //!< Memory 1 address (used in case of Double
                                     //!<               buffer mode)
        }B;
    } S1M1AR; //!< stream x memory 1 address (Offset: 0x38, reset: 0x00)

    union DMAx_S1FCR_union
    {
        uint32_t R;
        struct DMAx_S1FCR_B_struct
        {
            uint32_t FTH        :2U; //!< FIFO threshold selection
            uint32_t DMDIS      :1U; //!< Direct mode disable
            uint32_t FS         :3U; //!< FIFO status
            uint32_t            :1U;
            uint32_t FEIE       :1U; //!< FIFO error interrupt
                                     //!<               enable
            uint32_t            :24U;
        }B;
    } S1FCR; //!< stream x FIFO control register (Offset: 0x3c, reset: 0x21)

    union DMAx_S2CR_union
    {
        uint32_t R;
        struct DMAx_S2CR_B_struct
        {
            uint32_t EN         :1U; //!< Stream enable / flag stream ready when
                                     //!<               read low
            uint32_t DMEIE      :1U; //!< Direct mode error interrupt
                                     //!<               enable
            uint32_t TEIE       :1U; //!< Transfer error interrupt
                                     //!<               enable
            uint32_t HTIE       :1U; //!< Half transfer interrupt
                                     //!<               enable
            uint32_t TCIE       :1U; //!< Transfer complete interrupt
                                     //!<               enable
            uint32_t PFCTRL     :1U; //!< Peripheral flow controller
            uint32_t DIR        :2U; //!< Data transfer direction
            uint32_t CIRC       :1U; //!< Circular mode
            uint32_t PINC       :1U; //!< Peripheral increment mode
            uint32_t MINC       :1U; //!< Memory increment mode
            uint32_t PSIZE      :2U; //!< Peripheral data size
            uint32_t MSIZE      :2U; //!< Memory data size
            uint32_t PINCOS     :1U; //!< Peripheral increment offset
                                     //!<               size
            uint32_t PL         :2U; //!< Priority level
            uint32_t DBM        :1U; //!< Double buffer mode
            uint32_t CT         :1U; //!< Current target (only in double buffer
                                     //!<               mode)
            uint32_t ACK        :1U; //!< ACK
            uint32_t PBURST     :2U; //!< Peripheral burst transfer
                                     //!<               configuration
            uint32_t MBURST     :2U; //!< Memory burst transfer
                                     //!<               configuration
            uint32_t CHSEL      :3U; //!< Channel selection
            uint32_t            :4U;
        }B;
    } S2CR; //!< stream x configuration (Offset: 0x40, reset: 0x00)

    union DMAx_S2NDTR_union
    {
        uint32_t R;
        struct DMAx_S2NDTR_B_struct
        {
            uint32_t NDT        :16U; //!< Number of data items to
                                     //!<               transfer
            uint32_t            :16U;
        }B;
    } S2NDTR; //!< stream x number of data (Offset: 0x44, reset: 0x00)

    union DMAx_S2PAR_union
    {
        uint32_t R;
        struct DMAx_S2PAR_B_struct
        {
            uint32_t PA         :32U; //!< Peripheral address
        }B;
    } S2PAR; //!< stream x peripheral address (Offset: 0x48, reset: 0x00)

    union DMAx_S2M0AR_union
    {
        uint32_t R;
        struct DMAx_S2M0AR_B_struct
        {
            uint32_t M0A        :32U; //!< Memory 0 address
        }B;
    } S2M0AR; //!< stream x memory 0 address (Offset: 0x4c, reset: 0x00)

    union DMAx_S2M1AR_union
    {
        uint32_t R;
        struct DMAx_S2M1AR_B_struct
        {
            uint32_t M1A        :32U; //!< Memory 1 address (used in case of Double
                                     //!<               buffer mode)
        }B;
    } S2M1AR; //!< stream x memory 1 address (Offset: 0x50, reset: 0x00)

    union DMAx_S2FCR_union
    {
        uint32_t R;
        struct DMAx_S2FCR_B_struct
        {
            uint32_t FTH        :2U; //!< FIFO threshold selection
            uint32_t DMDIS      :1U; //!< Direct mode disable
            uint32_t FS         :3U; //!< FIFO status
            uint32_t            :1U;
            uint32_t FEIE       :1U; //!< FIFO error interrupt
                                     //!<               enable
            uint32_t            :24U;
        }B;
    } S2FCR; //!< stream x FIFO control register (Offset: 0x54, reset: 0x21)

    union DMAx_S3CR_union
    {
        uint32_t R;
        struct DMAx_S3CR_B_struct
        {
            uint32_t EN         :1U; //!< Stream enable / flag stream ready when
                                     //!<               read low
            uint32_t DMEIE      :1U; //!< Direct mode error interrupt
                                     //!<               enable
            uint32_t TEIE       :1U; //!< Transfer error interrupt
                                     //!<               enable
            uint32_t HTIE       :1U; //!< Half transfer interrupt
                                     //!<               enable
            uint32_t TCIE       :1U; //!< Transfer complete interrupt
                                     //!<               enable
            uint32_t PFCTRL     :1U; //!< Peripheral flow controller
            uint32_t DIR        :2U; //!< Data transfer direction
            uint32_t CIRC       :1U; //!< Circular mode
            uint32_t PINC       :1U; //!< Peripheral increment mode
            uint32_t MINC       :1U; //!< Memory increment mode
            uint32_t PSIZE      :2U; //!< Peripheral data size
            uint32_t MSIZE      :2U; //!< Memory data size
            uint32_t PINCOS     :1U; //!< Peripheral increment offset
                                     //!<               size
            uint32_t PL         :2U; //!< Priority level
            uint32_t DBM        :1U; //!< Double buffer mode
            uint32_t CT         :1U; //!< Current target (only in double buffer
                                     //!<               mode)
            uint32_t ACK        :1U; //!< ACK
            uint32_t PBURST     :2U; //!< Peripheral burst transfer
                                     //!<               configuration
            uint32_t MBURST     :2U; //!< Memory burst transfer
                                     //!<               configuration
            uint32_t CHSEL      :3U; //!< Channel selection
            uint32_t            :4U;
        }B;
    } S3CR; //!< stream x configuration (Offset: 0x58, reset: 0x00)

    union DMAx_S3NDTR_union
    {
        uint32_t R;
        struct DMAx_S3NDTR_B_struct
        {
            uint32_t NDT        :16U; //!< Number of data items to
                                     //!<               transfer
            uint32_t            :16U;
        }B;
    } S3NDTR; //!< stream x number of data (Offset: 0x5c, reset: 0x00)

    union DMAx_S3PAR_union
    {
        uint32_t R;
        struct DMAx_S3PAR_B_struct
        {
            uint32_t PA         :32U; //!< Peripheral address
        }B;
    } S3PAR; //!< stream x peripheral address (Offset: 0x60, reset: 0x00)

    union DMAx_S3M0AR_union
    {
        uint32_t R;
        struct DMAx_S3M0AR_B_struct
        {
            uint32_t M0A        :32U; //!< Memory 0 address
        }B;
    } S3M0AR; //!< stream x memory 0 address (Offset: 0x64, reset: 0x00)

    union DMAx_S3M1AR_union
    {
        uint32_t R;
        struct DMAx_S3M1AR_B_struct
        {
            uint32_t M1A        :32U; //!< Memory 1 address (used in case of Double
                                     //!<               buffer mode)
        }B;
    } S3M1AR; //!< stream x memory 1 address (Offset: 0x68, reset: 0x00)

    union DMAx_S3FCR_union
    {
        uint32_t R;
        struct DMAx_S3FCR_B_struct
        {
            uint32_t FTH        :2U; //!< FIFO threshold selection
            uint32_t DMDIS      :1U; //!< Direct mode disable
            uint32_t FS         :3U; //!< FIFO status
            uint32_t            :1U;
            uint32_t FEIE       :1U; //!< FIFO error interrupt
                                     //!<               enable
            uint32_t            :24U;
        }B;
    } S3FCR; //!< stream x FIFO control register (Offset: 0x6c, reset: 0x21)

    union DMAx_S4CR_union
    {
        uint32_t R;
        struct DMAx_S4CR_B_struct
        {
            uint32_t EN         :1U; //!< Stream enable / flag stream ready when
                                     //!<               read low
            uint32_t DMEIE      :1U; //!< Direct mode error interrupt
                                     //!<               enable
            uint32_t TEIE       :1U; //!< Transfer error interrupt
                                     //!<               enable
            uint32_t HTIE       :1U; //!< Half transfer interrupt
                                     //!<               enable
            uint32_t TCIE       :1U; //!< Transfer complete interrupt
                                     //!<               enable
            uint32_t PFCTRL     :1U; //!< Peripheral flow controller
            uint32_t DIR        :2U; //!< Data transfer direction
            uint32_t CIRC       :1U; //!< Circular mode
            uint32_t PINC       :1U; //!< Peripheral increment mode
            uint32_t MINC       :1U; //!< Memory increment mode
            uint32_t PSIZE      :2U; //!< Peripheral data size
            uint32_t MSIZE      :2U; //!< Memory data size
            uint32_t PINCOS     :1U; //!< Peripheral increment offset
                                     //!<               size
            uint32_t PL         :2U; //!< Priority level
            uint32_t DBM        :1U; //!< Double buffer mode
            uint32_t CT         :1U; //!< Current target (only in double buffer
                                     //!<               mode)
            uint32_t ACK        :1U; //!< ACK
            uint32_t PBURST     :2U; //!< Peripheral burst transfer
                                     //!<               configuration
            uint32_t MBURST     :2U; //!< Memory burst transfer
                                     //!<               configuration
            uint32_t CHSEL      :3U; //!< Channel selection
            uint32_t            :4U;
        }B;
    } S4CR; //!< stream x configuration (Offset: 0x70, reset: 0x00)

    union DMAx_S4NDTR_union
    {
        uint32_t R;
        struct DMAx_S4NDTR_B_struct
        {
            uint32_t NDT        :16U; //!< Number of data items to
                                     //!<               transfer
            uint32_t            :16U;
        }B;
    } S4NDTR; //!< stream x number of data (Offset: 0x74, reset: 0x00)

    union DMAx_S4PAR_union
    {
        uint32_t R;
        struct DMAx_S4PAR_B_struct
        {
            uint32_t PA         :32U; //!< Peripheral address
        }B;
    } S4PAR; //!< stream x peripheral address (Offset: 0x78, reset: 0x00)

    union DMAx_S4M0AR_union
    {
        uint32_t R;
        struct DMAx_S4M0AR_B_struct
        {
            uint32_t M0A        :32U; //!< Memory 0 address
        }B;
    } S4M0AR; //!< stream x memory 0 address (Offset: 0x7c, reset: 0x00)

    union DMAx_S4M1AR_union
    {
        uint32_t R;
        struct DMAx_S4M1AR_B_struct
        {
            uint32_t M1A        :32U; //!< Memory 1 address (used in case of Double
                                     //!<               buffer mode)
        }B;
    } S4M1AR; //!< stream x memory 1 address (Offset: 0x80, reset: 0x00)

    union DMAx_S4FCR_union
    {
        uint32_t R;
        struct DMAx_S4FCR_B_struct
        {
            uint32_t FTH        :2U; //!< FIFO threshold selection
            uint32_t DMDIS      :1U; //!< Direct mode disable
            uint32_t FS         :3U; //!< FIFO status
            uint32_t            :1U;
            uint32_t FEIE       :1U; //!< FIFO error interrupt
                                     //!<               enable
            uint32_t            :24U;
        }B;
    } S4FCR; //!< stream x FIFO control register (Offset: 0x84, reset: 0x21)

    union DMAx_S5CR_union
    {
        uint32_t R;
        struct DMAx_S5CR_B_struct
        {
            uint32_t EN         :1U; //!< Stream enable / flag stream ready when
                                     //!<               read low
            uint32_t DMEIE      :1U; //!< Direct mode error interrupt
                                     //!<               enable
            uint32_t TEIE       :1U; //!< Transfer error interrupt
                                     //!<               enable
            uint32_t HTIE       :1U; //!< Half transfer interrupt
                                     //!<               enable
            uint32_t TCIE       :1U; //!< Transfer complete interrupt
                                     //!<               enable
            uint32_t PFCTRL     :1U; //!< Peripheral flow controller
            uint32_t DIR        :2U; //!< Data transfer direction
            uint32_t CIRC       :1U; //!< Circular mode
            uint32_t PINC       :1U; //!< Peripheral increment mode
            uint32_t MINC       :1U; //!< Memory increment mode
            uint32_t PSIZE      :2U; //!< Peripheral data size
            uint32_t MSIZE      :2U; //!< Memory data size
            uint32_t PINCOS     :1U; //!< Peripheral increment offset
                                     //!<               size
            uint32_t PL         :2U; //!< Priority level
            uint32_t DBM        :1U; //!< Double buffer mode
            uint32_t CT         :1U; //!< Current target (only in double buffer
                                     //!<               mode)
            uint32_t ACK        :1U; //!< ACK
            uint32_t PBURST     :2U; //!< Peripheral burst transfer
                                     //!<               configuration
            uint32_t MBURST     :2U; //!< Memory burst transfer
                                     //!<               configuration
            uint32_t CHSEL      :3U; //!< Channel selection
            uint32_t            :4U;
        }B;
    } S5CR; //!< stream x configuration (Offset: 0x88, reset: 0x00)

    union DMAx_S5NDTR_union
    {
        uint32_t R;
        struct DMAx_S5NDTR_B_struct
        {
            uint32_t NDT        :16U; //!< Number of data items to
                                     //!<               transfer
            uint32_t            :16U;
        }B;
    } S5NDTR; //!< stream x number of data (Offset: 0x8c, reset: 0x00)

    union DMAx_S5PAR_union
    {
        uint32_t R;
        struct DMAx_S5PAR_B_struct
        {
            uint32_t PA         :32U; //!< Peripheral address
        }B;
    } S5PAR; //!< stream x peripheral address (Offset: 0x90, reset: 0x00)

    union DMAx_S5M0AR_union
    {
        uint32_t R;
        struct DMAx_S5M0AR_B_struct
        {
            uint32_t M0A        :32U; //!< Memory 0 address
        }B;
    } S5M0AR; //!< stream x memory 0 address (Offset: 0x94, reset: 0x00)

    union DMAx_S5M1AR_union
    {
        uint32_t R;
        struct DMAx_S5M1AR_B_struct
        {
            uint32_t M1A        :32U; //!< Memory 1 address (used in case of Double
                                     //!<               buffer mode)
        }B;
    } S5M1AR; //!< stream x memory 1 address (Offset: 0x98, reset: 0x00)

    union DMAx_S5FCR_union
    {
        uint32_t R;
        struct DMAx_S5FCR_B_struct
        {
            uint32_t FTH        :2U; //!< FIFO threshold selection
            uint32_t DMDIS      :1U; //!< Direct mode disable
            uint32_t FS         :3U; //!< FIFO status
            uint32_t            :1U;
            uint32_t FEIE       :1U; //!< FIFO error interrupt
                                     //!<               enable
            uint32_t            :24U;
        }B;
    } S5FCR; //!< stream x FIFO control register (Offset: 0x9c, reset: 0x21)

    union DMAx_S6CR_union
    {
        uint32_t R;
        struct DMAx_S6CR_B_struct
        {
            uint32_t EN         :1U; //!< Stream enable / flag stream ready when
                                     //!<               read low
            uint32_t DMEIE      :1U; //!< Direct mode error interrupt
                                     //!<               enable
            uint32_t TEIE       :1U; //!< Transfer error interrupt
                                     //!<               enable
            uint32_t HTIE       :1U; //!< Half transfer interrupt
                                     //!<               enable
            uint32_t TCIE       :1U; //!< Transfer complete interrupt
                                     //!<               enable
            uint32_t PFCTRL     :1U; //!< Peripheral flow controller
            uint32_t DIR        :2U; //!< Data transfer direction
            uint32_t CIRC       :1U; //!< Circular mode
            uint32_t PINC       :1U; //!< Peripheral increment mode
            uint32_t MINC       :1U; //!< Memory increment mode
            uint32_t PSIZE      :2U; //!< Peripheral data size
            uint32_t MSIZE      :2U; //!< Memory data size
            uint32_t PINCOS     :1U; //!< Peripheral increment offset
                                     //!<               size
            uint32_t PL         :2U; //!< Priority level
            uint32_t DBM        :1U; //!< Double buffer mode
            uint32_t CT         :1U; //!< Current target (only in double buffer
                                     //!<               mode)
            uint32_t ACK        :1U; //!< ACK
            uint32_t PBURST     :2U; //!< Peripheral burst transfer
                                     //!<               configuration
            uint32_t MBURST     :2U; //!< Memory burst transfer
                                     //!<               configuration
            uint32_t CHSEL      :3U; //!< Channel selection
            uint32_t            :4U;
        }B;
    } S6CR; //!< stream x configuration (Offset: 0xa0, reset: 0x00)

    union DMAx_S6NDTR_union
    {
        uint32_t R;
        struct DMAx_S6NDTR_B_struct
        {
            uint32_t NDT        :16U; //!< Number of data items to
                                     //!<               transfer
            uint32_t            :16U;
        }B;
    } S6NDTR; //!< stream x number of data (Offset: 0xa4, reset: 0x00)

    union DMAx_S6PAR_union
    {
        uint32_t R;
        struct DMAx_S6PAR_B_struct
        {
            uint32_t PA         :32U; //!< Peripheral address
        }B;
    } S6PAR; //!< stream x peripheral address (Offset: 0xa8, reset: 0x00)

    union DMAx_S6M0AR_union
    {
        uint32_t R;
        struct DMAx_S6M0AR_B_struct
        {
            uint32_t M0A        :32U; //!< Memory 0 address
        }B;
    } S6M0AR; //!< stream x memory 0 address (Offset: 0xac, reset: 0x00)

    union DMAx_S6M1AR_union
    {
        uint32_t R;
        struct DMAx_S6M1AR_B_struct
        {
            uint32_t M1A        :32U; //!< Memory 1 address (used in case of Double
                                     //!<               buffer mode)
        }B;
    } S6M1AR; //!< stream x memory 1 address (Offset: 0xb0, reset: 0x00)

    union DMAx_S6FCR_union
    {
        uint32_t R;
        struct DMAx_S6FCR_B_struct
        {
            uint32_t FTH        :2U; //!< FIFO threshold selection
            uint32_t DMDIS      :1U; //!< Direct mode disable
            uint32_t FS         :3U; //!< FIFO status
            uint32_t            :1U;
            uint32_t FEIE       :1U; //!< FIFO error interrupt
                                     //!<               enable
            uint32_t            :24U;
        }B;
    } S6FCR; //!< stream x FIFO control register (Offset: 0xb4, reset: 0x21)

    union DMAx_S7CR_union
    {
        uint32_t R;
        struct DMAx_S7CR_B_struct
        {
            uint32_t EN         :1U; //!< Stream enable / flag stream ready when
                                     //!<               read low
            uint32_t DMEIE      :1U; //!< Direct mode error interrupt
                                     //!<               enable
            uint32_t TEIE       :1U; //!< Transfer error interrupt
                                     //!<               enable
            uint32_t HTIE       :1U; //!< Half transfer interrupt
                                     //!<               enable
            uint32_t TCIE       :1U; //!< Transfer complete interrupt
                                     //!<               enable
            uint32_t PFCTRL     :1U; //!< Peripheral flow controller
            uint32_t DIR        :2U; //!< Data transfer direction
            uint32_t CIRC       :1U; //!< Circular mode
            uint32_t PINC       :1U; //!< Peripheral increment mode
            uint32_t MINC       :1U; //!< Memory increment mode
            uint32_t PSIZE      :2U; //!< Peripheral data size
            uint32_t MSIZE      :2U; //!< Memory data size
            uint32_t PINCOS     :1U; //!< Peripheral increment offset
                                     //!<               size
            uint32_t PL         :2U; //!< Priority level
            uint32_t DBM        :1U; //!< Double buffer mode
            uint32_t CT         :1U; //!< Current target (only in double buffer
                                     //!<               mode)
            uint32_t ACK        :1U; //!< ACK
            uint32_t PBURST     :2U; //!< Peripheral burst transfer
                                     //!<               configuration
            uint32_t MBURST     :2U; //!< Memory burst transfer
                                     //!<               configuration
            uint32_t CHSEL      :3U; //!< Channel selection
            uint32_t            :4U;
        }B;
    } S7CR; //!< stream x configuration (Offset: 0xb8, reset: 0x00)

    union DMAx_S7NDTR_union
    {
        uint32_t R;
        struct DMAx_S7NDTR_B_struct
        {
            uint32_t NDT        :16U; //!< Number of data items to
                                     //!<               transfer
            uint32_t            :16U;
        }B;
    } S7NDTR; //!< stream x number of data (Offset: 0xbc, reset: 0x00)

    union DMAx_S7PAR_union
    {
        uint32_t R;
        struct DMAx_S7PAR_B_struct
        {
            uint32_t PA         :32U; //!< Peripheral address
        }B;
    } S7PAR; //!< stream x peripheral address (Offset: 0xc0, reset: 0x00)

    union DMAx_S7M0AR_union
    {
        uint32_t R;
        struct DMAx_S7M0AR_B_struct
        {
            uint32_t M0A        :32U; //!< Memory 0 address
        }B;
    } S7M0AR; //!< stream x memory 0 address (Offset: 0xc4, reset: 0x00)

    union DMAx_S7M1AR_union
    {
        uint32_t R;
        struct DMAx_S7M1AR_B_struct
        {
            uint32_t M1A        :32U; //!< Memory 1 address (used in case of Double
                                     //!<               buffer mode)
        }B;
    } S7M1AR; //!< stream x memory 1 address (Offset: 0xc8, reset: 0x00)

    union DMAx_S7FCR_union
    {
        uint32_t R;
        struct DMAx_S7FCR_B_struct
        {
            uint32_t FTH        :2U; //!< FIFO threshold selection
            uint32_t DMDIS      :1U; //!< Direct mode disable
            uint32_t FS         :3U; //!< FIFO status
            uint32_t            :1U;
            uint32_t FEIE       :1U; //!< FIFO error interrupt
                                     //!<               enable
            uint32_t            :24U;
        }B;
    } S7FCR; //!< stream x FIFO control register (Offset: 0xcc, reset: 0x21)
} DMAx_t;



/**************************************************************************************************/
/*!                                     EXTI module memory map                                    */
/**************************************************************************************************/
typedef volatile struct EXTI_struct
{
    union EXTI_IMR_union
    {
        uint32_t R;
        struct EXTI_IMR_B_struct
        {
            uint32_t MR0        :1U; //!< Interrupt Mask on line 0
            uint32_t MR1        :1U; //!< Interrupt Mask on line 1
            uint32_t MR2        :1U; //!< Interrupt Mask on line 2
            uint32_t MR3        :1U; //!< Interrupt Mask on line 3
            uint32_t MR4        :1U; //!< Interrupt Mask on line 4
            uint32_t MR5        :1U; //!< Interrupt Mask on line 5
            uint32_t MR6        :1U; //!< Interrupt Mask on line 6
            uint32_t MR7        :1U; //!< Interrupt Mask on line 7
            uint32_t MR8        :1U; //!< Interrupt Mask on line 8
            uint32_t MR9        :1U; //!< Interrupt Mask on line 9
            uint32_t MR10       :1U; //!< Interrupt Mask on line 10
            uint32_t MR11       :1U; //!< Interrupt Mask on line 11
            uint32_t MR12       :1U; //!< Interrupt Mask on line 12
            uint32_t MR13       :1U; //!< Interrupt Mask on line 13
            uint32_t MR14       :1U; //!< Interrupt Mask on line 14
            uint32_t MR15       :1U; //!< Interrupt Mask on line 15
            uint32_t MR16       :1U; //!< Interrupt Mask on line 16
            uint32_t MR17       :1U; //!< Interrupt Mask on line 17
            uint32_t MR18       :1U; //!< Interrupt Mask on line 18
            uint32_t MR19       :1U; //!< Interrupt Mask on line 19
            uint32_t MR20       :1U; //!< Interrupt Mask on line 20
            uint32_t MR21       :1U; //!< Interrupt Mask on line 21
            uint32_t MR22       :1U; //!< Interrupt Mask on line 22
            uint32_t            :9U;
        }B;
    } IMR; //!< Interrupt mask register (Offset: 0x00, reset: 0x00)

    union EXTI_EMR_union
    {
        uint32_t R;
        struct EXTI_EMR_B_struct
        {
            uint32_t MR0        :1U; //!< Event Mask on line 0
            uint32_t MR1        :1U; //!< Event Mask on line 1
            uint32_t MR2        :1U; //!< Event Mask on line 2
            uint32_t MR3        :1U; //!< Event Mask on line 3
            uint32_t MR4        :1U; //!< Event Mask on line 4
            uint32_t MR5        :1U; //!< Event Mask on line 5
            uint32_t MR6        :1U; //!< Event Mask on line 6
            uint32_t MR7        :1U; //!< Event Mask on line 7
            uint32_t MR8        :1U; //!< Event Mask on line 8
            uint32_t MR9        :1U; //!< Event Mask on line 9
            uint32_t MR10       :1U; //!< Event Mask on line 10
            uint32_t MR11       :1U; //!< Event Mask on line 11
            uint32_t MR12       :1U; //!< Event Mask on line 12
            uint32_t MR13       :1U; //!< Event Mask on line 13
            uint32_t MR14       :1U; //!< Event Mask on line 14
            uint32_t MR15       :1U; //!< Event Mask on line 15
            uint32_t MR16       :1U; //!< Event Mask on line 16
            uint32_t MR17       :1U; //!< Event Mask on line 17
            uint32_t MR18       :1U; //!< Event Mask on line 18
            uint32_t MR19       :1U; //!< Event Mask on line 19
            uint32_t MR20       :1U; //!< Event Mask on line 20
            uint32_t MR21       :1U; //!< Event Mask on line 21
            uint32_t MR22       :1U; //!< Event Mask on line 22
            uint32_t            :9U;
        }B;
    } EMR; //!< Event mask register (EXTI_EMR) (Offset: 0x04, reset: 0x00)

    union EXTI_RTSR_union
    {
        uint32_t R;
        struct EXTI_RTSR_B_struct
        {
            uint32_t TR0        :1U; //!< Rising trigger event configuration of
                                     //!<               line 0
            uint32_t TR1        :1U; //!< Rising trigger event configuration of
                                     //!<               line 1
            uint32_t TR2        :1U; //!< Rising trigger event configuration of
                                     //!<               line 2
            uint32_t TR3        :1U; //!< Rising trigger event configuration of
                                     //!<               line 3
            uint32_t TR4        :1U; //!< Rising trigger event configuration of
                                     //!<               line 4
            uint32_t TR5        :1U; //!< Rising trigger event configuration of
                                     //!<               line 5
            uint32_t TR6        :1U; //!< Rising trigger event configuration of
                                     //!<               line 6
            uint32_t TR7        :1U; //!< Rising trigger event configuration of
                                     //!<               line 7
            uint32_t TR8        :1U; //!< Rising trigger event configuration of
                                     //!<               line 8
            uint32_t TR9        :1U; //!< Rising trigger event configuration of
                                     //!<               line 9
            uint32_t TR10       :1U; //!< Rising trigger event configuration of
                                     //!<               line 10
            uint32_t TR11       :1U; //!< Rising trigger event configuration of
                                     //!<               line 11
            uint32_t TR12       :1U; //!< Rising trigger event configuration of
                                     //!<               line 12
            uint32_t TR13       :1U; //!< Rising trigger event configuration of
                                     //!<               line 13
            uint32_t TR14       :1U; //!< Rising trigger event configuration of
                                     //!<               line 14
            uint32_t TR15       :1U; //!< Rising trigger event configuration of
                                     //!<               line 15
            uint32_t TR16       :1U; //!< Rising trigger event configuration of
                                     //!<               line 16
            uint32_t TR17       :1U; //!< Rising trigger event configuration of
                                     //!<               line 17
            uint32_t TR18       :1U; //!< Rising trigger event configuration of
                                     //!<               line 18
            uint32_t TR19       :1U; //!< Rising trigger event configuration of
                                     //!<               line 19
            uint32_t TR20       :1U; //!< Rising trigger event configuration of
                                     //!<               line 20
            uint32_t TR21       :1U; //!< Rising trigger event configuration of
                                     //!<               line 21
            uint32_t TR22       :1U; //!< Rising trigger event configuration of
                                     //!<               line 22
            uint32_t            :9U;
        }B;
    } RTSR; //!< Rising Trigger selection register (Offset: 0x08, reset: 0x00)

    union EXTI_FTSR_union
    {
        uint32_t R;
        struct EXTI_FTSR_B_struct
        {
            uint32_t TR0        :1U; //!< Falling trigger event configuration of
                                     //!<               line 0
            uint32_t TR1        :1U; //!< Falling trigger event configuration of
                                     //!<               line 1
            uint32_t TR2        :1U; //!< Falling trigger event configuration of
                                     //!<               line 2
            uint32_t TR3        :1U; //!< Falling trigger event configuration of
                                     //!<               line 3
            uint32_t TR4        :1U; //!< Falling trigger event configuration of
                                     //!<               line 4
            uint32_t TR5        :1U; //!< Falling trigger event configuration of
                                     //!<               line 5
            uint32_t TR6        :1U; //!< Falling trigger event configuration of
                                     //!<               line 6
            uint32_t TR7        :1U; //!< Falling trigger event configuration of
                                     //!<               line 7
            uint32_t TR8        :1U; //!< Falling trigger event configuration of
                                     //!<               line 8
            uint32_t TR9        :1U; //!< Falling trigger event configuration of
                                     //!<               line 9
            uint32_t TR10       :1U; //!< Falling trigger event configuration of
                                     //!<               line 10
            uint32_t TR11       :1U; //!< Falling trigger event configuration of
                                     //!<               line 11
            uint32_t TR12       :1U; //!< Falling trigger event configuration of
                                     //!<               line 12
            uint32_t TR13       :1U; //!< Falling trigger event configuration of
                                     //!<               line 13
            uint32_t TR14       :1U; //!< Falling trigger event configuration of
                                     //!<               line 14
            uint32_t TR15       :1U; //!< Falling trigger event configuration of
                                     //!<               line 15
            uint32_t TR16       :1U; //!< Falling trigger event configuration of
                                     //!<               line 16
            uint32_t TR17       :1U; //!< Falling trigger event configuration of
                                     //!<               line 17
            uint32_t TR18       :1U; //!< Falling trigger event configuration of
                                     //!<               line 18
            uint32_t TR19       :1U; //!< Falling trigger event configuration of
                                     //!<               line 19
            uint32_t TR20       :1U; //!< Falling trigger event configuration of
                                     //!<               line 20
            uint32_t TR21       :1U; //!< Falling trigger event configuration of
                                     //!<               line 21
            uint32_t TR22       :1U; //!< Falling trigger event configuration of
                                     //!<               line 22
            uint32_t            :9U;
        }B;
    } FTSR; //!< Falling Trigger selection register (Offset: 0x0c, reset: 0x00)

    union EXTI_SWIER_union
    {
        uint32_t R;
        struct EXTI_SWIER_B_struct
        {
            uint32_t SWIER0     :1U; //!< Software Interrupt on line
                                     //!<               0
            uint32_t SWIER1     :1U; //!< Software Interrupt on line
                                     //!<               1
            uint32_t SWIER2     :1U; //!< Software Interrupt on line
                                     //!<               2
            uint32_t SWIER3     :1U; //!< Software Interrupt on line
                                     //!<               3
            uint32_t SWIER4     :1U; //!< Software Interrupt on line
                                     //!<               4
            uint32_t SWIER5     :1U; //!< Software Interrupt on line
                                     //!<               5
            uint32_t SWIER6     :1U; //!< Software Interrupt on line
                                     //!<               6
            uint32_t SWIER7     :1U; //!< Software Interrupt on line
                                     //!<               7
            uint32_t SWIER8     :1U; //!< Software Interrupt on line
                                     //!<               8
            uint32_t SWIER9     :1U; //!< Software Interrupt on line
                                     //!<               9
            uint32_t SWIER10    :1U; //!< Software Interrupt on line
                                     //!<               10
            uint32_t SWIER11    :1U; //!< Software Interrupt on line
                                     //!<               11
            uint32_t SWIER12    :1U; //!< Software Interrupt on line
                                     //!<               12
            uint32_t SWIER13    :1U; //!< Software Interrupt on line
                                     //!<               13
            uint32_t SWIER14    :1U; //!< Software Interrupt on line
                                     //!<               14
            uint32_t SWIER15    :1U; //!< Software Interrupt on line
                                     //!<               15
            uint32_t SWIER16    :1U; //!< Software Interrupt on line
                                     //!<               16
            uint32_t SWIER17    :1U; //!< Software Interrupt on line
                                     //!<               17
            uint32_t SWIER18    :1U; //!< Software Interrupt on line
                                     //!<               18
            uint32_t SWIER19    :1U; //!< Software Interrupt on line
                                     //!<               19
            uint32_t SWIER20    :1U; //!< Software Interrupt on line
                                     //!<               20
            uint32_t SWIER21    :1U; //!< Software Interrupt on line
                                     //!<               21
            uint32_t SWIER22    :1U; //!< Software Interrupt on line
                                     //!<               22
            uint32_t            :9U;
        }B;
    } SWIER; //!< Software interrupt event register (Offset: 0x10, reset: 0x00)

    union EXTI_PR_union
    {
        uint32_t R;
        struct EXTI_PR_B_struct
        {
            uint32_t PR0        :1U; //!< Pending bit 0
            uint32_t PR1        :1U; //!< Pending bit 1
            uint32_t PR2        :1U; //!< Pending bit 2
            uint32_t PR3        :1U; //!< Pending bit 3
            uint32_t PR4        :1U; //!< Pending bit 4
            uint32_t PR5        :1U; //!< Pending bit 5
            uint32_t PR6        :1U; //!< Pending bit 6
            uint32_t PR7        :1U; //!< Pending bit 7
            uint32_t PR8        :1U; //!< Pending bit 8
            uint32_t PR9        :1U; //!< Pending bit 9
            uint32_t PR10       :1U; //!< Pending bit 10
            uint32_t PR11       :1U; //!< Pending bit 11
            uint32_t PR12       :1U; //!< Pending bit 12
            uint32_t PR13       :1U; //!< Pending bit 13
            uint32_t PR14       :1U; //!< Pending bit 14
            uint32_t PR15       :1U; //!< Pending bit 15
            uint32_t PR16       :1U; //!< Pending bit 16
            uint32_t PR17       :1U; //!< Pending bit 17
            uint32_t PR18       :1U; //!< Pending bit 18
            uint32_t PR19       :1U; //!< Pending bit 19
            uint32_t PR20       :1U; //!< Pending bit 20
            uint32_t PR21       :1U; //!< Pending bit 21
            uint32_t PR22       :1U; //!< Pending bit 22
            uint32_t            :9U;
        }B;
    } PR; //!< Pending register (EXTI_PR) (Offset: 0x14, reset: 0x00)
} EXTI_t;



/**************************************************************************************************/
/*!                                    FLASH module memory map                                    */
/**************************************************************************************************/
typedef volatile struct FLASH_struct
{
    union FLASH_ACR_union
    {
        uint32_t R;
        struct FLASH_ACR_B_struct
        {
            uint32_t LATENCY    :3U; //!< Latency
            uint32_t            :5U;
            uint32_t PRFTEN     :1U; //!< Prefetch enable
            uint32_t ICEN       :1U; //!< Instruction cache enable
            uint32_t DCEN       :1U; //!< Data cache enable
            uint32_t ICRST      :1U; //!< Instruction cache reset
            uint32_t DCRST      :1U; //!< Data cache reset
            uint32_t            :19U;
        }B;
    } ACR; //!< Flash access control register (Offset: 0x00, reset: 0x00)

    union FLASH_KEYR_union
    {
        uint32_t R;
        struct FLASH_KEYR_B_struct
        {
            uint32_t KEY        :32U; //!< FPEC key
        }B;
    } KEYR; //!< Flash key register (Offset: 0x04, reset: 0x00)

    union FLASH_OPTKEYR_union
    {
        uint32_t R;
        struct FLASH_OPTKEYR_B_struct
        {
            uint32_t OPTKEY     :32U; //!< Option byte key
        }B;
    } OPTKEYR; //!< Flash option key register (Offset: 0x08, reset: 0x00)

    union FLASH_SR_union
    {
        uint32_t R;
        struct FLASH_SR_B_struct
        {
            uint32_t EOP        :1U; //!< End of operation
            uint32_t OPERR      :1U; //!< Operation error
            uint32_t            :2U;
            uint32_t WRPERR     :1U; //!< Write protection error
            uint32_t PGAERR     :1U; //!< Programming alignment
                                     //!<               error
            uint32_t PGPERR     :1U; //!< Programming parallelism
                                     //!<               error
            uint32_t PGSERR     :1U; //!< Programming sequence error
            uint32_t            :8U;
            uint32_t BSY        :1U; //!< Busy
            uint32_t            :15U;
        }B;
    } SR; //!< Status register (Offset: 0x0c, reset: 0x00)

    union FLASH_CR_union
    {
        uint32_t R;
        struct FLASH_CR_B_struct
        {
            uint32_t PG         :1U; //!< Programming
            uint32_t SER        :1U; //!< Sector Erase
            uint32_t MER        :1U; //!< Mass Erase
            uint32_t SNB        :4U; //!< Sector number
            uint32_t            :1U;
            uint32_t PSIZE      :2U; //!< Program size
            uint32_t            :6U;
            uint32_t STRT       :1U; //!< Start
            uint32_t            :7U;
            uint32_t EOPIE      :1U; //!< End of operation interrupt
                                     //!<               enable
            uint32_t ERRIE      :1U; //!< Error interrupt enable
            uint32_t            :5U;
            uint32_t LOCK       :1U; //!< Lock
        }B;
    } CR; //!< Control register (Offset: 0x10, reset: 0x80000000)

    union FLASH_OPTCR_union
    {
        uint32_t R;
        struct FLASH_OPTCR_B_struct
        {
            uint32_t OPTLOCK    :1U; //!< Option lock
            uint32_t OPTSTRT    :1U; //!< Option start
            uint32_t BOR_LEV    :2U; //!< BOR reset Level
            uint32_t            :1U;
            uint32_t WDG_SW     :1U; //!< WDG_SW User option bytes
            uint32_t nRST_STOP  :1U; //!< nRST_STOP User option
                                     //!<               bytes
            uint32_t nRST_STDBY :1U; //!< nRST_STDBY User option
                                     //!<               bytes
            uint32_t RDP        :8U; //!< Read protect
            uint32_t nWRP       :12U; //!< Not write protect
            uint32_t            :4U;
        }B;
    } OPTCR; //!< Flash option control register (Offset: 0x14, reset: 0x14)
} FLASH_t;



/**************************************************************************************************/
/*!                                     FPU module memory map                                     */
/**************************************************************************************************/
typedef volatile struct FPU_struct
{
    union FPU_FPCCR_union
    {
        uint32_t R;
        struct FPU_FPCCR_B_struct
        {
            uint32_t LSPACT     :1U; //!< LSPACT
            uint32_t USER       :1U; //!< USER
            uint32_t            :1U;
            uint32_t THREAD     :1U; //!< THREAD
            uint32_t HFRDY      :1U; //!< HFRDY
            uint32_t MMRDY      :1U; //!< MMRDY
            uint32_t BFRDY      :1U; //!< BFRDY
            uint32_t            :1U;
            uint32_t MONRDY     :1U; //!< MONRDY
            uint32_t            :21U;
            uint32_t LSPEN      :1U; //!< LSPEN
            uint32_t ASPEN      :1U; //!< ASPEN
        }B;
    } FPCCR; //!< Floating-point context control (Offset: 0x00, reset: 0x00)

    union FPU_FPCAR_union
    {
        uint32_t R;
        struct FPU_FPCAR_B_struct
        {
            uint32_t            :3U;
            uint32_t ADDRESS    :29U; //!< Location of unpopulated
                                     //!<               floating-point
        }B;
    } FPCAR; //!< Floating-point context address (Offset: 0x04, reset: 0x00)

    union FPU_FPSCR_union
    {
        uint32_t R;
        struct FPU_FPSCR_B_struct
        {
            uint32_t IOC        :1U; //!< Invalid operation cumulative exception
                                     //!<               bit
            uint32_t DZC        :1U; //!< Division by zero cumulative exception
                                     //!<               bit.
            uint32_t OFC        :1U; //!< Overflow cumulative exception
                                     //!<               bit
            uint32_t UFC        :1U; //!< Underflow cumulative exception
                                     //!<               bit
            uint32_t IXC        :1U; //!< Inexact cumulative exception
                                     //!<               bit
            uint32_t            :2U;
            uint32_t IDC        :1U; //!< Input denormal cumulative exception
                                     //!<               bit.
            uint32_t            :14U;
            uint32_t RMode      :2U; //!< Rounding Mode control
                                     //!<               field
            uint32_t FZ         :1U; //!< Flush-to-zero mode control
                                     //!<               bit:
            uint32_t DN         :1U; //!< Default NaN mode control
                                     //!<               bit
            uint32_t AHP        :1U; //!< Alternative half-precision control
                                     //!<               bit
            uint32_t            :1U;
            uint32_t V          :1U; //!< Overflow condition code
                                     //!<               flag
            uint32_t C          :1U; //!< Carry condition code flag
            uint32_t Z          :1U; //!< Zero condition code flag
            uint32_t N          :1U; //!< Negative condition code
                                     //!<               flag
        }B;
    } FPSCR; //!< Floating-point status control (Offset: 0x08, reset: 0x00)
} FPU_t;



/**************************************************************************************************/
/*!                                  FPU_CPACR module memory map                                  */
/**************************************************************************************************/
typedef volatile struct FPU_CPACR_struct
{
    union FPU_CPACR_CPACR_union
    {
        uint32_t R;
        struct FPU_CPACR_CPACR_B_struct
        {
            uint32_t            :20U;
            uint32_t CP         :4U; //!< CP
            uint32_t            :8U;
        }B;
    } CPACR; //!< Coprocessor access control (Offset: 0x00, reset: 0x00)
} FPU_CPACR_t;



/**************************************************************************************************/
/*!                                    GPIOA module memory map                                    */
/**************************************************************************************************/
typedef volatile struct GPIOA_struct
{
    union GPIOA_MODER_union
    {
        uint32_t R;
        struct GPIOA_MODER_B_struct
        {
            uint32_t MODER0     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER1     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER2     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER3     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER4     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER5     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER6     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER7     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER8     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER9     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER10    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER11    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER12    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER13    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER14    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER15    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
        }B;
    } MODER; //!< GPIO port mode register (Offset: 0x00, reset: 0xa8000000)

    union GPIOA_OTYPER_union
    {
        uint32_t R;
        struct GPIOA_OTYPER_B_struct
        {
            uint32_t OT0        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT1        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT2        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT3        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT4        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT5        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT6        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT7        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT8        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT9        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT10       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT11       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT12       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT13       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT14       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT15       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t            :16U;
        }B;
    } OTYPER; //!< GPIO port output type register (Offset: 0x04, reset: 0x00)

    union GPIOA_OSPEEDR_union
    {
        uint32_t R;
        struct GPIOA_OSPEEDR_B_struct
        {
            uint32_t OSPEEDR0   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR1   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR2   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR3   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR4   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR5   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR6   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR7   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR8   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR9   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR10  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR11  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR12  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR13  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR14  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR15  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
        }B;
    } OSPEEDR; //!< GPIO port output speed (Offset: 0x08, reset: 0x00)

    union GPIOA_PUPDR_union
    {
        uint32_t R;
        struct GPIOA_PUPDR_B_struct
        {
            uint32_t PUPDR0     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR1     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR2     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR3     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR4     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR5     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR6     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR7     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR8     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR9     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR10    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR11    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR12    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR13    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR14    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR15    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
        }B;
    } PUPDR; //!< GPIO port pull-up/pull-down (Offset: 0x0c, reset: 0x64000000)

    union GPIOA_IDR_union
    {
        uint32_t R;
        struct GPIOA_IDR_B_struct
        {
            uint32_t IDR0       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR1       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR2       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR3       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR4       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR5       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR6       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR7       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR8       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR9       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR10      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR11      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR12      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR13      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR14      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR15      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t            :16U;
        }B;
    } IDR; //!< GPIO port input data register (Offset: 0x10, reset: 0x00)

    union GPIOA_ODR_union
    {
        uint32_t R;
        struct GPIOA_ODR_B_struct
        {
            uint32_t ODR0       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR1       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR2       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR3       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR4       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR5       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR6       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR7       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR8       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR9       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR10      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR11      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR12      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR13      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR14      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR15      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t            :16U;
        }B;
    } ODR; //!< GPIO port output data register (Offset: 0x14, reset: 0x00)

    union GPIOA_BSRR_union
    {
        uint32_t R;
        struct GPIOA_BSRR_B_struct
        {
            uint32_t BS0        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS1        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS2        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS3        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS4        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS5        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS6        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS7        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS8        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS9        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS10       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS11       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS12       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS13       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS14       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS15       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BR0        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BR1        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR2        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR3        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR4        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR5        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR6        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR7        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR8        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR9        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR10       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR11       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR12       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR13       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR14       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR15       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
        }B;
    } BSRR; //!< GPIO port bit set/reset (Offset: 0x18, reset: 0x00)

    union GPIOA_LCKR_union
    {
        uint32_t R;
        struct GPIOA_LCKR_B_struct
        {
            uint32_t LCK0       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK1       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK2       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK3       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK4       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK5       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK6       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK7       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK8       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK9       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK10      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK11      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK12      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK13      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK14      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK15      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCKK       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t            :15U;
        }B;
    } LCKR; //!< GPIO port configuration lock (Offset: 0x1c, reset: 0x00)

    union GPIOA_AFRL_union
    {
        uint32_t R;
        struct GPIOA_AFRL_B_struct
        {
            uint32_t AFRL0      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL1      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL2      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL3      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL4      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL5      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL6      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL7      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
        }B;
    } AFRL; //!< GPIO alternate function low (Offset: 0x20, reset: 0x00)

    union GPIOA_AFRH_union
    {
        uint32_t R;
        struct GPIOA_AFRH_B_struct
        {
            uint32_t AFRH8      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH9      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH10     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH11     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH12     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH13     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH14     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH15     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
        }B;
    } AFRH; //!< GPIO alternate function high (Offset: 0x24, reset: 0x00)
} GPIOA_t;



/**************************************************************************************************/
/*!                                    GPIOB module memory map                                    */
/**************************************************************************************************/
typedef volatile struct GPIOB_struct
{
    union GPIOB_MODER_union
    {
        uint32_t R;
        struct GPIOB_MODER_B_struct
        {
            uint32_t MODER0     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER1     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER2     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER3     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER4     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER5     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER6     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER7     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER8     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER9     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER10    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER11    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER12    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER13    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER14    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER15    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
        }B;
    } MODER; //!< GPIO port mode register (Offset: 0x00, reset: 0x280)

    union GPIOB_OTYPER_union
    {
        uint32_t R;
        struct GPIOB_OTYPER_B_struct
        {
            uint32_t OT0        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT1        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT2        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT3        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT4        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT5        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT6        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT7        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT8        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT9        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT10       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT11       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT12       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT13       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT14       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT15       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t            :16U;
        }B;
    } OTYPER; //!< GPIO port output type register (Offset: 0x04, reset: 0x00)

    union GPIOB_OSPEEDR_union
    {
        uint32_t R;
        struct GPIOB_OSPEEDR_B_struct
        {
            uint32_t OSPEEDR0   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR1   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR2   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR3   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR4   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR5   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR6   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR7   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR8   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR9   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR10  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR11  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR12  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR13  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR14  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR15  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
        }B;
    } OSPEEDR; //!< GPIO port output speed (Offset: 0x08, reset: 0xc0)

    union GPIOB_PUPDR_union
    {
        uint32_t R;
        struct GPIOB_PUPDR_B_struct
        {
            uint32_t PUPDR0     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR1     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR2     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR3     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR4     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR5     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR6     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR7     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR8     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR9     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR10    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR11    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR12    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR13    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR14    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR15    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
        }B;
    } PUPDR; //!< GPIO port pull-up/pull-down (Offset: 0x0c, reset: 0x100)

    union GPIOB_IDR_union
    {
        uint32_t R;
        struct GPIOB_IDR_B_struct
        {
            uint32_t IDR0       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR1       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR2       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR3       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR4       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR5       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR6       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR7       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR8       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR9       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR10      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR11      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR12      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR13      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR14      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR15      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t            :16U;
        }B;
    } IDR; //!< GPIO port input data register (Offset: 0x10, reset: 0x00)

    union GPIOB_ODR_union
    {
        uint32_t R;
        struct GPIOB_ODR_B_struct
        {
            uint32_t ODR0       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR1       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR2       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR3       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR4       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR5       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR6       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR7       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR8       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR9       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR10      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR11      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR12      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR13      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR14      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR15      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t            :16U;
        }B;
    } ODR; //!< GPIO port output data register (Offset: 0x14, reset: 0x00)

    union GPIOB_BSRR_union
    {
        uint32_t R;
        struct GPIOB_BSRR_B_struct
        {
            uint32_t BS0        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS1        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS2        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS3        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS4        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS5        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS6        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS7        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS8        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS9        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS10       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS11       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS12       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS13       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS14       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BS15       :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BR0        :1U; //!< Port x set bit y (y=
                                     //!<               0..15)
            uint32_t BR1        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR2        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR3        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR4        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR5        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR6        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR7        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR8        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR9        :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR10       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR11       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR12       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR13       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR14       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
            uint32_t BR15       :1U; //!< Port x reset bit y (y =
                                     //!<               0..15)
        }B;
    } BSRR; //!< GPIO port bit set/reset (Offset: 0x18, reset: 0x00)

    union GPIOB_LCKR_union
    {
        uint32_t R;
        struct GPIOB_LCKR_B_struct
        {
            uint32_t LCK0       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK1       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK2       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK3       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK4       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK5       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK6       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK7       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK8       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK9       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK10      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK11      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK12      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK13      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK14      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK15      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCKK       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t            :15U;
        }B;
    } LCKR; //!< GPIO port configuration lock (Offset: 0x1c, reset: 0x00)

    union GPIOB_AFRL_union
    {
        uint32_t R;
        struct GPIOB_AFRL_B_struct
        {
            uint32_t AFRL0      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL1      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL2      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL3      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL4      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL5      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL6      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL7      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
        }B;
    } AFRL; //!< GPIO alternate function low (Offset: 0x20, reset: 0x00)

    union GPIOB_AFRH_union
    {
        uint32_t R;
        struct GPIOB_AFRH_B_struct
        {
            uint32_t AFRH8      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH9      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH10     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH11     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH12     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH13     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH14     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH15     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
        }B;
    } AFRH; //!< GPIO alternate function high (Offset: 0x24, reset: 0x00)
} GPIOB_t;



/**************************************************************************************************/
/*!                                    GPIOx module memory map                                    */
/**************************************************************************************************/
typedef volatile struct GPIOx_struct
{
    union GPIOx_MODER_union
    {
        uint32_t R;
        struct GPIOx_MODER_B_struct
        {
            uint32_t MODER0     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER1     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER2     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER3     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER4     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER5     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER6     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER7     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER8     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER9     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER10    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER11    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER12    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER13    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER14    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t MODER15    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
        }B;
    } MODER; //!< GPIO port mode register (Offset: 0x00, reset: 0x00)

    union GPIOx_OTYPER_union
    {
        uint32_t R;
        struct GPIOx_OTYPER_B_struct
        {
            uint32_t OT0        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT1        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT2        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT3        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT4        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT5        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT6        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT7        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT8        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT9        :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT10       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT11       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT12       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT13       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT14       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OT15       :1U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t            :16U;
        }B;
    } OTYPER; //!< GPIO port output type register (Offset: 0x04, reset: 0x00)

    union GPIOx_OSPEEDR_union
    {
        uint32_t R;
        struct GPIOx_OSPEEDR_B_struct
        {
            uint32_t OSPEEDR0   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR1   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR2   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR3   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR4   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR5   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR6   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR7   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR8   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR9   :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR10  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR11  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR12  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR13  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR14  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t OSPEEDR15  :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
        }B;
    } OSPEEDR; //!< GPIO port output speed (Offset: 0x08, reset: 0x00)

    union GPIOx_PUPDR_union
    {
        uint32_t R;
        struct GPIOx_PUPDR_B_struct
        {
            uint32_t PUPDR0     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR1     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR2     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR3     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR4     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR5     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR6     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR7     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR8     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR9     :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR10    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR11    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR12    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR13    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR14    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
            uint32_t PUPDR15    :2U; //!< Port x configuration bits (y =
                                     //!<               0..15)
        }B;
    } PUPDR; //!< GPIO port pull-up/pull-down (Offset: 0x0c, reset: 0x00)

    union GPIOx_IDR_union
    {
        uint32_t R;
        struct GPIOx_IDR_B_struct
        {
            uint32_t IDR0       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR1       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR2       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR3       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR4       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR5       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR6       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR7       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR8       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR9       :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR10      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR11      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR12      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR13      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR14      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t IDR15      :1U; //!< Port input data (y =
                                     //!<               0..15)
            uint32_t            :16U;
        }B;
    } IDR; //!< GPIO port input data register (Offset: 0x10, reset: 0x00)

    union GPIOx_ODR_union
    {
        uint32_t R;
        struct GPIOx_ODR_B_struct
        {
            uint32_t ODR0       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR1       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR2       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR3       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR4       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR5       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR6       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR7       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR8       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR9       :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR10      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR11      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR12      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR13      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR14      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t ODR15      :1U; //!< Port output data (y =
                                     //!<               0..15)
            uint32_t            :16U;
        }B;
    } ODR; //!< GPIO port output data register (Offset: 0x14, reset: 0x00)

    union GPIOx_BSRR_union
    {
        uint32_t R;
        struct GPIOx_BSRR_B_struct
        {
            uint32_t SET        :16U;//!< Port x set bit y (y=0..15)
            uint32_t RST        :16U;//!< Port x reset bit y (y=0..15)
        }B;
    } BSRR; //!< GPIO port bit set/reset (Offset: 0x18, reset: 0x00)

    union GPIOx_LCKR_union
    {
        uint32_t R;
        struct GPIOx_LCKR_B_struct
        {
            uint32_t LCK0       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK1       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK2       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK3       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK4       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK5       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK6       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK7       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK8       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK9       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK10      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK11      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK12      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK13      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK14      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCK15      :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t LCKK       :1U; //!< Port x lock bit y (y=
                                     //!<               0..15)
            uint32_t            :15U;
        }B;
    } LCKR; //!< GPIO port configuration lock (Offset: 0x1c, reset: 0x00)

    union GPIOx_AFRL_union
    {
        uint32_t R;
        struct GPIOx_AFRL_B_struct
        {
            uint32_t AFRL0      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL1      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL2      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL3      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL4      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL5      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL6      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
            uint32_t AFRL7      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 0..7)
        }B;
    } AFRL; //!< GPIO alternate function low (Offset: 0x20, reset: 0x00)

    union GPIOx_AFRH_union
    {
        uint32_t R;
        struct GPIOx_AFRH_B_struct
        {
            uint32_t AFRH8      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH9      :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH10     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH11     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH12     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH13     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH14     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
            uint32_t AFRH15     :4U; //!< Alternate function selection for port x
                                     //!<               bit y (y = 8..15)
        }B;
    } AFRH; //!< GPIO alternate function high (Offset: 0x24, reset: 0x00)
} GPIOx_t;



/**************************************************************************************************/
/*!                                     I2Cx module memory map                                    */
/**************************************************************************************************/
typedef volatile struct I2Cx_struct
{
    union I2Cx_CR1_union
    {
        uint32_t R;
        struct I2Cx_CR1_B_struct
        {
            uint32_t PE         :1U; //!< Peripheral enable
            uint32_t SMBUS      :1U; //!< SMBus mode
            uint32_t            :1U;
            uint32_t SMBTYPE    :1U; //!< SMBus type
            uint32_t ENARP      :1U; //!< ARP enable
            uint32_t ENPEC      :1U; //!< PEC enable
            uint32_t ENGC       :1U; //!< General call enable
            uint32_t NOSTRETCH  :1U; //!< Clock stretching disable (Slave
                                     //!<               mode)
            uint32_t START      :1U; //!< Start generation
            uint32_t STOP       :1U; //!< Stop generation
            uint32_t ACK        :1U; //!< Acknowledge enable
            uint32_t POS        :1U; //!< Acknowledge/PEC Position (for data
                                     //!<               reception)
            uint32_t PEC        :1U; //!< Packet error checking
            uint32_t ALERT      :1U; //!< SMBus alert
            uint32_t            :1U;
            uint32_t SWRST      :1U; //!< Software reset
            uint32_t            :16U;
        }B;
    } CR1; //!< Control register 1 (Offset: 0x00, reset: 0x00)

    union I2Cx_CR2_union
    {
        uint32_t R;
        struct I2Cx_CR2_B_struct
        {
            uint32_t FREQ       :6U; //!< Peripheral clock frequency
            uint32_t            :2U;
            uint32_t ITERREN    :1U; //!< Error interrupt enable
            uint32_t ITEVTEN    :1U; //!< Event interrupt enable
            uint32_t ITBUFEN    :1U; //!< Buffer interrupt enable
            uint32_t DMAEN      :1U; //!< DMA requests enable
            uint32_t LAST       :1U; //!< DMA last transfer
            uint32_t            :19U;
        }B;
    } CR2; //!< Control register 2 (Offset: 0x04, reset: 0x00)

    union I2Cx_OAR1_union
    {
        uint32_t R;
        struct I2Cx_OAR1_B_struct
        {
            uint32_t ADD0       :1U; //!< Interface address
            uint32_t ADD7       :7U; //!< Interface address
            uint32_t ADD10      :2U; //!< Interface address
            uint32_t            :5U;
            uint32_t ADDMODE    :1U; //!< Addressing mode (slave
                                     //!<               mode)
            uint32_t            :16U;
        }B;
    } OAR1; //!< Own address register 1 (Offset: 0x08, reset: 0x00)

    union I2Cx_OAR2_union
    {
        uint32_t R;
        struct I2Cx_OAR2_B_struct
        {
            uint32_t ENDUAL     :1U; //!< Dual addressing mode
                                     //!<               enable
            uint32_t ADD2       :7U; //!< Interface address
            uint32_t            :24U;
        }B;
    } OAR2; //!< Own address register 2 (Offset: 0x0c, reset: 0x00)

    union I2Cx_DR_union
    {
        uint32_t R;
        struct I2Cx_DR_B_struct
        {
            uint32_t DR         :8U; //!< 8-bit data register
            uint32_t            :24U;
        }B;
    } DR; //!< Data register (Offset: 0x10, reset: 0x00)

    union I2Cx_SR1_union
    {
        uint32_t R;
        struct I2Cx_SR1_B_struct
        {
            uint32_t SB         :1U; //!< Start bit (Master mode)
            uint32_t ADDR       :1U; //!< Address sent (master mode)/matched
                                     //!<               (slave mode)
            uint32_t BTF        :1U; //!< Byte transfer finished
            uint32_t ADD10      :1U; //!< 10-bit header sent (Master
                                     //!<               mode)
            uint32_t STOPF      :1U; //!< Stop detection (slave
                                     //!<               mode)
            uint32_t            :1U;
            uint32_t RxNE       :1U; //!< Data register not empty
                                     //!<               (receivers)
            uint32_t TxE        :1U; //!< Data register empty
                                     //!<               (transmitters)
            uint32_t BERR       :1U; //!< Bus error
            uint32_t ARLO       :1U; //!< Arbitration lost (master
                                     //!<               mode)
            uint32_t AF         :1U; //!< Acknowledge failure
            uint32_t OVR        :1U; //!< Overrun/Underrun
            uint32_t PECERR     :1U; //!< PEC Error in reception
            uint32_t            :1U;
            uint32_t TIMEOUT    :1U; //!< Timeout or Tlow error
            uint32_t SMBALERT   :1U; //!< SMBus alert
            uint32_t            :16U;
        }B;
    } SR1; //!< Status register 1 (Offset: 0x14, reset: 0x00)

    union I2Cx_SR2_union
    {
        uint32_t R;
        struct I2Cx_SR2_B_struct
        {
            uint32_t MSL        :1U; //!< Master/slave
            uint32_t BUSY       :1U; //!< Bus busy
            uint32_t TRA        :1U; //!< Transmitter/receiver
            uint32_t            :1U;
            uint32_t GENCALL    :1U; //!< General call address (Slave
                                     //!<               mode)
            uint32_t SMBDEFAULT :1U; //!< SMBus device default address (Slave
                                     //!<               mode)
            uint32_t SMBHOST    :1U; //!< SMBus host header (Slave
                                     //!<               mode)
            uint32_t DUALF      :1U; //!< Dual flag (Slave mode)
            uint32_t PEC        :8U; //!< acket error checking
                                     //!<               register
            uint32_t            :16U;
        }B;
    } SR2; //!< Status register 2 (Offset: 0x18, reset: 0x00)

    union I2Cx_CCR_union
    {
        uint32_t R;
        struct I2Cx_CCR_B_struct
        {
            uint32_t CCR        :12U; //!< Clock control register in Fast/Standard
                                     //!<               mode (Master mode)
            uint32_t            :2U;
            uint32_t DUTY       :1U; //!< Fast mode duty cycle
            uint32_t F_S        :1U; //!< I2C master mode selection
            uint32_t            :16U;
        }B;
    } CCR; //!< Clock control register (Offset: 0x1c, reset: 0x00)

    union I2Cx_TRISE_union
    {
        uint32_t R;
        struct I2Cx_TRISE_B_struct
        {
            uint32_t TRISE      :6U; //!< Maximum rise time in Fast/Standard mode
                                     //!<               (Master mode)
            uint32_t            :26U;
        }B;
    } TRISE; //!< TRISE register (Offset: 0x20, reset: 0x02)
} I2Cx_t;



/**************************************************************************************************/
/*!                                   I2Sxext module memory map                                   */
/**************************************************************************************************/
typedef volatile struct I2Sxext_struct
{
    union I2Sxext_CR1_union
    {
        uint32_t R;
        struct I2Sxext_CR1_B_struct
        {
            uint32_t CPHA       :1U; //!< Clock phase
            uint32_t CPOL       :1U; //!< Clock polarity
            uint32_t MSTR       :1U; //!< Master selection
            uint32_t BR         :3U; //!< Baud rate control
            uint32_t SPE        :1U; //!< SPI enable
            uint32_t LSBFIRST   :1U; //!< Frame format
            uint32_t SSI        :1U; //!< Internal slave select
            uint32_t SSM        :1U; //!< Software slave management
            uint32_t RXONLY     :1U; //!< Receive only
            uint32_t DFF        :1U; //!< Data frame format
            uint32_t CRCNEXT    :1U; //!< CRC transfer next
            uint32_t CRCEN      :1U; //!< Hardware CRC calculation
                                     //!<               enable
            uint32_t BIDIOE     :1U; //!< Output enable in bidirectional
                                     //!<               mode
            uint32_t BIDIMODE   :1U; //!< Bidirectional data mode
                                     //!<               enable
            uint32_t            :16U;
        }B;
    } CR1; //!< control register 1 (Offset: 0x00, reset: 0x00)

    union I2Sxext_CR2_union
    {
        uint32_t R;
        struct I2Sxext_CR2_B_struct
        {
            uint32_t RXDMAEN    :1U; //!< Rx buffer DMA enable
            uint32_t TXDMAEN    :1U; //!< Tx buffer DMA enable
            uint32_t SSOE       :1U; //!< SS output enable
            uint32_t            :1U;
            uint32_t FRF        :1U; //!< Frame format
            uint32_t ERRIE      :1U; //!< Error interrupt enable
            uint32_t RXNEIE     :1U; //!< RX buffer not empty interrupt
                                     //!<               enable
            uint32_t TXEIE      :1U; //!< Tx buffer empty interrupt
                                     //!<               enable
            uint32_t            :24U;
        }B;
    } CR2; //!< control register 2 (Offset: 0x04, reset: 0x00)

    union I2Sxext_SR_union
    {
        uint32_t R;
        struct I2Sxext_SR_B_struct
        {
            uint32_t RXNE       :1U; //!< Receive buffer not empty
            uint32_t TXE        :1U; //!< Transmit buffer empty
            uint32_t CHSIDE     :1U; //!< Channel side
            uint32_t UDR        :1U; //!< Underrun flag
            uint32_t CRCERR     :1U; //!< CRC error flag
            uint32_t MODF       :1U; //!< Mode fault
            uint32_t OVR        :1U; //!< Overrun flag
            uint32_t BSY        :1U; //!< Busy flag
            uint32_t TIFRFE     :1U; //!< TI frame format error
            uint32_t            :23U;
        }B;
    } SR; //!< status register (Offset: 0x08, reset: 0x02)

    union I2Sxext_DR_union
    {
        uint32_t R;
        struct I2Sxext_DR_B_struct
        {
            uint32_t DR         :16U; //!< Data register
            uint32_t            :16U;
        }B;
    } DR; //!< data register (Offset: 0x0c, reset: 0x00)

    union I2Sxext_CRCPR_union
    {
        uint32_t R;
        struct I2Sxext_CRCPR_B_struct
        {
            uint32_t CRCPOLY    :16U; //!< CRC polynomial register
            uint32_t            :16U;
        }B;
    } CRCPR; //!< CRC polynomial register (Offset: 0x10, reset: 0x07)

    union I2Sxext_RXCRCR_union
    {
        uint32_t R;
        struct I2Sxext_RXCRCR_B_struct
        {
            uint32_t RxCRC      :16U; //!< Rx CRC register
            uint32_t            :16U;
        }B;
    } RXCRCR; //!< RX CRC register (Offset: 0x14, reset: 0x00)

    union I2Sxext_TXCRCR_union
    {
        uint32_t R;
        struct I2Sxext_TXCRCR_B_struct
        {
            uint32_t TxCRC      :16U; //!< Tx CRC register
            uint32_t            :16U;
        }B;
    } TXCRCR; //!< TX CRC register (Offset: 0x18, reset: 0x00)

    union I2Sxext_I2SCFGR_union
    {
        uint32_t R;
        struct I2Sxext_I2SCFGR_B_struct
        {
            uint32_t CHLEN      :1U; //!< Channel length (number of bits per audio
                                     //!<               channel)
            uint32_t DATLEN     :2U; //!< Data length to be
                                     //!<               transferred
            uint32_t CKPOL      :1U; //!< Steady state clock
                                     //!<               polarity
            uint32_t I2SSTD     :2U; //!< I2S standard selection
            uint32_t            :1U;
            uint32_t PCMSYNC    :1U; //!< PCM frame synchronization
            uint32_t I2SCFG     :2U; //!< I2S configuration mode
            uint32_t I2SE       :1U; //!< I2S Enable
            uint32_t I2SMOD     :1U; //!< I2S mode selection
            uint32_t            :20U;
        }B;
    } I2SCFGR; //!< I2S configuration register (Offset: 0x1c, reset: 0x00)

    union I2Sxext_I2SPR_union
    {
        uint32_t R;
        struct I2Sxext_I2SPR_B_struct
        {
            uint32_t I2SDIV     :8U; //!< I2S Linear prescaler
            uint32_t ODD        :1U; //!< Odd factor for the
                                     //!<               prescaler
            uint32_t MCKOE      :1U; //!< Master clock output enable
            uint32_t            :22U;
        }B;
    } I2SPR; //!< I2S prescaler register (Offset: 0x20, reset: 0x0a)
} I2Sxext_t;



/**************************************************************************************************/
/*!                                     IWDG module memory map                                    */
/**************************************************************************************************/
typedef volatile struct IWDG_struct
{
    union IWDG_KR_union
    {
        uint32_t R;
        struct IWDG_KR_B_struct
        {
            uint32_t KEY        :16U; //!< Key value
            uint32_t            :16U;
        }B;
    } KR; //!< Key register (Offset: 0x00, reset: 0x00)

    union IWDG_PR_union
    {
        uint32_t R;
        struct IWDG_PR_B_struct
        {
            uint32_t PR         :3U; //!< Prescaler divider
            uint32_t            :29U;
        }B;
    } PR; //!< Prescaler register (Offset: 0x04, reset: 0x00)

    union IWDG_RLR_union
    {
        uint32_t R;
        struct IWDG_RLR_B_struct
        {
            uint32_t RL         :12U; //!< Watchdog counter reload
                                     //!<               value
            uint32_t            :20U;
        }B;
    } RLR; //!< Reload register (Offset: 0x08, reset: 0xfff)

    union IWDG_SR_union
    {
        uint32_t R;
        struct IWDG_SR_B_struct
        {
            uint32_t PVU        :1U; //!< Watchdog prescaler value
                                     //!<               update
            uint32_t RVU        :1U; //!< Watchdog counter reload value
                                     //!<               update
            uint32_t            :30U;
        }B;
    } SR; //!< Status register (Offset: 0x0c, reset: 0x00)
} IWDG_t;



/**************************************************************************************************/
/*!                                     MPU module memory map                                     */
/**************************************************************************************************/
typedef volatile struct MPU_struct
{
    union MPU_MPU_TYPER_union
    {
        uint32_t R;
        struct MPU_MPU_TYPER_B_struct
        {
            uint32_t SEPARATE   :1U; //!< Separate flag
            uint32_t            :7U;
            uint32_t DREGION    :8U; //!< Number of MPU data regions
            uint32_t IREGION    :8U; //!< Number of MPU instruction
                                     //!<               regions
            uint32_t            :8U;
        }B;
    } MPU_TYPER; //!< MPU type register (Offset: 0x00, reset: 0x800)

    union MPU_MPU_CTRL_union
    {
        uint32_t R;
        struct MPU_MPU_CTRL_B_struct
        {
            uint32_t ENABLE     :1U; //!< Enables the MPU
            uint32_t HFNMIENA   :1U; //!< Enables the operation of MPU during hard
                                     //!<               fault
            uint32_t PRIVDEFENA :1U; //!< Enable priviliged software access to
                                     //!<               default memory map
            uint32_t            :29U;
        }B;
    } MPU_CTRL; //!< MPU control register (Offset: 0x04, reset: 0x00)

    union MPU_MPU_RNR_union
    {
        uint32_t R;
        struct MPU_MPU_RNR_B_struct
        {
            uint32_t REGION     :8U; //!< MPU region
            uint32_t            :24U;
        }B;
    } MPU_RNR; //!< MPU region number register (Offset: 0x08, reset: 0x00)

    union MPU_MPU_RBAR_union
    {
        uint32_t R;
        struct MPU_MPU_RBAR_B_struct
        {
            uint32_t REGION     :4U; //!< MPU region field
            uint32_t VALID      :1U; //!< MPU region number valid
            uint32_t ADDR       :27U; //!< Region base address field
        }B;
    } MPU_RBAR; //!< MPU region base address (Offset: 0x0c, reset: 0x00)

    union MPU_MPU_RASR_union
    {
        uint32_t R;
        struct MPU_MPU_RASR_B_struct
        {
            uint32_t ENABLE     :1U; //!< Region enable bit.
            uint32_t SIZE       :5U; //!< Size of the MPU protection
                                     //!<               region
            uint32_t            :2U;
            uint32_t SRD        :8U; //!< Subregion disable bits
            uint32_t B          :1U; //!< memory attribute
            uint32_t C          :1U; //!< memory attribute
            uint32_t S          :1U; //!< Shareable memory attribute
            uint32_t TEX        :3U; //!< memory attribute
            uint32_t            :2U;
            uint32_t AP         :3U; //!< Access permission
            uint32_t            :1U;
            uint32_t XN         :1U; //!< Instruction access disable
                                     //!<               bit
            uint32_t            :3U;
        }B;
    } MPU_RASR; //!< MPU region attribute and size (Offset: 0x10, reset: 0x00)
} MPU_t;



/**************************************************************************************************/
/*!                                     NVIC module memory map                                    */
/**************************************************************************************************/
typedef volatile struct NVIC_struct
{
    union NVIC_ISER0_union
    {
        uint32_t R;
        struct NVIC_ISER0_B_struct
        {
            uint32_t SETENA     :32U; //!< SETENA
        }B;
    } ISER0; //!< Interrupt Set-Enable Register (Offset: 0x00, reset: 0x00)

    union NVIC_ISER1_union
    {
        uint32_t R;
        struct NVIC_ISER1_B_struct
        {
            uint32_t SETENA     :32U; //!< SETENA
        }B;
    } ISER1; //!< Interrupt Set-Enable Register (Offset: 0x04, reset: 0x00)

    uint32_t NVIC_Reserved0[30U];

    union NVIC_ICER0_union
    {
        uint32_t R;
        struct NVIC_ICER0_B_struct
        {
            uint32_t CLRENA     :32U; //!< CLRENA
        }B;
    } ICER0; //!< Interrupt Clear-Enable (Offset: 0x80, reset: 0x00)

    union NVIC_ICER1_union
    {
        uint32_t R;
        struct NVIC_ICER1_B_struct
        {
            uint32_t CLRENA     :32U; //!< CLRENA
        }B;
    } ICER1; //!< Interrupt Clear-Enable (Offset: 0x84, reset: 0x00)

    uint32_t NVIC_Reserved1[30U];

    union NVIC_ISPR0_union
    {
        uint32_t R;
        struct NVIC_ISPR0_B_struct
        {
            uint32_t SETPEND    :32U; //!< SETPEND
        }B;
    } ISPR0; //!< Interrupt Set-Pending Register (Offset: 0x100, reset: 0x00)

    union NVIC_ISPR1_union
    {
        uint32_t R;
        struct NVIC_ISPR1_B_struct
        {
            uint32_t SETPEND    :32U; //!< SETPEND
        }B;
    } ISPR1; //!< Interrupt Set-Pending Register (Offset: 0x104, reset: 0x00)

    uint32_t NVIC_Reserved2[30U];

    union NVIC_ICPR0_union
    {
        uint32_t R;
        struct NVIC_ICPR0_B_struct
        {
            uint32_t CLRPEND    :32U; //!< CLRPEND
        }B;
    } ICPR0; //!< Interrupt Clear-Pending (Offset: 0x180, reset: 0x00)

    union NVIC_ICPR1_union
    {
        uint32_t R;
        struct NVIC_ICPR1_B_struct
        {
            uint32_t CLRPEND    :32U; //!< CLRPEND
        }B;
    } ICPR1; //!< Interrupt Clear-Pending (Offset: 0x184, reset: 0x00)

    uint32_t NVIC_Reserved3[30U];

    union NVIC_IABR0_union
    {
        uint32_t R;
        struct NVIC_IABR0_B_struct
        {
            uint32_t ACTIVE     :32U; //!< ACTIVE
        }B;
    } IABR0; //!< Interrupt Active Bit Register (Offset: 0x200, reset: 0x00)

    union NVIC_IABR1_union
    {
        uint32_t R;
        struct NVIC_IABR1_B_struct
        {
            uint32_t ACTIVE     :32U; //!< ACTIVE
        }B;
    } IABR1; //!< Interrupt Active Bit Register (Offset: 0x204, reset: 0x00)

    uint32_t NVIC_Reserved4[62U];

    union NVIC_IPR0_union
    {
        uint32_t R;
        struct NVIC_IPR0_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR0; //!< Interrupt Priority Register (Offset: 0x300, reset: 0x00)

    union NVIC_IPR1_union
    {
        uint32_t R;
        struct NVIC_IPR1_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR1; //!< Interrupt Priority Register (Offset: 0x304, reset: 0x00)

    union NVIC_IPR2_union
    {
        uint32_t R;
        struct NVIC_IPR2_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR2; //!< Interrupt Priority Register (Offset: 0x308, reset: 0x00)

    union NVIC_IPR3_union
    {
        uint32_t R;
        struct NVIC_IPR3_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR3; //!< Interrupt Priority Register (Offset: 0x30c, reset: 0x00)

    union NVIC_IPR4_union
    {
        uint32_t R;
        struct NVIC_IPR4_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR4; //!< Interrupt Priority Register (Offset: 0x310, reset: 0x00)

    union NVIC_IPR5_union
    {
        uint32_t R;
        struct NVIC_IPR5_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR5; //!< Interrupt Priority Register (Offset: 0x314, reset: 0x00)

    union NVIC_IPR6_union
    {
        uint32_t R;
        struct NVIC_IPR6_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR6; //!< Interrupt Priority Register (Offset: 0x318, reset: 0x00)

    union NVIC_IPR7_union
    {
        uint32_t R;
        struct NVIC_IPR7_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR7; //!< Interrupt Priority Register (Offset: 0x31c, reset: 0x00)

    union NVIC_IPR8_union
    {
        uint32_t R;
        struct NVIC_IPR8_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR8; //!< Interrupt Priority Register (Offset: 0x320, reset: 0x00)

    union NVIC_IPR9_union
    {
        uint32_t R;
        struct NVIC_IPR9_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR9; //!< Interrupt Priority Register (Offset: 0x324, reset: 0x00)

    union NVIC_IPR10_union
    {
        uint32_t R;
        struct NVIC_IPR10_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR10; //!< Interrupt Priority Register (Offset: 0x328, reset: 0x00)

    union NVIC_IPR11_union
    {
        uint32_t R;
        struct NVIC_IPR11_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR11; //!< Interrupt Priority Register (Offset: 0x32c, reset: 0x00)

    union NVIC_IPR12_union
    {
        uint32_t R;
        struct NVIC_IPR12_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR12; //!< Interrupt Priority Register (Offset: 0x330, reset: 0x00)

    union NVIC_IPR13_union
    {
        uint32_t R;
        struct NVIC_IPR13_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR13; //!< Interrupt Priority Register (Offset: 0x334, reset: 0x00)

    union NVIC_IPR14_union
    {
        uint32_t R;
        struct NVIC_IPR14_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR14; //!< Interrupt Priority Register (Offset: 0x338, reset: 0x00)

    union NVIC_IPR15_union
    {
        uint32_t R;
        struct NVIC_IPR15_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR15; //!< Interrupt Priority Register (Offset: 0x33c, reset: 0x00)

    union NVIC_IPR16_union
    {
        uint32_t R;
        struct NVIC_IPR16_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR16; //!< Interrupt Priority Register (Offset: 0x340, reset: 0x00)

    union NVIC_IPR17_union
    {
        uint32_t R;
        struct NVIC_IPR17_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR17; //!< Interrupt Priority Register (Offset: 0x344, reset: 0x00)

    union NVIC_IPR18_union
    {
        uint32_t R;
        struct NVIC_IPR18_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR18; //!< Interrupt Priority Register (Offset: 0x348, reset: 0x00)

    union NVIC_IPR19_union
    {
        uint32_t R;
        struct NVIC_IPR19_B_struct
        {
            uint32_t IPR_N0     :8U; //!< IPR_N0
            uint32_t IPR_N1     :8U; //!< IPR_N1
            uint32_t IPR_N2     :8U; //!< IPR_N2
            uint32_t IPR_N3     :8U; //!< IPR_N3
        }B;
    } IPR19; //!< Interrupt Priority Register (Offset: 0x34c, reset: 0x00)

    union NVIC_IPR20_union
    {
        uint32_t R;
        struct NVIC_IPR20_B_struct
        {
            uint32_t            :32U;
        }B;
    } IPR20; //!< Interrupt Priority Register (Offset: 0x350, reset: 0x00)

    union NVIC_IPR21_union
    {
        uint32_t R;
        struct NVIC_IPR21_B_struct
        {
            uint32_t            :32U;
        }B;
    } IPR21; //!< Interrupt Priority Register (Offset: 0x354, reset: 0x00)

    union NVIC_IPR22_union
    {
        uint32_t R;
        struct NVIC_IPR22_B_struct
        {
            uint32_t            :32U;
        }B;
    } IPR22; //!< Interrupt Priority Register (Offset: 0x358, reset: 0x00)
} NVIC_t;



/**************************************************************************************************/
/*!                                  NVIC_STIR module memory map                                  */
/**************************************************************************************************/
typedef volatile struct NVIC_STIR_struct
{
    union NVIC_STIR_STIR_union
    {
        uint32_t R;
        struct NVIC_STIR_STIR_B_struct
        {
            uint32_t INTID      :9U; //!< Software generated interrupt
                                     //!<               ID
            uint32_t            :23U;
        }B;
    } STIR; //!< Software trigger interrupt (Offset: 0x00, reset: 0x00)
} NVIC_STIR_t;



/**************************************************************************************************/
/*!                                OTG_FS_PWRCLK module memory map                                */
/**************************************************************************************************/
typedef volatile struct OTG_FS_PWRCLK_struct
{
    union OTG_FS_PWRCLK_FS_PCGCCTL_union
    {
        uint32_t R;
        struct OTG_FS_PWRCLK_FS_PCGCCTL_B_struct
        {
            uint32_t STPPCLK    :1U; //!< Stop PHY clock
            uint32_t GATEHCLK   :1U; //!< Gate HCLK
            uint32_t            :2U;
            uint32_t PHYSUSP    :1U; //!< PHY Suspended
            uint32_t            :27U;
        }B;
    } FS_PCGCCTL; //!< OTG_FS power and clock gating control (Offset: 0x00, reset: 0x00)
} OTG_FS_PWRCLK_t;



/**************************************************************************************************/
/*!                                     PWR module memory map                                     */
/**************************************************************************************************/
typedef volatile struct PWR_struct
{
    union PWR_CR_union
    {
        uint32_t R;
        struct PWR_CR_B_struct
        {
            uint32_t LPDS       :1U; //!< Low-power deep sleep
            uint32_t PDDS       :1U; //!< Power down deepsleep
            uint32_t CWUF       :1U; //!< Clear wakeup flag
            uint32_t CSBF       :1U; //!< Clear standby flag
            uint32_t PVDE       :1U; //!< Power voltage detector
                                     //!<               enable
            uint32_t PLS        :3U; //!< PVD level selection
            uint32_t DBP        :1U; //!< Disable backup domain write
                                     //!<               protection
            uint32_t FPDS       :1U; //!< Flash power down in Stop
                                     //!<               mode
            uint32_t            :3U;
            uint32_t ADCDC1     :1U; //!< ADCDC1
            uint32_t VOS        :2U; //!< Regulator voltage scaling output
                                     //!<               selection
            uint32_t            :16U;
        }B;
    } CR; //!< power control register (Offset: 0x00, reset: 0x00)

    union PWR_CSR_union
    {
        uint32_t R;
        struct PWR_CSR_B_struct
        {
            uint32_t WUF        :1U; //!< Wakeup flag
            uint32_t SBF        :1U; //!< Standby flag
            uint32_t PVDO       :1U; //!< PVD output
            uint32_t BRR        :1U; //!< Backup regulator ready
            uint32_t            :4U;
            uint32_t EWUP       :1U; //!< Enable WKUP pin
            uint32_t BRE        :1U; //!< Backup regulator enable
            uint32_t            :4U;
            uint32_t VOSRDY     :1U; //!< Regulator voltage scaling output
                                     //!<               selection ready bit
            uint32_t            :17U;
        }B;
    } CSR; //!< power control/status register (Offset: 0x04, reset: 0x00)
} PWR_t;



/**************************************************************************************************/
/*!                                     RCC module memory map                                     */
/**************************************************************************************************/
typedef volatile struct RCC_struct
{
    union RCC_CR_union
    {
        uint32_t R;
        struct RCC_CR_B_struct
        {
            uint32_t HSION      :1U; //!< Internal high-speed clock
                                     //!<               enable
            uint32_t HSIRDY     :1U; //!< Internal high-speed clock ready
                                     //!<               flag
            uint32_t            :1U;
            uint32_t HSITRIM    :5U; //!< Internal high-speed clock
                                     //!<               trimming
            uint32_t HSICAL     :8U; //!< Internal high-speed clock
                                     //!<               calibration
            uint32_t HSEON      :1U; //!< HSE clock enable
            uint32_t HSERDY     :1U; //!< HSE clock ready flag
            uint32_t HSEBYP     :1U; //!< HSE clock bypass
            uint32_t CSSON      :1U; //!< Clock security system
                                     //!<               enable
            uint32_t            :4U;
            uint32_t PLLON      :1U; //!< Main PLL (PLL) enable
            uint32_t PLLRDY     :1U; //!< Main PLL (PLL) clock ready
                                     //!<               flag
            uint32_t PLLI2SON   :1U; //!< PLLI2S enable
            uint32_t PLLI2SRDY  :1U; //!< PLLI2S clock ready flag
            uint32_t            :4U;
        }B;
    } CR; //!< clock control register (Offset: 0x00, reset: 0x83)

    union RCC_PLLCFGR_union
    {
        uint32_t R;
        struct RCC_PLLCFGR_B_struct
        {
            uint32_t PLLM0      :1U; //!< Division factor for the main PLL (PLL)
                                     //!<               and audio PLL (PLLI2S) input clock
            uint32_t PLLM1      :1U; //!< Division factor for the main PLL (PLL)
                                     //!<               and audio PLL (PLLI2S) input clock
            uint32_t PLLM2      :1U; //!< Division factor for the main PLL (PLL)
                                     //!<               and audio PLL (PLLI2S) input clock
            uint32_t PLLM3      :1U; //!< Division factor for the main PLL (PLL)
                                     //!<               and audio PLL (PLLI2S) input clock
            uint32_t PLLM4      :1U; //!< Division factor for the main PLL (PLL)
                                     //!<               and audio PLL (PLLI2S) input clock
            uint32_t PLLM5      :1U; //!< Division factor for the main PLL (PLL)
                                     //!<               and audio PLL (PLLI2S) input clock
            uint32_t PLLN0      :1U; //!< Main PLL (PLL) multiplication factor for
                                     //!<               VCO
            uint32_t PLLN1      :1U; //!< Main PLL (PLL) multiplication factor for
                                     //!<               VCO
            uint32_t PLLN2      :1U; //!< Main PLL (PLL) multiplication factor for
                                     //!<               VCO
            uint32_t PLLN3      :1U; //!< Main PLL (PLL) multiplication factor for
                                     //!<               VCO
            uint32_t PLLN4      :1U; //!< Main PLL (PLL) multiplication factor for
                                     //!<               VCO
            uint32_t PLLN5      :1U; //!< Main PLL (PLL) multiplication factor for
                                     //!<               VCO
            uint32_t PLLN6      :1U; //!< Main PLL (PLL) multiplication factor for
                                     //!<               VCO
            uint32_t PLLN7      :1U; //!< Main PLL (PLL) multiplication factor for
                                     //!<               VCO
            uint32_t PLLN8      :1U; //!< Main PLL (PLL) multiplication factor for
                                     //!<               VCO
            uint32_t            :1U;
            uint32_t PLLP0      :1U; //!< Main PLL (PLL) division factor for main
                                     //!<               system clock
            uint32_t PLLP1      :1U; //!< Main PLL (PLL) division factor for main
                                     //!<               system clock
            uint32_t            :4U;
            uint32_t PLLSRC     :1U; //!< Main PLL(PLL) and audio PLL (PLLI2S)
                                     //!<               entry clock source
            uint32_t            :1U;
            uint32_t PLLQ0      :1U; //!< Main PLL (PLL) division factor for USB
                                     //!<               OTG FS, SDIO and random number generator
                                     //!<               clocks
            uint32_t PLLQ1      :1U; //!< Main PLL (PLL) division factor for USB
                                     //!<               OTG FS, SDIO and random number generator
                                     //!<               clocks
            uint32_t PLLQ2      :1U; //!< Main PLL (PLL) division factor for USB
                                     //!<               OTG FS, SDIO and random number generator
                                     //!<               clocks
            uint32_t PLLQ3      :1U; //!< Main PLL (PLL) division factor for USB
                                     //!<               OTG FS, SDIO and random number generator
                                     //!<               clocks
            uint32_t            :4U;
        }B;
    } PLLCFGR; //!< PLL configuration register (Offset: 0x04, reset: 0x24003010)

    union RCC_CFGR_union
    {
        uint32_t R;
        struct RCC_CFGR_B_struct
        {
            uint32_t SW0        :1U; //!< System clock switch
            uint32_t SW1        :1U; //!< System clock switch
            uint32_t SWS0       :1U; //!< System clock switch status
            uint32_t SWS1       :1U; //!< System clock switch status
            uint32_t HPRE       :4U; //!< AHB prescaler
            uint32_t            :2U;
            uint32_t PPRE1      :3U; //!< APB Low speed prescaler
                                     //!<               (APB1)
            uint32_t PPRE2      :3U; //!< APB high-speed prescaler
                                     //!<               (APB2)
            uint32_t RTCPRE     :5U; //!< HSE division factor for RTC
                                     //!<               clock
            uint32_t MCO1       :2U; //!< Microcontroller clock output
                                     //!<               1
            uint32_t I2SSRC     :1U; //!< I2S clock selection
            uint32_t MCO1PRE    :3U; //!< MCO1 prescaler
            uint32_t MCO2PRE    :3U; //!< MCO2 prescaler
            uint32_t MCO2       :2U; //!< Microcontroller clock output
                                     //!<               2
        }B;
    } CFGR; //!< clock configuration register (Offset: 0x08, reset: 0x00)

    union RCC_CIR_union
    {
        uint32_t R;
        struct RCC_CIR_B_struct
        {
            uint32_t LSIRDYF    :1U; //!< LSI ready interrupt flag
            uint32_t LSERDYF    :1U; //!< LSE ready interrupt flag
            uint32_t HSIRDYF    :1U; //!< HSI ready interrupt flag
            uint32_t HSERDYF    :1U; //!< HSE ready interrupt flag
            uint32_t PLLRDYF    :1U; //!< Main PLL (PLL) ready interrupt
                                     //!<               flag
            uint32_t PLLI2SRDYF :1U; //!< PLLI2S ready interrupt
                                     //!<               flag
            uint32_t            :1U;
            uint32_t CSSF       :1U; //!< Clock security system interrupt
                                     //!<               flag
            uint32_t LSIRDYIE   :1U; //!< LSI ready interrupt enable
            uint32_t LSERDYIE   :1U; //!< LSE ready interrupt enable
            uint32_t HSIRDYIE   :1U; //!< HSI ready interrupt enable
            uint32_t HSERDYIE   :1U; //!< HSE ready interrupt enable
            uint32_t PLLRDYIE   :1U; //!< Main PLL (PLL) ready interrupt
                                     //!<               enable
            uint32_t PLLI2SRDYIE:1U; //!< PLLI2S ready interrupt
                                     //!<               enable
            uint32_t            :2U;
            uint32_t LSIRDYC    :1U; //!< LSI ready interrupt clear
            uint32_t LSERDYC    :1U; //!< LSE ready interrupt clear
            uint32_t HSIRDYC    :1U; //!< HSI ready interrupt clear
            uint32_t HSERDYC    :1U; //!< HSE ready interrupt clear
            uint32_t PLLRDYC    :1U; //!< Main PLL(PLL) ready interrupt
                                     //!<               clear
            uint32_t PLLI2SRDYC :1U; //!< PLLI2S ready interrupt
                                     //!<               clear
            uint32_t            :1U;
            uint32_t CSSC       :1U; //!< Clock security system interrupt
                                     //!<               clear
            uint32_t            :8U;
        }B;
    } CIR; //!< clock interrupt register (Offset: 0x0c, reset: 0x00)

    union RCC_AHB1RSTR_union
    {
        uint32_t R;
        struct RCC_AHB1RSTR_B_struct
        {
            uint32_t GPIOARST   :1U; //!< IO port A reset
            uint32_t GPIOBRST   :1U; //!< IO port B reset
            uint32_t GPIOCRST   :1U; //!< IO port C reset
            uint32_t GPIODRST   :1U; //!< IO port D reset
            uint32_t GPIOERST   :1U; //!< IO port E reset
            uint32_t            :2U;
            uint32_t GPIOHRST   :1U; //!< IO port H reset
            uint32_t            :4U;
            uint32_t CRCRST     :1U; //!< CRC reset
            uint32_t            :8U;
            uint32_t DMA1RST    :1U; //!< DMA2 reset
            uint32_t DMA2RST    :1U; //!< DMA2 reset
            uint32_t            :9U;
        }B;
    } AHB1RSTR; //!< AHB1 peripheral reset register (Offset: 0x10, reset: 0x00)

    union RCC_AHB2RSTR_union
    {
        uint32_t R;
        struct RCC_AHB2RSTR_B_struct
        {
            uint32_t            :7U;
            uint32_t OTGFSRST   :1U; //!< USB OTG FS module reset
            uint32_t            :24U;
        }B;
    } AHB2RSTR; //!< AHB2 peripheral reset register (Offset: 0x14, reset: 0x00)

    uint32_t RCC_Reserved0[2U];

    union RCC_APB1RSTR_union
    {
        uint32_t R;
        struct RCC_APB1RSTR_B_struct
        {
            uint32_t TIM2RST    :1U; //!< TIM2 reset
            uint32_t TIM3RST    :1U; //!< TIM3 reset
            uint32_t TIM4RST    :1U; //!< TIM4 reset
            uint32_t TIM5RST    :1U; //!< TIM5 reset
            uint32_t            :7U;
            uint32_t WWDGRST    :1U; //!< Window watchdog reset
            uint32_t            :2U;
            uint32_t SPI2RST    :1U; //!< SPI 2 reset
            uint32_t SPI3RST    :1U; //!< SPI 3 reset
            uint32_t            :1U;
            uint32_t UART2RST   :1U; //!< USART 2 reset
            uint32_t            :3U;
            uint32_t I2C1RST    :1U; //!< I2C 1 reset
            uint32_t I2C2RST    :1U; //!< I2C 2 reset
            uint32_t I2C3RST    :1U; //!< I2C3 reset
            uint32_t            :4U;
            uint32_t PWRRST     :1U; //!< Power interface reset
            uint32_t            :3U;
        }B;
    } APB1RSTR; //!< APB1 peripheral reset register (Offset: 0x20, reset: 0x00)

    union RCC_APB2RSTR_union
    {
        uint32_t R;
        struct RCC_APB2RSTR_B_struct
        {
            uint32_t TIM1RST    :1U; //!< TIM1 reset
            uint32_t            :3U;
            uint32_t USART1RST  :1U; //!< USART1 reset
            uint32_t USART6RST  :1U; //!< USART6 reset
            uint32_t            :2U;
            uint32_t ADCRST     :1U; //!< ADC interface reset (common to all
                                     //!<               ADCs)
            uint32_t            :2U;
            uint32_t SDIORST    :1U; //!< SDIO reset
            uint32_t SPI1RST    :1U; //!< SPI 1 reset
            uint32_t            :1U;
            uint32_t SYSCFGRST  :1U; //!< System configuration controller
                                     //!<               reset
            uint32_t            :1U;
            uint32_t TIM9RST    :1U; //!< TIM9 reset
            uint32_t TIM10RST   :1U; //!< TIM10 reset
            uint32_t TIM11RST   :1U; //!< TIM11 reset
            uint32_t            :13U;
        }B;
    } APB2RSTR; //!< APB2 peripheral reset register (Offset: 0x24, reset: 0x00)

    uint32_t RCC_Reserved1[2U];

    union RCC_AHB1ENR_union
    {
        uint32_t R;
        struct RCC_AHB1ENR_B_struct
        {
            uint32_t GPIOAEN    :1U; //!< IO port A clock enable
            uint32_t GPIOBEN    :1U; //!< IO port B clock enable
            uint32_t GPIOCEN    :1U; //!< IO port C clock enable
            uint32_t GPIODEN    :1U; //!< IO port D clock enable
            uint32_t GPIOEEN    :1U; //!< IO port E clock enable
            uint32_t            :2U;
            uint32_t GPIOHEN    :1U; //!< IO port H clock enable
            uint32_t            :4U;
            uint32_t CRCEN      :1U; //!< CRC clock enable
            uint32_t            :8U;
            uint32_t DMA1EN     :1U; //!< DMA1 clock enable
            uint32_t DMA2EN     :1U; //!< DMA2 clock enable
            uint32_t            :9U;
        }B;
    } AHB1ENR; //!< AHB1 peripheral clock register (Offset: 0x30, reset: 0x100000)

    union RCC_AHB2ENR_union
    {
        uint32_t R;
        struct RCC_AHB2ENR_B_struct
        {
            uint32_t            :7U;
            uint32_t OTGFSEN    :1U; //!< USB OTG FS clock enable
            uint32_t            :24U;
        }B;
    } AHB2ENR; //!< AHB2 peripheral clock enable (Offset: 0x34, reset: 0x00)

    uint32_t RCC_Reserved2[2U];

    union RCC_APB1ENR_union
    {
        uint32_t R;
        struct RCC_APB1ENR_B_struct
        {
            uint32_t TIM2EN     :1U; //!< TIM2 clock enable
            uint32_t TIM3EN     :1U; //!< TIM3 clock enable
            uint32_t TIM4EN     :1U; //!< TIM4 clock enable
            uint32_t TIM5EN     :1U; //!< TIM5 clock enable
            uint32_t            :7U;
            uint32_t WWDGEN     :1U; //!< Window watchdog clock
                                     //!<               enable
            uint32_t            :2U;
            uint32_t SPI2EN     :1U; //!< SPI2 clock enable
            uint32_t SPI3EN     :1U; //!< SPI3 clock enable
            uint32_t            :1U;
            uint32_t USART2EN   :1U; //!< USART 2 clock enable
            uint32_t            :3U;
            uint32_t I2C1EN     :1U; //!< I2C1 clock enable
            uint32_t I2C2EN     :1U; //!< I2C2 clock enable
            uint32_t I2C3EN     :1U; //!< I2C3 clock enable
            uint32_t            :4U;
            uint32_t PWREN      :1U; //!< Power interface clock
                                     //!<               enable
            uint32_t            :3U;
        }B;
    } APB1ENR; //!< APB1 peripheral clock enable (Offset: 0x40, reset: 0x00)

    union RCC_APB2ENR_union
    {
        uint32_t R;
        struct RCC_APB2ENR_B_struct
        {
            uint32_t TIM1EN     :1U; //!< TIM1 clock enable
            uint32_t            :3U;
            uint32_t USART1EN   :1U; //!< USART1 clock enable
            uint32_t USART6EN   :1U; //!< USART6 clock enable
            uint32_t            :2U;
            uint32_t ADC1EN     :1U; //!< ADC1 clock enable
            uint32_t            :2U;
            uint32_t SDIOEN     :1U; //!< SDIO clock enable
            uint32_t SPI1EN     :1U; //!< SPI1 clock enable
            uint32_t SPI4EN     :1U; //!< SPI4 clock enable
            uint32_t SYSCFGEN   :1U; //!< System configuration controller clock
                                     //!<               enable
            uint32_t            :1U;
            uint32_t TIM9EN     :1U; //!< TIM9 clock enable
            uint32_t TIM10EN    :1U; //!< TIM10 clock enable
            uint32_t TIM11EN    :1U; //!< TIM11 clock enable
            uint32_t            :13U;
        }B;
    } APB2ENR; //!< APB2 peripheral clock enable (Offset: 0x44, reset: 0x00)

    uint32_t RCC_Reserved3[2U];

    union RCC_AHB1LPENR_union
    {
        uint32_t R;
        struct RCC_AHB1LPENR_B_struct
        {
            uint32_t GPIOALPEN  :1U; //!< IO port A clock enable during sleep
                                     //!<               mode
            uint32_t GPIOBLPEN  :1U; //!< IO port B clock enable during Sleep
                                     //!<               mode
            uint32_t GPIOCLPEN  :1U; //!< IO port C clock enable during Sleep
                                     //!<               mode
            uint32_t GPIODLPEN  :1U; //!< IO port D clock enable during Sleep
                                     //!<               mode
            uint32_t GPIOELPEN  :1U; //!< IO port E clock enable during Sleep
                                     //!<               mode
            uint32_t            :2U;
            uint32_t GPIOHLPEN  :1U; //!< IO port H clock enable during Sleep
                                     //!<               mode
            uint32_t            :4U;
            uint32_t CRCLPEN    :1U; //!< CRC clock enable during Sleep
                                     //!<               mode
            uint32_t            :2U;
            uint32_t FLITFLPEN  :1U; //!< Flash interface clock enable during
                                     //!<               Sleep mode
            uint32_t SRAM1LPEN  :1U; //!< SRAM 1interface clock enable during
                                     //!<               Sleep mode
            uint32_t            :4U;
            uint32_t DMA1LPEN   :1U; //!< DMA1 clock enable during Sleep
                                     //!<               mode
            uint32_t DMA2LPEN   :1U; //!< DMA2 clock enable during Sleep
                                     //!<               mode
            uint32_t            :9U;
        }B;
    } AHB1LPENR; //!< AHB1 peripheral clock enable in low power (Offset: 0x50, reset: 0x7e6791ff)

    union RCC_AHB2LPENR_union
    {
        uint32_t R;
        struct RCC_AHB2LPENR_B_struct
        {
            uint32_t            :7U;
            uint32_t OTGFSLPEN  :1U; //!< USB OTG FS clock enable during Sleep
                                     //!<               mode
            uint32_t            :24U;
        }B;
    } AHB2LPENR; //!< AHB2 peripheral clock enable in low power (Offset: 0x54, reset: 0xf1)

    uint32_t RCC_Reserved4[2U];

    union RCC_APB1LPENR_union
    {
        uint32_t R;
        struct RCC_APB1LPENR_B_struct
        {
            uint32_t TIM2LPEN   :1U; //!< TIM2 clock enable during Sleep
                                     //!<               mode
            uint32_t TIM3LPEN   :1U; //!< TIM3 clock enable during Sleep
                                     //!<               mode
            uint32_t TIM4LPEN   :1U; //!< TIM4 clock enable during Sleep
                                     //!<               mode
            uint32_t TIM5LPEN   :1U; //!< TIM5 clock enable during Sleep
                                     //!<               mode
            uint32_t            :7U;
            uint32_t WWDGLPEN   :1U; //!< Window watchdog clock enable during
                                     //!<               Sleep mode
            uint32_t            :2U;
            uint32_t SPI2LPEN   :1U; //!< SPI2 clock enable during Sleep
                                     //!<               mode
            uint32_t SPI3LPEN   :1U; //!< SPI3 clock enable during Sleep
                                     //!<               mode
            uint32_t            :1U;
            uint32_t USART2LPEN :1U; //!< USART2 clock enable during Sleep
                                     //!<               mode
            uint32_t            :3U;
            uint32_t I2C1LPEN   :1U; //!< I2C1 clock enable during Sleep
                                     //!<               mode
            uint32_t I2C2LPEN   :1U; //!< I2C2 clock enable during Sleep
                                     //!<               mode
            uint32_t I2C3LPEN   :1U; //!< I2C3 clock enable during Sleep
                                     //!<               mode
            uint32_t            :4U;
            uint32_t PWRLPEN    :1U; //!< Power interface clock enable during
                                     //!<               Sleep mode
            uint32_t            :3U;
        }B;
    } APB1LPENR; //!< APB1 peripheral clock enable in low power (Offset: 0x60, reset: 0x36fec9ff)

    union RCC_APB2LPENR_union
    {
        uint32_t R;
        struct RCC_APB2LPENR_B_struct
        {
            uint32_t TIM1LPEN   :1U; //!< TIM1 clock enable during Sleep
                                     //!<               mode
            uint32_t            :3U;
            uint32_t USART1LPEN :1U; //!< USART1 clock enable during Sleep
                                     //!<               mode
            uint32_t USART6LPEN :1U; //!< USART6 clock enable during Sleep
                                     //!<               mode
            uint32_t            :2U;
            uint32_t ADC1LPEN   :1U; //!< ADC1 clock enable during Sleep
                                     //!<               mode
            uint32_t            :2U;
            uint32_t SDIOLPEN   :1U; //!< SDIO clock enable during Sleep
                                     //!<               mode
            uint32_t SPI1LPEN   :1U; //!< SPI 1 clock enable during Sleep
                                     //!<               mode
            uint32_t SPI4LPEN   :1U; //!< SPI4 clock enable during Sleep
                                     //!<               mode
            uint32_t SYSCFGLPEN :1U; //!< System configuration controller clock
                                     //!<               enable during Sleep mode
            uint32_t            :1U;
            uint32_t TIM9LPEN   :1U; //!< TIM9 clock enable during sleep
                                     //!<               mode
            uint32_t TIM10LPEN  :1U; //!< TIM10 clock enable during Sleep
                                     //!<               mode
            uint32_t TIM11LPEN  :1U; //!< TIM11 clock enable during Sleep
                                     //!<               mode
            uint32_t            :13U;
        }B;
    } APB2LPENR; //!< APB2 peripheral clock enabled in low power (Offset: 0x64, reset: 0x75f33)

    uint32_t RCC_Reserved5[2U];

    union RCC_BDCR_union
    {
        uint32_t R;
        struct RCC_BDCR_B_struct
        {
            uint32_t LSEON      :1U; //!< External low-speed oscillator
                                     //!<               enable
            uint32_t LSERDY     :1U; //!< External low-speed oscillator
                                     //!<               ready
            uint32_t LSEBYP     :1U; //!< External low-speed oscillator
                                     //!<               bypass
            uint32_t            :5U;
            uint32_t RTCSEL0    :1U; //!< RTC clock source selection
            uint32_t RTCSEL1    :1U; //!< RTC clock source selection
            uint32_t            :5U;
            uint32_t RTCEN      :1U; //!< RTC clock enable
            uint32_t BDRST      :1U; //!< Backup domain software
                                     //!<               reset
            uint32_t            :15U;
        }B;
    } BDCR; //!< Backup domain control register (Offset: 0x70, reset: 0x00)

    union RCC_CSR_union
    {
        uint32_t R;
        struct RCC_CSR_B_struct
        {
            uint32_t LSION      :1U; //!< Internal low-speed oscillator
                                     //!<               enable
            uint32_t LSIRDY     :1U; //!< Internal low-speed oscillator
                                     //!<               ready
            uint32_t            :22U;
            uint32_t RMVF       :1U; //!< Remove reset flag
            uint32_t BORRSTF    :1U; //!< BOR reset flag
            uint32_t PADRSTF    :1U; //!< PIN reset flag
            uint32_t PORRSTF    :1U; //!< POR/PDR reset flag
            uint32_t SFTRSTF    :1U; //!< Software reset flag
            uint32_t WDGRSTF    :1U; //!< Independent watchdog reset
                                     //!<               flag
            uint32_t WWDGRSTF   :1U; //!< Window watchdog reset flag
            uint32_t LPWRRSTF   :1U; //!< Low-power reset flag
        }B;
    } CSR; //!< clock control & status (Offset: 0x74, reset: 0xe000000)

    uint32_t RCC_Reserved6[2U];

    union RCC_SSCGR_union
    {
        uint32_t R;
        struct RCC_SSCGR_B_struct
        {
            uint32_t MODPER     :13U; //!< Modulation period
            uint32_t INCSTEP    :15U; //!< Incrementation step
            uint32_t            :2U;
            uint32_t SPREADSEL  :1U; //!< Spread Select
            uint32_t SSCGEN     :1U; //!< Spread spectrum modulation
                                     //!<               enable
        }B;
    } SSCGR; //!< spread spectrum clock generation (Offset: 0x80, reset: 0x00)

    union RCC_PLLI2SCFGR_union
    {
        uint32_t R;
        struct RCC_PLLI2SCFGR_B_struct
        {
            uint32_t            :6U;
            uint32_t PLLI2SNx   :9U; //!< PLLI2S multiplication factor for
                                     //!<               VCO
            uint32_t            :13U;
            uint32_t PLLI2SRx   :3U; //!< PLLI2S division factor for I2S
                                     //!<               clocks
            uint32_t            :1U;
        }B;
    } PLLI2SCFGR; //!< PLLI2S configuration register (Offset: 0x84, reset: 0x20003000)
} RCC_t;



/**************************************************************************************************/
/*!                                     RTC module memory map                                     */
/**************************************************************************************************/
typedef volatile struct RTC_struct
{
    union RTC_TR_union
    {
        uint32_t R;
        struct RTC_TR_B_struct
        {
            uint32_t SU         :4U; //!< Second units in BCD format
            uint32_t ST         :3U; //!< Second tens in BCD format
            uint32_t            :1U;
            uint32_t MNU        :4U; //!< Minute units in BCD format
            uint32_t MNT        :3U; //!< Minute tens in BCD format
            uint32_t            :1U;
            uint32_t HU         :4U; //!< Hour units in BCD format
            uint32_t HT         :2U; //!< Hour tens in BCD format
            uint32_t PM         :1U; //!< AM/PM notation
            uint32_t            :9U;
        }B;
    } TR; //!< time register (Offset: 0x00, reset: 0x00)

    union RTC_DR_union
    {
        uint32_t R;
        struct RTC_DR_B_struct
        {
            uint32_t DU         :4U; //!< Date units in BCD format
            uint32_t DT         :2U; //!< Date tens in BCD format
            uint32_t            :2U;
            uint32_t MU         :4U; //!< Month units in BCD format
            uint32_t MT         :1U; //!< Month tens in BCD format
            uint32_t WDU        :3U; //!< Week day units
            uint32_t YU         :4U; //!< Year units in BCD format
            uint32_t YT         :4U; //!< Year tens in BCD format
            uint32_t            :8U;
        }B;
    } DR; //!< date register (Offset: 0x04, reset: 0x2101)

    union RTC_CR_union
    {
        uint32_t R;
        struct RTC_CR_B_struct
        {
            uint32_t WCKSEL     :3U; //!< Wakeup clock selection
            uint32_t TSEDGE     :1U; //!< Time-stamp event active
                                     //!<               edge
            uint32_t REFCKON    :1U; //!< Reference clock detection enable (50 or
                                     //!<               60 Hz)
            uint32_t BYPSHAD    :1U; //!< Bypass the shadow
                                     //!<               registers
            uint32_t FMT        :1U; //!< Hour format
            uint32_t DCE        :1U; //!< Coarse digital calibration
                                     //!<               enable
            uint32_t ALRAE      :1U; //!< Alarm A enable
            uint32_t ALRBE      :1U; //!< Alarm B enable
            uint32_t WUTE       :1U; //!< Wakeup timer enable
            uint32_t TSE        :1U; //!< Time stamp enable
            uint32_t ALRAIE     :1U; //!< Alarm A interrupt enable
            uint32_t ALRBIE     :1U; //!< Alarm B interrupt enable
            uint32_t WUTIE      :1U; //!< Wakeup timer interrupt
                                     //!<               enable
            uint32_t TSIE       :1U; //!< Time-stamp interrupt
                                     //!<               enable
            uint32_t ADD1H      :1U; //!< Add 1 hour (summer time
                                     //!<               change)
            uint32_t SUB1H      :1U; //!< Subtract 1 hour (winter time
                                     //!<               change)
            uint32_t BKP        :1U; //!< Backup
            uint32_t COSEL      :1U; //!< Calibration Output
                                     //!<               selection
            uint32_t POL        :1U; //!< Output polarity
            uint32_t OSEL       :2U; //!< Output selection
            uint32_t COE        :1U; //!< Calibration output enable
            uint32_t            :8U;
        }B;
    } CR; //!< control register (Offset: 0x08, reset: 0x00)

    union RTC_ISR_union
    {
        uint32_t R;
        struct RTC_ISR_B_struct
        {
            uint32_t ALRAWF     :1U; //!< Alarm A write flag
            uint32_t ALRBWF     :1U; //!< Alarm B write flag
            uint32_t WUTWF      :1U; //!< Wakeup timer write flag
            uint32_t SHPF       :1U; //!< Shift operation pending
            uint32_t INITS      :1U; //!< Initialization status flag
            uint32_t RSF        :1U; //!< Registers synchronization
                                     //!<               flag
            uint32_t INITF      :1U; //!< Initialization flag
            uint32_t INIT       :1U; //!< Initialization mode
            uint32_t ALRAF      :1U; //!< Alarm A flag
            uint32_t ALRBF      :1U; //!< Alarm B flag
            uint32_t WUTF       :1U; //!< Wakeup timer flag
            uint32_t TSF        :1U; //!< Time-stamp flag
            uint32_t TSOVF      :1U; //!< Time-stamp overflow flag
            uint32_t TAMP1F     :1U; //!< Tamper detection flag
            uint32_t TAMP2F     :1U; //!< TAMPER2 detection flag
            uint32_t            :1U;
            uint32_t RECALPF    :1U; //!< Recalibration pending Flag
            uint32_t            :15U;
        }B;
    } ISR; //!< initialization and status (Offset: 0x0c, reset: 0x07)

    union RTC_PRER_union
    {
        uint32_t R;
        struct RTC_PRER_B_struct
        {
            uint32_t PREDIV_S   :15U; //!< Synchronous prescaler
                                     //!<               factor
            uint32_t            :1U;
            uint32_t PREDIV_A   :7U; //!< Asynchronous prescaler
                                     //!<               factor
            uint32_t            :9U;
        }B;
    } PRER; //!< prescaler register (Offset: 0x10, reset: 0x7f00ff)

    union RTC_WUTR_union
    {
        uint32_t R;
        struct RTC_WUTR_B_struct
        {
            uint32_t WUT        :16U; //!< Wakeup auto-reload value
                                     //!<               bits
            uint32_t            :16U;
        }B;
    } WUTR; //!< wakeup timer register (Offset: 0x14, reset: 0xffff)

    union RTC_CALIBR_union
    {
        uint32_t R;
        struct RTC_CALIBR_B_struct
        {
            uint32_t DC         :5U; //!< Digital calibration
            uint32_t            :2U;
            uint32_t DCS        :1U; //!< Digital calibration sign
            uint32_t            :24U;
        }B;
    } CALIBR; //!< calibration register (Offset: 0x18, reset: 0x00)

    union RTC_ALRMAR_union
    {
        uint32_t R;
        struct RTC_ALRMAR_B_struct
        {
            uint32_t SU         :4U; //!< Second units in BCD format
            uint32_t ST         :3U; //!< Second tens in BCD format
            uint32_t MSK1       :1U; //!< Alarm A seconds mask
            uint32_t MNU        :4U; //!< Minute units in BCD format
            uint32_t MNT        :3U; //!< Minute tens in BCD format
            uint32_t MSK2       :1U; //!< Alarm A minutes mask
            uint32_t HU         :4U; //!< Hour units in BCD format
            uint32_t HT         :2U; //!< Hour tens in BCD format
            uint32_t PM         :1U; //!< AM/PM notation
            uint32_t MSK3       :1U; //!< Alarm A hours mask
            uint32_t DU         :4U; //!< Date units or day in BCD
                                     //!<               format
            uint32_t DT         :2U; //!< Date tens in BCD format
            uint32_t WDSEL      :1U; //!< Week day selection
            uint32_t MSK4       :1U; //!< Alarm A date mask
        }B;
    } ALRMAR; //!< alarm A register (Offset: 0x1c, reset: 0x00)

    union RTC_ALRMBR_union
    {
        uint32_t R;
        struct RTC_ALRMBR_B_struct
        {
            uint32_t SU         :4U; //!< Second units in BCD format
            uint32_t ST         :3U; //!< Second tens in BCD format
            uint32_t MSK1       :1U; //!< Alarm B seconds mask
            uint32_t MNU        :4U; //!< Minute units in BCD format
            uint32_t MNT        :3U; //!< Minute tens in BCD format
            uint32_t MSK2       :1U; //!< Alarm B minutes mask
            uint32_t HU         :4U; //!< Hour units in BCD format
            uint32_t HT         :2U; //!< Hour tens in BCD format
            uint32_t PM         :1U; //!< AM/PM notation
            uint32_t MSK3       :1U; //!< Alarm B hours mask
            uint32_t DU         :4U; //!< Date units or day in BCD
                                     //!<               format
            uint32_t DT         :2U; //!< Date tens in BCD format
            uint32_t WDSEL      :1U; //!< Week day selection
            uint32_t MSK4       :1U; //!< Alarm B date mask
        }B;
    } ALRMBR; //!< alarm B register (Offset: 0x20, reset: 0x00)

    union RTC_WPR_union
    {
        uint32_t R;
        struct RTC_WPR_B_struct
        {
            uint32_t KEY        :8U; //!< Write protection key
            uint32_t            :24U;
        }B;
    } WPR; //!< write protection register (Offset: 0x24, reset: 0x00)

    union RTC_SSR_union
    {
        uint32_t R;
        struct RTC_SSR_B_struct
        {
            uint32_t SS         :16U; //!< Sub second value
            uint32_t            :16U;
        }B;
    } SSR; //!< sub second register (Offset: 0x28, reset: 0x00)

    union RTC_SHIFTR_union
    {
        uint32_t R;
        struct RTC_SHIFTR_B_struct
        {
            uint32_t SUBFS      :15U; //!< Subtract a fraction of a
                                     //!<               second
            uint32_t            :16U;
            uint32_t ADD1S      :1U; //!< Add one second
        }B;
    } SHIFTR; //!< shift control register (Offset: 0x2c, reset: 0x00)

    union RTC_TSTR_union
    {
        uint32_t R;
        struct RTC_TSTR_B_struct
        {
            uint32_t SU         :4U; //!< Second units in BCD format
            uint32_t ST         :3U; //!< Second tens in BCD format
            uint32_t            :1U;
            uint32_t MNU        :4U; //!< Minute units in BCD format
            uint32_t MNT        :3U; //!< Minute tens in BCD format
            uint32_t            :1U;
            uint32_t HU         :4U; //!< Hour units in BCD format
            uint32_t HT         :2U; //!< Hour tens in BCD format
            uint32_t PM         :1U; //!< AM/PM notation
            uint32_t            :9U;
        }B;
    } TSTR; //!< time stamp time register (Offset: 0x30, reset: 0x00)

    union RTC_TSDR_union
    {
        uint32_t R;
        struct RTC_TSDR_B_struct
        {
            uint32_t DU         :4U; //!< Date units in BCD format
            uint32_t DT         :2U; //!< Date tens in BCD format
            uint32_t            :2U;
            uint32_t MU         :4U; //!< Month units in BCD format
            uint32_t MT         :1U; //!< Month tens in BCD format
            uint32_t WDU        :3U; //!< Week day units
            uint32_t            :16U;
        }B;
    } TSDR; //!< time stamp date register (Offset: 0x34, reset: 0x00)

    union RTC_TSSSR_union
    {
        uint32_t R;
        struct RTC_TSSSR_B_struct
        {
            uint32_t SS         :16U; //!< Sub second value
            uint32_t            :16U;
        }B;
    } TSSSR; //!< timestamp sub second register (Offset: 0x38, reset: 0x00)

    union RTC_CALR_union
    {
        uint32_t R;
        struct RTC_CALR_B_struct
        {
            uint32_t CALM       :9U; //!< Calibration minus
            uint32_t            :4U;
            uint32_t CALW16     :1U; //!< Use a 16-second calibration cycle
                                     //!<               period
            uint32_t CALW8      :1U; //!< Use an 8-second calibration cycle
                                     //!<               period
            uint32_t CALP       :1U; //!< Increase frequency of RTC by 488.5
                                     //!<               ppm
            uint32_t            :16U;
        }B;
    } CALR; //!< calibration register (Offset: 0x3c, reset: 0x00)

    union RTC_TAFCR_union
    {
        uint32_t R;
        struct RTC_TAFCR_B_struct
        {
            uint32_t TAMP1E     :1U; //!< Tamper 1 detection enable
            uint32_t TAMP1TRG   :1U; //!< Active level for tamper 1
            uint32_t TAMPIE     :1U; //!< Tamper interrupt enable
            uint32_t TAMP2E     :1U; //!< Tamper 2 detection enable
            uint32_t TAMP2TRG   :1U; //!< Active level for tamper 2
            uint32_t            :2U;
            uint32_t TAMPTS     :1U; //!< Activate timestamp on tamper detection
                                     //!<               event
            uint32_t TAMPFREQ   :3U; //!< Tamper sampling frequency
            uint32_t TAMPFLT    :2U; //!< Tamper filter count
            uint32_t TAMPPRCH   :2U; //!< Tamper precharge duration
            uint32_t TAMPPUDIS  :1U; //!< TAMPER pull-up disable
            uint32_t TAMP1INSEL :1U; //!< TAMPER1 mapping
            uint32_t TSINSEL    :1U; //!< TIMESTAMP mapping
            uint32_t ALARMOUTTYPE:1U; //!< AFO_ALARM output type
            uint32_t            :13U;
        }B;
    } TAFCR; //!< tamper and alternate function configuration (Offset: 0x40, reset: 0x00)

    union RTC_ALRMASSR_union
    {
        uint32_t R;
        struct RTC_ALRMASSR_B_struct
        {
            uint32_t SS         :15U; //!< Sub seconds value
            uint32_t            :9U;
            uint32_t MASKSS     :4U; //!< Mask the most-significant bits starting
                                     //!<               at this bit
            uint32_t            :4U;
        }B;
    } ALRMASSR; //!< alarm A sub second register (Offset: 0x44, reset: 0x00)

    union RTC_ALRMBSSR_union
    {
        uint32_t R;
        struct RTC_ALRMBSSR_B_struct
        {
            uint32_t SS         :15U; //!< Sub seconds value
            uint32_t            :9U;
            uint32_t MASKSS     :4U; //!< Mask the most-significant bits starting
                                     //!<               at this bit
            uint32_t            :4U;
        }B;
    } ALRMBSSR; //!< alarm B sub second register (Offset: 0x48, reset: 0x00)

    uint32_t RTC_Reserved0[1U];

    union RTC_BKP0R_union
    {
        uint32_t R;
        struct RTC_BKP0R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP0R; //!< backup register (Offset: 0x50, reset: 0x00)

    union RTC_BKP1R_union
    {
        uint32_t R;
        struct RTC_BKP1R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP1R; //!< backup register (Offset: 0x54, reset: 0x00)

    union RTC_BKP2R_union
    {
        uint32_t R;
        struct RTC_BKP2R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP2R; //!< backup register (Offset: 0x58, reset: 0x00)

    union RTC_BKP3R_union
    {
        uint32_t R;
        struct RTC_BKP3R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP3R; //!< backup register (Offset: 0x5c, reset: 0x00)

    union RTC_BKP4R_union
    {
        uint32_t R;
        struct RTC_BKP4R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP4R; //!< backup register (Offset: 0x60, reset: 0x00)

    union RTC_BKP5R_union
    {
        uint32_t R;
        struct RTC_BKP5R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP5R; //!< backup register (Offset: 0x64, reset: 0x00)

    union RTC_BKP6R_union
    {
        uint32_t R;
        struct RTC_BKP6R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP6R; //!< backup register (Offset: 0x68, reset: 0x00)

    union RTC_BKP7R_union
    {
        uint32_t R;
        struct RTC_BKP7R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP7R; //!< backup register (Offset: 0x6c, reset: 0x00)

    union RTC_BKP8R_union
    {
        uint32_t R;
        struct RTC_BKP8R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP8R; //!< backup register (Offset: 0x70, reset: 0x00)

    union RTC_BKP9R_union
    {
        uint32_t R;
        struct RTC_BKP9R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP9R; //!< backup register (Offset: 0x74, reset: 0x00)

    union RTC_BKP10R_union
    {
        uint32_t R;
        struct RTC_BKP10R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP10R; //!< backup register (Offset: 0x78, reset: 0x00)

    union RTC_BKP11R_union
    {
        uint32_t R;
        struct RTC_BKP11R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP11R; //!< backup register (Offset: 0x7c, reset: 0x00)

    union RTC_BKP12R_union
    {
        uint32_t R;
        struct RTC_BKP12R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP12R; //!< backup register (Offset: 0x80, reset: 0x00)

    union RTC_BKP13R_union
    {
        uint32_t R;
        struct RTC_BKP13R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP13R; //!< backup register (Offset: 0x84, reset: 0x00)

    union RTC_BKP14R_union
    {
        uint32_t R;
        struct RTC_BKP14R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP14R; //!< backup register (Offset: 0x88, reset: 0x00)

    union RTC_BKP15R_union
    {
        uint32_t R;
        struct RTC_BKP15R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP15R; //!< backup register (Offset: 0x8c, reset: 0x00)

    union RTC_BKP16R_union
    {
        uint32_t R;
        struct RTC_BKP16R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP16R; //!< backup register (Offset: 0x90, reset: 0x00)

    union RTC_BKP17R_union
    {
        uint32_t R;
        struct RTC_BKP17R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP17R; //!< backup register (Offset: 0x94, reset: 0x00)

    union RTC_BKP18R_union
    {
        uint32_t R;
        struct RTC_BKP18R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP18R; //!< backup register (Offset: 0x98, reset: 0x00)

    union RTC_BKP19R_union
    {
        uint32_t R;
        struct RTC_BKP19R_B_struct
        {
            uint32_t BKP        :32U; //!< BKP
        }B;
    } BKP19R; //!< backup register (Offset: 0x9c, reset: 0x00)
} RTC_t;



/**************************************************************************************************/
/*!                                     SCB module memory map                                     */
/**************************************************************************************************/
typedef volatile struct SCB_struct
{
    union SCB_CPUID_union
    {
        uint32_t R;
        struct SCB_CPUID_B_struct
        {
            uint32_t Revision   :4U; //!< Revision number
            uint32_t PartNo     :12U; //!< Part number of the
                                     //!<               processor
            uint32_t Constant   :4U; //!< Reads as 0xF
            uint32_t Variant    :4U; //!< Variant number
            uint32_t Implementer:8U; //!< Implementer code
        }B;
    } CPUID; //!< CPUID base register (Offset: 0x00, reset: 0x410fc241)

    union SCB_ICSR_union
    {
        uint32_t R;
        struct SCB_ICSR_B_struct
        {
            uint32_t VECTACTIVE :9U; //!< Active vector
            uint32_t            :2U;
            uint32_t RETTOBASE  :1U; //!< Return to base level
            uint32_t VECTPENDING:7U; //!< Pending vector
            uint32_t            :3U;
            uint32_t ISRPENDING :1U; //!< Interrupt pending flag
            uint32_t            :2U;
            uint32_t PENDSTCLR  :1U; //!< SysTick exception clear-pending
                                     //!<               bit
            uint32_t PENDSTSET  :1U; //!< SysTick exception set-pending
                                     //!<               bit
            uint32_t PENDSVCLR  :1U; //!< PendSV clear-pending bit
            uint32_t PENDSVSET  :1U; //!< PendSV set-pending bit
            uint32_t            :2U;
            uint32_t NMIPENDSET :1U; //!< NMI set-pending bit.
        }B;
    } ICSR; //!< Interrupt control and state (Offset: 0x04, reset: 0x00)

    union SCB_VTOR_union
    {
        uint32_t R;
        struct SCB_VTOR_B_struct
        {
            uint32_t            :9U;
            uint32_t TBLOFF     :21U; //!< Vector table base offset
                                     //!<               field
            uint32_t            :2U;
        }B;
    } VTOR; //!< Vector table offset register (Offset: 0x08, reset: 0x00)

    union SCB_AIRCR_union
    {
        uint32_t R;
        struct SCB_AIRCR_B_struct
        {
            uint32_t VECTRESET  :1U; //!< VECTRESET
            uint32_t VECTCLRACTIVE:1U; //!< VECTCLRACTIVE
            uint32_t SYSRESETREQ:1U; //!< SYSRESETREQ
            uint32_t            :5U;
            uint32_t PRIGROUP   :3U; //!< PRIGROUP
            uint32_t            :4U;
            uint32_t ENDIANESS  :1U; //!< ENDIANESS
            uint32_t VECTKEYSTAT:16U; //!< Register key
        }B;
    } AIRCR; //!< Application interrupt and reset control (Offset: 0x0c, reset: 0x00)

    union SCB_SCR_union
    {
        uint32_t R;
        struct SCB_SCR_B_struct
        {
            uint32_t            :1U;
            uint32_t SLEEPONEXIT:1U; //!< SLEEPONEXIT
            uint32_t SLEEPDEEP  :1U; //!< SLEEPDEEP
            uint32_t            :1U;
            uint32_t SEVEONPEND :1U; //!< Send Event on Pending bit
            uint32_t            :27U;
        }B;
    } SCR; //!< System control register (Offset: 0x10, reset: 0x00)

    union SCB_CCR_union
    {
        uint32_t R;
        struct SCB_CCR_B_struct
        {
            uint32_t NONBASETHRDENA:1U; //!< Configures how the processor enters
                                     //!<               Thread mode
            uint32_t USERSETMPEND:1U; //!< USERSETMPEND
            uint32_t            :1U;
            uint32_t UNALIGN__TRP:1U; //!< UNALIGN_ TRP
            uint32_t DIV_0_TRP  :1U; //!< DIV_0_TRP
            uint32_t            :3U;
            uint32_t BFHFNMIGN  :1U; //!< BFHFNMIGN
            uint32_t STKALIGN   :1U; //!< STKALIGN
            uint32_t            :22U;
        }B;
    } CCR; //!< Configuration and control (Offset: 0x14, reset: 0x00)

    union SCB_SHPR1_union
    {
        uint32_t R;
        struct SCB_SHPR1_B_struct
        {
            uint32_t PRI_4      :8U; //!< Priority of system handler
                                     //!<               4
            uint32_t PRI_5      :8U; //!< Priority of system handler
                                     //!<               5
            uint32_t PRI_6      :8U; //!< Priority of system handler
                                     //!<               6
            uint32_t            :8U;
        }B;
    } SHPR1; //!< System handler priority (Offset: 0x18, reset: 0x00)

    union SCB_SHPR2_union
    {
        uint32_t R;
        struct SCB_SHPR2_B_struct
        {
            uint32_t            :24U;
            uint32_t PRI_11     :8U; //!< Priority of system handler
                                     //!<               11
        }B;
    } SHPR2; //!< System handler priority (Offset: 0x1c, reset: 0x00)

    union SCB_SHPR3_union
    {
        uint32_t R;
        struct SCB_SHPR3_B_struct
        {
            uint32_t            :16U;
            uint32_t PRI_14     :8U; //!< Priority of system handler
                                     //!<               14
            uint32_t PRI_15     :8U; //!< Priority of system handler
                                     //!<               15
        }B;
    } SHPR3; //!< System handler priority (Offset: 0x20, reset: 0x00)

    union SCB_SHCSR_union
    {
        uint32_t R;
        struct SCB_SHCSR_B_struct
        {
            uint32_t MEMFAULTACT:1U; //!< Memory management fault exception active
                                     //!<               bit
            uint32_t BUSFAULTACT:1U; //!< Bus fault exception active
                                     //!<               bit
            uint32_t            :1U;
            uint32_t USGFAULTACT:1U; //!< Usage fault exception active
                                     //!<               bit
            uint32_t            :3U;
            uint32_t SVCALLACT  :1U; //!< SVC call active bit
            uint32_t MONITORACT :1U; //!< Debug monitor active bit
            uint32_t            :1U;
            uint32_t PENDSVACT  :1U; //!< PendSV exception active
                                     //!<               bit
            uint32_t SYSTICKACT :1U; //!< SysTick exception active
                                     //!<               bit
            uint32_t USGFAULTPENDED:1U; //!< Usage fault exception pending
                                     //!<               bit
            uint32_t MEMFAULTPENDED:1U; //!< Memory management fault exception
                                     //!<               pending bit
            uint32_t BUSFAULTPENDED:1U; //!< Bus fault exception pending
                                     //!<               bit
            uint32_t SVCALLPENDED:1U; //!< SVC call pending bit
            uint32_t MEMFAULTENA:1U; //!< Memory management fault enable
                                     //!<               bit
            uint32_t BUSFAULTENA:1U; //!< Bus fault enable bit
            uint32_t USGFAULTENA:1U; //!< Usage fault enable bit
            uint32_t            :13U;
        }B;
    } SHCSR; //!< System handler control and state (Offset: 0x24, reset: 0x00)

    union SCB_CFSR_UFSR_BFSR_MMFSR_union
    {
        uint32_t R;
        struct SCB_CFSR_UFSR_BFSR_MMFSR_B_struct
        {
            uint32_t            :1U;
            uint32_t IACCVIOL   :1U; //!< Instruction access violation
                                     //!<               flag
            uint32_t            :1U;
            uint32_t MUNSTKERR  :1U; //!< Memory manager fault on unstacking for a
                                     //!<               return from exception
            uint32_t MSTKERR    :1U; //!< Memory manager fault on stacking for
                                     //!<               exception entry.
            uint32_t MLSPERR    :1U; //!< MLSPERR
            uint32_t            :1U;
            uint32_t MMARVALID  :1U; //!< Memory Management Fault Address Register
                                     //!<               (MMAR) valid flag
            uint32_t IBUSERR    :1U; //!< Instruction bus error
            uint32_t PRECISERR  :1U; //!< Precise data bus error
            uint32_t IMPRECISERR:1U; //!< Imprecise data bus error
            uint32_t UNSTKERR   :1U; //!< Bus fault on unstacking for a return
                                     //!<               from exception
            uint32_t STKERR     :1U; //!< Bus fault on stacking for exception
                                     //!<               entry
            uint32_t LSPERR     :1U; //!< Bus fault on floating-point lazy state
                                     //!<               preservation
            uint32_t            :1U;
            uint32_t BFARVALID  :1U; //!< Bus Fault Address Register (BFAR) valid
                                     //!<               flag
            uint32_t UNDEFINSTR :1U; //!< Undefined instruction usage
                                     //!<               fault
            uint32_t INVSTATE   :1U; //!< Invalid state usage fault
            uint32_t INVPC      :1U; //!< Invalid PC load usage
                                     //!<               fault
            uint32_t NOCP       :1U; //!< No coprocessor usage
                                     //!<               fault.
            uint32_t            :4U;
            uint32_t UNALIGNED  :1U; //!< Unaligned access usage
                                     //!<               fault
            uint32_t DIVBYZERO  :1U; //!< Divide by zero usage fault
            uint32_t            :6U;
        }B;
    } CFSR_UFSR_BFSR_MMFSR; //!< Configurable fault status (Offset: 0x28, reset: 0x00)

    union SCB_HFSR_union
    {
        uint32_t R;
        struct SCB_HFSR_B_struct
        {
            uint32_t            :1U;
            uint32_t VECTTBL    :1U; //!< Vector table hard fault
            uint32_t            :28U;
            uint32_t FORCED     :1U; //!< Forced hard fault
            uint32_t DEBUG_VT   :1U; //!< Reserved for Debug use
        }B;
    } HFSR; //!< Hard fault status register (Offset: 0x2c, reset: 0x00)

    uint32_t SCB_Reserved0[1U];

    union SCB_MMFAR_union
    {
        uint32_t R;
        struct SCB_MMFAR_B_struct
        {
            uint32_t MMFAR      :32U; //!< Memory management fault
                                     //!<               address
        }B;
    } MMFAR; //!< Memory management fault address (Offset: 0x34, reset: 0x00)

    union SCB_BFAR_union
    {
        uint32_t R;
        struct SCB_BFAR_B_struct
        {
            uint32_t BFAR       :32U; //!< Bus fault address
        }B;
    } BFAR; //!< Bus fault address register (Offset: 0x38, reset: 0x00)

    union SCB_AFSR_union
    {
        uint32_t R;
        struct SCB_AFSR_B_struct
        {
            uint32_t IMPDEF     :32U; //!< Implementation defined
        }B;
    } AFSR; //!< Auxiliary fault status (Offset: 0x3c, reset: 0x00)
} SCB_t;



/**************************************************************************************************/
/*!                                  SCB_ACTRL module memory map                                  */
/**************************************************************************************************/
typedef volatile struct SCB_ACTRL_struct
{
    union SCB_ACTRL_ACTRL_union
    {
        uint32_t R;
        struct SCB_ACTRL_ACTRL_B_struct
        {
            uint32_t DISMCYCINT :1U; //!< DISMCYCINT
            uint32_t DISDEFWBUF :1U; //!< DISDEFWBUF
            uint32_t DISFOLD    :1U; //!< DISFOLD
            uint32_t            :5U;
            uint32_t DISFPCA    :1U; //!< DISFPCA
            uint32_t DISOOFP    :1U; //!< DISOOFP
            uint32_t            :22U;
        }B;
    } ACTRL; //!< Auxiliary control register (Offset: 0x00, reset: 0x00)
} SCB_ACTRL_t;



/**************************************************************************************************/
/*!                                     SDIO module memory map                                    */
/**************************************************************************************************/
typedef volatile struct SDIO_struct
{
    union SDIO_POWER_union
    {
        uint32_t R;
        struct SDIO_POWER_B_struct
        {
            uint32_t PWRCTRL    :2U; //!< PWRCTRL
            uint32_t            :30U;
        }B;
    } POWER; //!< power control register (Offset: 0x00, reset: 0x00)

    union SDIO_CLKCR_union
    {
        uint32_t R;
        struct SDIO_CLKCR_B_struct
        {
            uint32_t CLKDIV     :8U; //!< Clock divide factor
            uint32_t CLKEN      :1U; //!< Clock enable bit
            uint32_t PWRSAV     :1U; //!< Power saving configuration
                                     //!<               bit
            uint32_t BYPASS     :1U; //!< Clock divider bypass enable
                                     //!<               bit
            uint32_t WIDBUS     :2U; //!< Wide bus mode enable bit
            uint32_t NEGEDGE    :1U; //!< SDIO_CK dephasing selection
                                     //!<               bit
            uint32_t HWFC_EN    :1U; //!< HW Flow Control enable
            uint32_t            :17U;
        }B;
    } CLKCR; //!< SDI clock control register (Offset: 0x04, reset: 0x00)

    union SDIO_ARG_union
    {
        uint32_t R;
        struct SDIO_ARG_B_struct
        {
            uint32_t CMDARG     :32U; //!< Command argument
        }B;
    } ARG; //!< argument register (Offset: 0x08, reset: 0x00)

    union SDIO_CMD_union
    {
        uint32_t R;
        struct SDIO_CMD_B_struct
        {
            uint32_t CMDINDEX   :6U; //!< Command index
            uint32_t WAITRESP   :2U; //!< Wait for response bits
            uint32_t WAITINT    :1U; //!< CPSM waits for interrupt
                                     //!<               request
            uint32_t WAITPEND   :1U; //!< CPSM Waits for ends of data transfer
                                     //!<               (CmdPend internal signal).
            uint32_t CPSMEN     :1U; //!< Command path state machine (CPSM) Enable
                                     //!<               bit
            uint32_t SDIOSuspend:1U; //!< SD I/O suspend command
            uint32_t ENCMDcompl :1U; //!< Enable CMD completion
            uint32_t nIEN       :1U; //!< not Interrupt Enable
            uint32_t CE_ATACMD  :1U; //!< CE-ATA command
            uint32_t            :17U;
        }B;
    } CMD; //!< command register (Offset: 0x0c, reset: 0x00)

    union SDIO_RESPCMD_union
    {
        uint32_t R;
        struct SDIO_RESPCMD_B_struct
        {
            uint32_t RESPCMD    :6U; //!< Response command index
            uint32_t            :26U;
        }B;
    } RESPCMD; //!< command response register (Offset: 0x10, reset: 0x00)

    union SDIO_RESP1_union
    {
        uint32_t R;
        struct SDIO_RESP1_B_struct
        {
            uint32_t CARDSTATUS1:32U; //!< Card Status
        }B;
    } RESP1; //!< response 1..4 register (Offset: 0x14, reset: 0x00)

    union SDIO_RESP2_union
    {
        uint32_t R;
        struct SDIO_RESP2_B_struct
        {
            uint32_t CARDSTATUS2:32U; //!< Card Status
        }B;
    } RESP2; //!< response 1..4 register (Offset: 0x18, reset: 0x00)

    union SDIO_RESP3_union
    {
        uint32_t R;
        struct SDIO_RESP3_B_struct
        {
            uint32_t CARDSTATUS3:32U; //!< Card Status
        }B;
    } RESP3; //!< response 1..4 register (Offset: 0x1c, reset: 0x00)

    union SDIO_RESP4_union
    {
        uint32_t R;
        struct SDIO_RESP4_B_struct
        {
            uint32_t CARDSTATUS4:32U; //!< Card Status
        }B;
    } RESP4; //!< response 1..4 register (Offset: 0x20, reset: 0x00)

    union SDIO_DTIMER_union
    {
        uint32_t R;
        struct SDIO_DTIMER_B_struct
        {
            uint32_t DATATIME   :32U; //!< Data timeout period
        }B;
    } DTIMER; //!< data timer register (Offset: 0x24, reset: 0x00)

    union SDIO_DLEN_union
    {
        uint32_t R;
        struct SDIO_DLEN_B_struct
        {
            uint32_t DATALENGTH :25U; //!< Data length value
            uint32_t            :7U;
        }B;
    } DLEN; //!< data length register (Offset: 0x28, reset: 0x00)

    union SDIO_DCTRL_union
    {
        uint32_t R;
        struct SDIO_DCTRL_B_struct
        {
            uint32_t DTEN       :1U; //!< DTEN
            uint32_t DTDIR      :1U; //!< Data transfer direction
                                     //!<               selection
            uint32_t DTMODE     :1U; //!< Data transfer mode selection 1: Stream
                                     //!<               or SDIO multibyte data transfer.
            uint32_t DMAEN      :1U; //!< DMA enable bit
            uint32_t DBLOCKSIZE :4U; //!< Data block size
            uint32_t RWSTART    :1U; //!< Read wait start
            uint32_t RWSTOP     :1U; //!< Read wait stop
            uint32_t RWMOD      :1U; //!< Read wait mode
            uint32_t SDIOEN     :1U; //!< SD I/O enable functions
            uint32_t            :20U;
        }B;
    } DCTRL; //!< data control register (Offset: 0x2c, reset: 0x00)

    union SDIO_DCOUNT_union
    {
        uint32_t R;
        struct SDIO_DCOUNT_B_struct
        {
            uint32_t DATACOUNT  :25U; //!< Data count value
            uint32_t            :7U;
        }B;
    } DCOUNT; //!< data counter register (Offset: 0x30, reset: 0x00)

    union SDIO_STA_union
    {
        uint32_t R;
        struct SDIO_STA_B_struct
        {
            uint32_t CCRCFAIL   :1U; //!< Command response received (CRC check
                                     //!<               failed)
            uint32_t DCRCFAIL   :1U; //!< Data block sent/received (CRC check
                                     //!<               failed)
            uint32_t CTIMEOUT   :1U; //!< Command response timeout
            uint32_t DTIMEOUT   :1U; //!< Data timeout
            uint32_t TXUNDERR   :1U; //!< Transmit FIFO underrun
                                     //!<               error
            uint32_t RXOVERR    :1U; //!< Received FIFO overrun
                                     //!<               error
            uint32_t CMDREND    :1U; //!< Command response received (CRC check
                                     //!<               passed)
            uint32_t CMDSENT    :1U; //!< Command sent (no response
                                     //!<               required)
            uint32_t DATAEND    :1U; //!< Data end (data counter, SDIDCOUNT, is
                                     //!<               zero)
            uint32_t STBITERR   :1U; //!< Start bit not detected on all data
                                     //!<               signals in wide bus mode
            uint32_t DBCKEND    :1U; //!< Data block sent/received (CRC check
                                     //!<               passed)
            uint32_t CMDACT     :1U; //!< Command transfer in
                                     //!<               progress
            uint32_t TXACT      :1U; //!< Data transmit in progress
            uint32_t RXACT      :1U; //!< Data receive in progress
            uint32_t TXFIFOHE   :1U; //!< Transmit FIFO half empty: at least 8
                                     //!<               words can be written into the FIFO
            uint32_t RXFIFOHF   :1U; //!< Receive FIFO half full: there are at
                                     //!<               least 8 words in the FIFO
            uint32_t TXFIFOF    :1U; //!< Transmit FIFO full
            uint32_t RXFIFOF    :1U; //!< Receive FIFO full
            uint32_t TXFIFOE    :1U; //!< Transmit FIFO empty
            uint32_t RXFIFOE    :1U; //!< Receive FIFO empty
            uint32_t TXDAVL     :1U; //!< Data available in transmit
                                     //!<               FIFO
            uint32_t RXDAVL     :1U; //!< Data available in receive
                                     //!<               FIFO
            uint32_t SDIOIT     :1U; //!< SDIO interrupt received
            uint32_t CEATAEND   :1U; //!< CE-ATA command completion signal
                                     //!<               received for CMD61
            uint32_t            :8U;
        }B;
    } STA; //!< status register (Offset: 0x34, reset: 0x00)

    union SDIO_ICR_union
    {
        uint32_t R;
        struct SDIO_ICR_B_struct
        {
            uint32_t CCRCFAILC  :1U; //!< CCRCFAIL flag clear bit
            uint32_t DCRCFAILC  :1U; //!< DCRCFAIL flag clear bit
            uint32_t CTIMEOUTC  :1U; //!< CTIMEOUT flag clear bit
            uint32_t DTIMEOUTC  :1U; //!< DTIMEOUT flag clear bit
            uint32_t TXUNDERRC  :1U; //!< TXUNDERR flag clear bit
            uint32_t RXOVERRC   :1U; //!< RXOVERR flag clear bit
            uint32_t CMDRENDC   :1U; //!< CMDREND flag clear bit
            uint32_t CMDSENTC   :1U; //!< CMDSENT flag clear bit
            uint32_t DATAENDC   :1U; //!< DATAEND flag clear bit
            uint32_t STBITERRC  :1U; //!< STBITERR flag clear bit
            uint32_t DBCKENDC   :1U; //!< DBCKEND flag clear bit
            uint32_t            :11U;
            uint32_t SDIOITC    :1U; //!< SDIOIT flag clear bit
            uint32_t CEATAENDC  :1U; //!< CEATAEND flag clear bit
            uint32_t            :8U;
        }B;
    } ICR; //!< interrupt clear register (Offset: 0x38, reset: 0x00)

    union SDIO_MASK_union
    {
        uint32_t R;
        struct SDIO_MASK_B_struct
        {
            uint32_t CCRCFAILIE :1U; //!< Command CRC fail interrupt
                                     //!<               enable
            uint32_t DCRCFAILIE :1U; //!< Data CRC fail interrupt
                                     //!<               enable
            uint32_t CTIMEOUTIE :1U; //!< Command timeout interrupt
                                     //!<               enable
            uint32_t DTIMEOUTIE :1U; //!< Data timeout interrupt
                                     //!<               enable
            uint32_t TXUNDERRIE :1U; //!< Tx FIFO underrun error interrupt
                                     //!<               enable
            uint32_t RXOVERRIE  :1U; //!< Rx FIFO overrun error interrupt
                                     //!<               enable
            uint32_t CMDRENDIE  :1U; //!< Command response received interrupt
                                     //!<               enable
            uint32_t CMDSENTIE  :1U; //!< Command sent interrupt
                                     //!<               enable
            uint32_t DATAENDIE  :1U; //!< Data end interrupt enable
            uint32_t STBITERRIE :1U; //!< Start bit error interrupt
                                     //!<               enable
            uint32_t DBCKENDIE  :1U; //!< Data block end interrupt
                                     //!<               enable
            uint32_t CMDACTIE   :1U; //!< Command acting interrupt
                                     //!<               enable
            uint32_t TXACTIE    :1U; //!< Data transmit acting interrupt
                                     //!<               enable
            uint32_t RXACTIE    :1U; //!< Data receive acting interrupt
                                     //!<               enable
            uint32_t TXFIFOHEIE :1U; //!< Tx FIFO half empty interrupt
                                     //!<               enable
            uint32_t RXFIFOHFIE :1U; //!< Rx FIFO half full interrupt
                                     //!<               enable
            uint32_t TXFIFOFIE  :1U; //!< Tx FIFO full interrupt
                                     //!<               enable
            uint32_t RXFIFOFIE  :1U; //!< Rx FIFO full interrupt
                                     //!<               enable
            uint32_t TXFIFOEIE  :1U; //!< Tx FIFO empty interrupt
                                     //!<               enable
            uint32_t RXFIFOEIE  :1U; //!< Rx FIFO empty interrupt
                                     //!<               enable
            uint32_t TXDAVLIE   :1U; //!< Data available in Tx FIFO interrupt
                                     //!<               enable
            uint32_t RXDAVLIE   :1U; //!< Data available in Rx FIFO interrupt
                                     //!<               enable
            uint32_t SDIOITIE   :1U; //!< SDIO mode interrupt received interrupt
                                     //!<               enable
            uint32_t CEATAENDIE :1U; //!< CE-ATA command completion signal
                                     //!<               received interrupt enable
            uint32_t            :8U;
        }B;
    } MASK; //!< mask register (Offset: 0x3c, reset: 0x00)

    uint32_t SDIO_Reserved0[2U];

    union SDIO_FIFOCNT_union
    {
        uint32_t R;
        struct SDIO_FIFOCNT_B_struct
        {
            uint32_t FIFOCOUNT  :24U; //!< Remaining number of words to be written
                                     //!<               to or read from the FIFO.
            uint32_t            :8U;
        }B;
    } FIFOCNT; //!< FIFO counter register (Offset: 0x48, reset: 0x00)

    uint32_t SDIO_Reserved1[13U];

    union SDIO_FIFO_union
    {
        uint32_t R;
        struct SDIO_FIFO_B_struct
        {
            uint32_t FIFOData   :32U; //!< Receive and transmit FIFO
                                     //!<               data
        }B;
    } FIFO; //!< data FIFO register (Offset: 0x80, reset: 0x00)
} SDIO_t;



/**************************************************************************************************/
/*!                                     STK module memory map                                     */
/**************************************************************************************************/
typedef volatile struct STK_struct
{
    union STK_CTRL_union
    {
        uint32_t R;
        struct STK_CTRL_B_struct
        {
            uint32_t ENABLE     :1U; //!< Counter enable
            uint32_t TICKINT    :1U; //!< SysTick exception request
                                     //!<               enable
            uint32_t CLKSOURCE  :1U; //!< Clock source selection
            uint32_t            :13U;
            uint32_t COUNTFLAG  :1U; //!< COUNTFLAG
            uint32_t            :15U;
        }B;
    } CTRL; //!< SysTick control and status (Offset: 0x00, reset: 0x00)

    union STK_LOAD_union
    {
        uint32_t R;
        struct STK_LOAD_B_struct
        {
            uint32_t RELOAD     :24U; //!< RELOAD value
            uint32_t            :8U;
        }B;
    } LOAD; //!< SysTick reload value register (Offset: 0x04, reset: 0x00)

    union STK_VAL_union
    {
        uint32_t R;
        struct STK_VAL_B_struct
        {
            uint32_t CURRENT    :24U; //!< Current counter value
            uint32_t            :8U;
        }B;
    } VAL; //!< SysTick current value register (Offset: 0x08, reset: 0x00)

    union STK_CALIB_union
    {
        uint32_t R;
        struct STK_CALIB_B_struct
        {
            uint32_t TENMS      :24U; //!< Calibration value
            uint32_t            :6U;
            uint32_t SKEW       :1U; //!< SKEW flag: Indicates whether the TENMS
                                     //!<               value is exact
            uint32_t NOREF      :1U; //!< NOREF flag. Reads as zero
        }B;
    } CALIB; //!< SysTick calibration value (Offset: 0x0c, reset: 0x00)
} STK_t;



/**************************************************************************************************/
/*!                                    SYSCFG module memory map                                   */
/**************************************************************************************************/
typedef volatile struct SYSCFG_struct
{
    union SYSCFG_MEMRM_union
    {
        uint32_t R;
        struct SYSCFG_MEMRM_B_struct
        {
            uint32_t MEM_MODE   :2U; //!< MEM_MODE
            uint32_t            :30U;
        }B;
    } MEMRM; //!< memory remap register (Offset: 0x00, reset: 0x00)

    union SYSCFG_PMC_union
    {
        uint32_t R;
        struct SYSCFG_PMC_B_struct
        {
            uint32_t            :16U;
            uint32_t ADC1DC2    :1U; //!< ADC1DC2
            uint32_t            :15U;
        }B;
    } PMC; //!< peripheral mode configuration (Offset: 0x04, reset: 0x00)

    union SYSCFG_EXTICR1_union
    {
        uint32_t R;
        struct SYSCFG_EXTICR1_B_struct
        {
            uint32_t EXTI0      :4U; //!< EXTI x configuration (x = 0 to
                                     //!<               3)
            uint32_t EXTI1      :4U; //!< EXTI x configuration (x = 0 to
                                     //!<               3)
            uint32_t EXTI2      :4U; //!< EXTI x configuration (x = 0 to
                                     //!<               3)
            uint32_t EXTI3      :4U; //!< EXTI x configuration (x = 0 to
                                     //!<               3)
            uint32_t            :16U;
        }B;
    } EXTICR1; //!< external interrupt configuration register (Offset: 0x08, reset: 0x00)

    union SYSCFG_EXTICR2_union
    {
        uint32_t R;
        struct SYSCFG_EXTICR2_B_struct
        {
            uint32_t EXTI4      :4U; //!< EXTI x configuration (x = 4 to
                                     //!<               7)
            uint32_t EXTI5      :4U; //!< EXTI x configuration (x = 4 to
                                     //!<               7)
            uint32_t EXTI6      :4U; //!< EXTI x configuration (x = 4 to
                                     //!<               7)
            uint32_t EXTI7      :4U; //!< EXTI x configuration (x = 4 to
                                     //!<               7)
            uint32_t            :16U;
        }B;
    } EXTICR2; //!< external interrupt configuration register (Offset: 0x0c, reset: 0x00)

    union SYSCFG_EXTICR3_union
    {
        uint32_t R;
        struct SYSCFG_EXTICR3_B_struct
        {
            uint32_t EXTI8      :4U; //!< EXTI x configuration (x = 8 to
                                     //!<               11)
            uint32_t EXTI9      :4U; //!< EXTI x configuration (x = 8 to
                                     //!<               11)
            uint32_t EXTI10     :4U; //!< EXTI10
            uint32_t EXTI11     :4U; //!< EXTI x configuration (x = 8 to
                                     //!<               11)
            uint32_t            :16U;
        }B;
    } EXTICR3; //!< external interrupt configuration register (Offset: 0x10, reset: 0x00)

    union SYSCFG_EXTICR4_union
    {
        uint32_t R;
        struct SYSCFG_EXTICR4_B_struct
        {
            uint32_t EXTI12     :4U; //!< EXTI x configuration (x = 12 to
                                     //!<               15)
            uint32_t EXTI13     :4U; //!< EXTI x configuration (x = 12 to
                                     //!<               15)
            uint32_t EXTI14     :4U; //!< EXTI x configuration (x = 12 to
                                     //!<               15)
            uint32_t EXTI15     :4U; //!< EXTI x configuration (x = 12 to
                                     //!<               15)
            uint32_t            :16U;
        }B;
    } EXTICR4; //!< external interrupt configuration register (Offset: 0x14, reset: 0x00)

    uint32_t SYSCFG_Reserved0[2U];

    union SYSCFG_CMPCR_union
    {
        uint32_t R;
        struct SYSCFG_CMPCR_B_struct
        {
            uint32_t CMP_PD     :1U; //!< Compensation cell
                                     //!<               power-down
            uint32_t            :7U;
            uint32_t READY      :1U; //!< READY
            uint32_t            :23U;
        }B;
    } CMPCR; //!< Compensation cell control (Offset: 0x20, reset: 0x00)
} SYSCFG_t;



/**************************************************************************************************/
/*!                                    TIM1x module memory map                                    */
/**************************************************************************************************/
typedef volatile struct TIM1x_struct
{
    union TIM1x_CR1_union
    {
        uint32_t R;
        struct TIM1x_CR1_B_struct
        {
            uint32_t CEN        :1U; //!< Counter enable
            uint32_t UDIS       :1U; //!< Update disable
            uint32_t URS        :1U; //!< Update request source
            uint32_t OPM        :1U; //!< One-pulse mode
            uint32_t DIR        :1U; //!< Direction
            uint32_t CMS        :2U; //!< Center-aligned mode
                                     //!<               selection
            uint32_t ARPE       :1U; //!< Auto-reload preload enable
            uint32_t CKD        :2U; //!< Clock division
            uint32_t            :22U;
        }B;
    } CR1; //!< control register 1 (Offset: 0x00, reset: 0x00)

    union TIM1x_CR2_union
    {
        uint32_t R;
        struct TIM1x_CR2_B_struct
        {
            uint32_t CCPC       :1U; //!< Capture/compare preloaded
                                     //!<               control
            uint32_t            :1U;
            uint32_t CCUS       :1U; //!< Capture/compare control update
                                     //!<               selection
            uint32_t CCDS       :1U; //!< Capture/compare DMA
                                     //!<               selection
            uint32_t MMS        :3U; //!< Master mode selection
            uint32_t TI1S       :1U; //!< TI1 selection
            uint32_t OIS1       :1U; //!< Output Idle state 1
            uint32_t OIS1N      :1U; //!< Output Idle state 1
            uint32_t OIS2       :1U; //!< Output Idle state 2
            uint32_t OIS2N      :1U; //!< Output Idle state 2
            uint32_t OIS3       :1U; //!< Output Idle state 3
            uint32_t OIS3N      :1U; //!< Output Idle state 3
            uint32_t OIS4       :1U; //!< Output Idle state 4
            uint32_t            :17U;
        }B;
    } CR2; //!< control register 2 (Offset: 0x04, reset: 0x00)

    union TIM1x_SMCR_union
    {
        uint32_t R;
        struct TIM1x_SMCR_B_struct
        {
            uint32_t SMS        :3U; //!< Slave mode selection
            uint32_t            :1U;
            uint32_t TS         :3U; //!< Trigger selection
            uint32_t MSM        :1U; //!< Master/Slave mode
            uint32_t ETF        :4U; //!< External trigger filter
            uint32_t ETPS       :2U; //!< External trigger prescaler
            uint32_t ECE        :1U; //!< External clock enable
            uint32_t ETP        :1U; //!< External trigger polarity
            uint32_t            :16U;
        }B;
    } SMCR; //!< slave mode control register (Offset: 0x08, reset: 0x00)

    union TIM1x_DIER_union
    {
        uint32_t R;
        struct TIM1x_DIER_B_struct
        {
            uint32_t UIE        :1U; //!< Update interrupt enable
            uint32_t CC1IE      :1U; //!< Capture/Compare 1 interrupt
                                     //!<               enable
            uint32_t CC2IE      :1U; //!< Capture/Compare 2 interrupt
                                     //!<               enable
            uint32_t CC3IE      :1U; //!< Capture/Compare 3 interrupt
                                     //!<               enable
            uint32_t CC4IE      :1U; //!< Capture/Compare 4 interrupt
                                     //!<               enable
            uint32_t COMIE      :1U; //!< COM interrupt enable
            uint32_t TIE        :1U; //!< Trigger interrupt enable
            uint32_t BIE        :1U; //!< Break interrupt enable
            uint32_t UDE        :1U; //!< Update DMA request enable
            uint32_t CC1DE      :1U; //!< Capture/Compare 1 DMA request
                                     //!<               enable
            uint32_t CC2DE      :1U; //!< Capture/Compare 2 DMA request
                                     //!<               enable
            uint32_t CC3DE      :1U; //!< Capture/Compare 3 DMA request
                                     //!<               enable
            uint32_t CC4DE      :1U; //!< Capture/Compare 4 DMA request
                                     //!<               enable
            uint32_t COMDE      :1U; //!< COM DMA request enable
            uint32_t TDE        :1U; //!< Trigger DMA request enable
            uint32_t            :17U;
        }B;
    } DIER; //!< DMA/Interrupt enable register (Offset: 0x0c, reset: 0x00)

    union TIM1x_SR_union
    {
        uint32_t R;
        struct TIM1x_SR_B_struct
        {
            uint32_t UIF        :1U; //!< Update interrupt flag
            uint32_t CC1IF      :1U; //!< Capture/compare 1 interrupt
                                     //!<               flag
            uint32_t CC2IF      :1U; //!< Capture/Compare 2 interrupt
                                     //!<               flag
            uint32_t CC3IF      :1U; //!< Capture/Compare 3 interrupt
                                     //!<               flag
            uint32_t CC4IF      :1U; //!< Capture/Compare 4 interrupt
                                     //!<               flag
            uint32_t COMIF      :1U; //!< COM interrupt flag
            uint32_t TIF        :1U; //!< Trigger interrupt flag
            uint32_t BIF        :1U; //!< Break interrupt flag
            uint32_t            :1U;
            uint32_t CC1OF      :1U; //!< Capture/Compare 1 overcapture
                                     //!<               flag
            uint32_t CC2OF      :1U; //!< Capture/compare 2 overcapture
                                     //!<               flag
            uint32_t CC3OF      :1U; //!< Capture/Compare 3 overcapture
                                     //!<               flag
            uint32_t CC4OF      :1U; //!< Capture/Compare 4 overcapture
                                     //!<               flag
            uint32_t            :19U;
        }B;
    } SR; //!< status register (Offset: 0x10, reset: 0x00)

    union TIM1x_EGR_union
    {
        uint32_t R;
        struct TIM1x_EGR_B_struct
        {
            uint32_t UG         :1U; //!< Update generation
            uint32_t CC1G       :1U; //!< Capture/compare 1
                                     //!<               generation
            uint32_t CC2G       :1U; //!< Capture/compare 2
                                     //!<               generation
            uint32_t CC3G       :1U; //!< Capture/compare 3
                                     //!<               generation
            uint32_t CC4G       :1U; //!< Capture/compare 4
                                     //!<               generation
            uint32_t COMG       :1U; //!< Capture/Compare control update
                                     //!<               generation
            uint32_t TG         :1U; //!< Trigger generation
            uint32_t BG         :1U; //!< Break generation
            uint32_t            :24U;
        }B;
    } EGR; //!< event generation register (Offset: 0x14, reset: 0x00)

    union TIM1x_CCMR1_Output_union
    {
        uint32_t R;
        struct TIM1x_CCMR1_Output_struct
        {
            uint32_t CC1S       :2U; //!< Capture/Compare 1
                                     //!<               selection
            uint32_t OC1FE      :1U; //!< Output Compare 1 fast
                                     //!<               enable
            uint32_t OC1PE      :1U; //!< Output Compare 1 preload
                                     //!<               enable
            uint32_t OC1M       :3U; //!< Output Compare 1 mode
            uint32_t OC1CE      :1U; //!< Output Compare 1 clear
                                     //!<               enable
            uint32_t CC2S       :2U; //!< Capture/Compare 2
                                     //!<               selection
            uint32_t OC2FE      :1U; //!< Output Compare 2 fast
                                     //!<               enable
            uint32_t OC2PE      :1U; //!< Output Compare 2 preload
                                     //!<               enable
            uint32_t OC2M       :3U; //!< Output Compare 2 mode
            uint32_t OC2CE      :1U; //!< Output Compare 2 clear
                                     //!<               enable
            uint32_t            :16U;
        }CCMR1_Output;

        struct TIM1x_CCMR1_Input_struct
        {
            uint32_t CC1S       :2U; //!< Capture/Compare 1
                                     //!<               selection
            uint32_t ICPCS      :2U; //!< Input capture 1 prescaler
            uint32_t IC1F       :4U; //!< Input capture 1 filter
            uint32_t CC2S       :2U; //!< Capture/Compare 2
                                     //!<               selection
            uint32_t IC2PCS     :2U; //!< Input capture 2 prescaler
            uint32_t IC2F       :4U; //!< Input capture 2 filter
            uint32_t            :16U;
        }CCMR1_Input;
    } CCMR1; //!< capture/compare mode register 1 (input (Offset: 0x18, reset: 0x00)

    union TIM1x_CCMR2_Output_union
    {
        uint32_t R;
        struct TIM1x_CCMR2_Output_struct
        {
            uint32_t CC3S       :2U; //!< Capture/Compare 3
                                     //!<               selection
            uint32_t OC3FE      :1U; //!< Output compare 3 fast
                                     //!<               enable
            uint32_t OC3PE      :1U; //!< Output compare 3 preload
                                     //!<               enable
            uint32_t OC3M       :3U; //!< Output compare 3 mode
            uint32_t OC3CE      :1U; //!< Output compare 3 clear
                                     //!<               enable
            uint32_t CC4S       :2U; //!< Capture/Compare 4
                                     //!<               selection
            uint32_t OC4FE      :1U; //!< Output compare 4 fast
                                     //!<               enable
            uint32_t OC4PE      :1U; //!< Output compare 4 preload
                                     //!<               enable
            uint32_t OC4M       :3U; //!< Output compare 4 mode
            uint32_t OC4CE      :1U; //!< Output compare 4 clear
                                     //!<               enable
            uint32_t            :16U;
        }CCMR2_Output;

        struct TIM1x_CCMR2_Input_struct
        {
            uint32_t CC3S       :2U; //!< Capture/compare 3
                                     //!<               selection
            uint32_t IC3PSC     :2U; //!< Input capture 3 prescaler
            uint32_t IC3F       :4U; //!< Input capture 3 filter
            uint32_t CC4S       :2U; //!< Capture/Compare 4
                                     //!<               selection
            uint32_t IC4PSC     :2U; //!< Input capture 4 prescaler
            uint32_t IC4F       :4U; //!< Input capture 4 filter
            uint32_t            :16U;
        }CCMR2_Input;
    } CCMR2; //!< capture/compare mode register 2 (input (Offset: 0x1c, reset: 0x00)

    union TIM1x_CCER_union
    {
        uint32_t R;
        struct TIM1x_CCER_B_struct
        {
            uint32_t CC1E       :1U; //!< Capture/Compare 1 output
                                     //!<               enable
            uint32_t CC1P       :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t CC1NE      :1U; //!< Capture/Compare 1 complementary output
                                     //!<               enable
            uint32_t CC1NP      :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t CC2E       :1U; //!< Capture/Compare 2 output
                                     //!<               enable
            uint32_t CC2P       :1U; //!< Capture/Compare 2 output
                                     //!<               Polarity
            uint32_t CC2NE      :1U; //!< Capture/Compare 2 complementary output
                                     //!<               enable
            uint32_t CC2NP      :1U; //!< Capture/Compare 2 output
                                     //!<               Polarity
            uint32_t CC3E       :1U; //!< Capture/Compare 3 output
                                     //!<               enable
            uint32_t CC3P       :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t CC3NE      :1U; //!< Capture/Compare 3 complementary output
                                     //!<               enable
            uint32_t CC3NP      :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t CC4E       :1U; //!< Capture/Compare 4 output
                                     //!<               enable
            uint32_t CC4P       :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t            :18U;
        }B;
    } CCER; //!< capture/compare enable (Offset: 0x20, reset: 0x00)

    union TIM1x_CNT_union
    {
        uint32_t R;
        struct TIM1x_CNT_B_struct
        {
            uint32_t CNT        :16U; //!< counter value
            uint32_t            :16U;
        }B;
    } CNT; //!< counter (Offset: 0x24, reset: 0x00)

    union TIM1x_PSC_union
    {
        uint32_t R;
        struct TIM1x_PSC_B_struct
        {
            uint32_t PSC        :16U; //!< Prescaler value
            uint32_t            :16U;
        }B;
    } PSC; //!< prescaler (Offset: 0x28, reset: 0x00)

    union TIM1x_ARR_union
    {
        uint32_t R;
        struct TIM1x_ARR_B_struct
        {
            uint32_t ARR        :16U; //!< Auto-reload value
            uint32_t            :16U;
        }B;
    } ARR; //!< auto-reload register (Offset: 0x2c, reset: 0x00)

    union TIM1x_RCR_union
    {
        uint32_t R;
        struct TIM1x_RCR_B_struct
        {
            uint32_t REP        :8U; //!< Repetition counter value
            uint32_t            :24U;
        }B;
    } RCR; //!< repetition counter register (Offset: 0x30, reset: 0x00)

    union TIM1x_CCR1_union
    {
        uint32_t R;
        struct TIM1x_CCR1_B_struct
        {
            uint32_t CCR1       :16U; //!< Capture/Compare 1 value
            uint32_t            :16U;
        }B;
    } CCR1; //!< capture/compare register 1 (Offset: 0x34, reset: 0x00)

    union TIM1x_CCR2_union
    {
        uint32_t R;
        struct TIM1x_CCR2_B_struct
        {
            uint32_t CCR2       :16U; //!< Capture/Compare 2 value
            uint32_t            :16U;
        }B;
    } CCR2; //!< capture/compare register 2 (Offset: 0x38, reset: 0x00)

    union TIM1x_CCR3_union
    {
        uint32_t R;
        struct TIM1x_CCR3_B_struct
        {
            uint32_t CCR3       :16U; //!< Capture/Compare value
            uint32_t            :16U;
        }B;
    } CCR3; //!< capture/compare register 3 (Offset: 0x3c, reset: 0x00)

    union TIM1x_CCR4_union
    {
        uint32_t R;
        struct TIM1x_CCR4_B_struct
        {
            uint32_t CCR4       :16U; //!< Capture/Compare value
            uint32_t            :16U;
        }B;
    } CCR4; //!< capture/compare register 4 (Offset: 0x40, reset: 0x00)

    union TIM1x_BDTR_union
    {
        uint32_t R;
        struct TIM1x_BDTR_B_struct
        {
            uint32_t DTG        :8U; //!< Dead-time generator setup
            uint32_t LOCK       :2U; //!< Lock configuration
            uint32_t OSSI       :1U; //!< Off-state selection for Idle
                                     //!<               mode
            uint32_t OSSR       :1U; //!< Off-state selection for Run
                                     //!<               mode
            uint32_t BKE        :1U; //!< Break enable
            uint32_t BKP        :1U; //!< Break polarity
            uint32_t AOE        :1U; //!< Automatic output enable
            uint32_t MOE        :1U; //!< Main output enable
            uint32_t            :16U;
        }B;
    } BDTR; //!< break and dead-time register (Offset: 0x44, reset: 0x00)

    union TIM1x_DCR_union
    {
        uint32_t R;
        struct TIM1x_DCR_B_struct
        {
            uint32_t DBA        :5U; //!< DMA base address
            uint32_t            :3U;
            uint32_t DBL        :5U; //!< DMA burst length
            uint32_t            :19U;
        }B;
    } DCR; //!< DMA control register (Offset: 0x48, reset: 0x00)

    union TIM1x_DMAR_union
    {
        uint32_t R;
        struct TIM1x_DMAR_B_struct
        {
            uint32_t DMAB       :16U; //!< DMA register for burst
                                     //!<               accesses
            uint32_t            :16U;
        }B;
    } DMAR; //!< DMA address for full transfer (Offset: 0x4c, reset: 0x00)


} TIM1x_t;



/**************************************************************************************************/
/*!                                    TIM10 module memory map                                    */
/**************************************************************************************************/
typedef volatile struct TIM10_struct
{
    union TIM10_CR1_union
    {
        uint32_t R;
        struct TIM10_CR1_B_struct
        {
            uint32_t CEN        :1U; //!< Counter enable
            uint32_t UDIS       :1U; //!< Update disable
            uint32_t URS        :1U; //!< Update request source
            uint32_t            :4U;
            uint32_t ARPE       :1U; //!< Auto-reload preload enable
            uint32_t CKD        :2U; //!< Clock division
            uint32_t            :22U;
        }B;
    } CR1; //!< control register 1 (Offset: 0x00, reset: 0x00)

    uint32_t TIM10_Reserved0[2U];

    union TIM10_DIER_union
    {
        uint32_t R;
        struct TIM10_DIER_B_struct
        {
            uint32_t UIE        :1U; //!< Update interrupt enable
            uint32_t CC1IE      :1U; //!< Capture/Compare 1 interrupt
                                     //!<               enable
            uint32_t            :30U;
        }B;
    } DIER; //!< DMA/Interrupt enable register (Offset: 0x0c, reset: 0x00)

    union TIM10_SR_union
    {
        uint32_t R;
        struct TIM10_SR_B_struct
        {
            uint32_t UIF        :1U; //!< Update interrupt flag
            uint32_t CC1IF      :1U; //!< Capture/compare 1 interrupt
                                     //!<               flag
            uint32_t            :7U;
            uint32_t CC1OF      :1U; //!< Capture/Compare 1 overcapture
                                     //!<               flag
            uint32_t            :22U;
        }B;
    } SR; //!< status register (Offset: 0x10, reset: 0x00)

    union TIM10_EGR_union
    {
        uint32_t R;
        struct TIM10_EGR_B_struct
        {
            uint32_t UG         :1U; //!< Update generation
            uint32_t CC1G       :1U; //!< Capture/compare 1
                                     //!<               generation
            uint32_t            :30U;
        }B;
    } EGR; //!< event generation register (Offset: 0x14, reset: 0x00)

    union TIM10_CCMR1_Output_union
    {
        uint32_t R;
        struct TIM10_CCMR1_Output_struct
        {
            uint32_t CC1S       :2U; //!< Capture/Compare 1
                                     //!<               selection
            uint32_t OC1FE      :1U; //!< Output Compare 1 fast
                                     //!<               enable
            uint32_t OC1PE      :1U; //!< Output Compare 1 preload
                                     //!<               enable
            uint32_t OC1M       :3U; //!< Output Compare 1 mode
            uint32_t            :25U;
        }CCMR1_Output;

        struct TIM10_CCMR1_Input_struct
        {
            uint32_t CC1S       :2U; //!< Capture/Compare 1
                                     //!<               selection
            uint32_t ICPCS      :2U; //!< Input capture 1 prescaler
            uint32_t IC1F       :4U; //!< Input capture 1 filter
            uint32_t            :24U;
        }CCMR1_Input;
    } CCMR1; //!< capture/compare mode register 1 (input (Offset: 0x18, reset: 0x00)

    uint32_t TIM10_Reserved1[1U];

    union TIM10_CCER_union
    {
        uint32_t R;
        struct TIM10_CCER_B_struct
        {
            uint32_t CC1E       :1U; //!< Capture/Compare 1 output
                                     //!<               enable
            uint32_t CC1P       :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC1NP      :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t            :28U;
        }B;
    } CCER; //!< capture/compare enable (Offset: 0x20, reset: 0x00)

    union TIM10_CNT_union
    {
        uint32_t R;
        struct TIM10_CNT_B_struct
        {
            uint32_t CNT        :16U; //!< counter value
            uint32_t            :16U;
        }B;
    } CNT; //!< counter (Offset: 0x24, reset: 0x00)

    union TIM10_PSC_union
    {
        uint32_t R;
        struct TIM10_PSC_B_struct
        {
            uint32_t PSC        :16U; //!< Prescaler value
            uint32_t            :16U;
        }B;
    } PSC; //!< prescaler (Offset: 0x28, reset: 0x00)

    union TIM10_ARR_union
    {
        uint32_t R;
        struct TIM10_ARR_B_struct
        {
            uint32_t ARR        :16U; //!< Auto-reload value
            uint32_t            :16U;
        }B;
    } ARR; //!< auto-reload register (Offset: 0x2c, reset: 0x00)

    uint32_t TIM10_Reserved2[1U];

    union TIM10_CCR1_union
    {
        uint32_t R;
        struct TIM10_CCR1_B_struct
        {
            uint32_t CCR1       :16U; //!< Capture/Compare 1 value
            uint32_t            :16U;
        }B;
    } CCR1; //!< capture/compare register 1 (Offset: 0x34, reset: 0x00)
} TIM10_t;



/**************************************************************************************************/
/*!                                    TIM11 module memory map                                    */
/**************************************************************************************************/
typedef volatile struct TIM11_struct
{
    union TIM11_CR1_union
    {
        uint32_t R;
        struct TIM11_CR1_B_struct
        {
            uint32_t CEN        :1U; //!< Counter enable
            uint32_t UDIS       :1U; //!< Update disable
            uint32_t URS        :1U; //!< Update request source
            uint32_t            :4U;
            uint32_t ARPE       :1U; //!< Auto-reload preload enable
            uint32_t CKD        :2U; //!< Clock division
            uint32_t            :22U;
        }B;
    } CR1; //!< control register 1 (Offset: 0x00, reset: 0x00)

    uint32_t TIM11_Reserved0[2U];

    union TIM11_DIER_union
    {
        uint32_t R;
        struct TIM11_DIER_B_struct
        {
            uint32_t UIE        :1U; //!< Update interrupt enable
            uint32_t CC1IE      :1U; //!< Capture/Compare 1 interrupt
                                     //!<               enable
            uint32_t            :30U;
        }B;
    } DIER; //!< DMA/Interrupt enable register (Offset: 0x0c, reset: 0x00)

    union TIM11_SR_union
    {
        uint32_t R;
        struct TIM11_SR_B_struct
        {
            uint32_t UIF        :1U; //!< Update interrupt flag
            uint32_t CC1IF      :1U; //!< Capture/compare 1 interrupt
                                     //!<               flag
            uint32_t            :7U;
            uint32_t CC1OF      :1U; //!< Capture/Compare 1 overcapture
                                     //!<               flag
            uint32_t            :22U;
        }B;
    } SR; //!< status register (Offset: 0x10, reset: 0x00)

    union TIM11_EGR_union
    {
        uint32_t R;
        struct TIM11_EGR_B_struct
        {
            uint32_t UG         :1U; //!< Update generation
            uint32_t CC1G       :1U; //!< Capture/compare 1
                                     //!<               generation
            uint32_t            :30U;
        }B;
    } EGR; //!< event generation register (Offset: 0x14, reset: 0x00)

    union TIM11_CCMR1_Output_union
    {
        uint32_t R;
        struct TIM11_CCMR1_Output_struct
        {
            uint32_t CC1S       :2U; //!< Capture/Compare 1
                                     //!<               selection
            uint32_t OC1FE      :1U; //!< Output Compare 1 fast
                                     //!<               enable
            uint32_t OC1PE      :1U; //!< Output Compare 1 preload
                                     //!<               enable
            uint32_t OC1M       :3U; //!< Output Compare 1 mode
            uint32_t            :25U;
        }CCMR1_Output;

        struct TIM11_CCMR1_Input_struct
        {
            uint32_t CC1S       :2U; //!< Capture/Compare 1
                                     //!<               selection
            uint32_t ICPCS      :2U; //!< Input capture 1 prescaler
            uint32_t IC1F       :4U; //!< Input capture 1 filter
            uint32_t            :24U;
        }CCMR1_Input;
    } CCMR1; //!< capture/compare mode register 1 (input (Offset: 0x18, reset: 0x00)

    uint32_t TIM11_Reserved1[1U];

    union TIM11_CCER_union
    {
        uint32_t R;
        struct TIM11_CCER_B_struct
        {
            uint32_t CC1E       :1U; //!< Capture/Compare 1 output
                                     //!<               enable
            uint32_t CC1P       :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC1NP      :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t            :28U;
        }B;
    } CCER; //!< capture/compare enable (Offset: 0x20, reset: 0x00)

    union TIM11_CNT_union
    {
        uint32_t R;
        struct TIM11_CNT_B_struct
        {
            uint32_t CNT        :16U; //!< counter value
            uint32_t            :16U;
        }B;
    } CNT; //!< counter (Offset: 0x24, reset: 0x00)

    union TIM11_PSC_union
    {
        uint32_t R;
        struct TIM11_PSC_B_struct
        {
            uint32_t PSC        :16U; //!< Prescaler value
            uint32_t            :16U;
        }B;
    } PSC; //!< prescaler (Offset: 0x28, reset: 0x00)

    union TIM11_ARR_union
    {
        uint32_t R;
        struct TIM11_ARR_B_struct
        {
            uint32_t ARR        :16U; //!< Auto-reload value
            uint32_t            :16U;
        }B;
    } ARR; //!< auto-reload register (Offset: 0x2c, reset: 0x00)

    uint32_t TIM11_Reserved2[1U];

    union TIM11_CCR1_union
    {
        uint32_t R;
        struct TIM11_CCR1_B_struct
        {
            uint32_t CCR1       :16U; //!< Capture/Compare 1 value
            uint32_t            :16U;
        }B;
    } CCR1; //!< capture/compare register 1 (Offset: 0x34, reset: 0x00)

    uint32_t TIM11_Reserved3[6U];

    union TIM11_OR_union
    {
        uint32_t R;
        struct TIM11_OR_B_struct
        {
            uint32_t RMP        :2U; //!< Input 1 remapping
                                     //!<               capability
            uint32_t            :30U;
        }B;
    } OR; //!< option register (Offset: 0x50, reset: 0x00)
} TIM11_t;



/**************************************************************************************************/
/*!                                     TIM2 module memory map                                    */
/**************************************************************************************************/
typedef volatile struct TIM2_struct
{
    union TIM2_CR1_union
    {
        uint32_t R;
        struct TIM2_CR1_B_struct
        {
            uint32_t CEN        :1U; //!< Counter enable
            uint32_t UDIS       :1U; //!< Update disable
            uint32_t URS        :1U; //!< Update request source
            uint32_t OPM        :1U; //!< One-pulse mode
            uint32_t DIR        :1U; //!< Direction
            uint32_t CMS        :2U; //!< Center-aligned mode
                                     //!<               selection
            uint32_t ARPE       :1U; //!< Auto-reload preload enable
            uint32_t CKD        :2U; //!< Clock division
            uint32_t            :22U;
        }B;
    } CR1; //!< control register 1 (Offset: 0x00, reset: 0x00)

    union TIM2_CR2_union
    {
        uint32_t R;
        struct TIM2_CR2_B_struct
        {
            uint32_t            :3U;
            uint32_t CCDS       :1U; //!< Capture/compare DMA
                                     //!<               selection
            uint32_t MMS        :3U; //!< Master mode selection
            uint32_t TI1S       :1U; //!< TI1 selection
            uint32_t            :24U;
        }B;
    } CR2; //!< control register 2 (Offset: 0x04, reset: 0x00)

    union TIM2_SMCR_union
    {
        uint32_t R;
        struct TIM2_SMCR_B_struct
        {
            uint32_t SMS        :3U; //!< Slave mode selection
            uint32_t            :1U;
            uint32_t TS         :3U; //!< Trigger selection
            uint32_t MSM        :1U; //!< Master/Slave mode
            uint32_t ETF        :4U; //!< External trigger filter
            uint32_t ETPS       :2U; //!< External trigger prescaler
            uint32_t ECE        :1U; //!< External clock enable
            uint32_t ETP        :1U; //!< External trigger polarity
            uint32_t            :16U;
        }B;
    } SMCR; //!< slave mode control register (Offset: 0x08, reset: 0x00)

    union TIM2_DIER_union
    {
        uint32_t R;
        struct TIM2_DIER_B_struct
        {
            uint32_t UIE        :1U; //!< Update interrupt enable
            uint32_t CC1IE      :1U; //!< Capture/Compare 1 interrupt
                                     //!<               enable
            uint32_t CC2IE      :1U; //!< Capture/Compare 2 interrupt
                                     //!<               enable
            uint32_t CC3IE      :1U; //!< Capture/Compare 3 interrupt
                                     //!<               enable
            uint32_t CC4IE      :1U; //!< Capture/Compare 4 interrupt
                                     //!<               enable
            uint32_t            :1U;
            uint32_t TIE        :1U; //!< Trigger interrupt enable
            uint32_t            :1U;
            uint32_t UDE        :1U; //!< Update DMA request enable
            uint32_t CC1DE      :1U; //!< Capture/Compare 1 DMA request
                                     //!<               enable
            uint32_t CC2DE      :1U; //!< Capture/Compare 2 DMA request
                                     //!<               enable
            uint32_t CC3DE      :1U; //!< Capture/Compare 3 DMA request
                                     //!<               enable
            uint32_t CC4DE      :1U; //!< Capture/Compare 4 DMA request
                                     //!<               enable
            uint32_t            :1U;
            uint32_t TDE        :1U; //!< Trigger DMA request enable
            uint32_t            :17U;
        }B;
    } DIER; //!< DMA/Interrupt enable register (Offset: 0x0c, reset: 0x00)

    union TIM2_SR_union
    {
        uint32_t R;
        struct TIM2_SR_B_struct
        {
            uint32_t UIF        :1U; //!< Update interrupt flag
            uint32_t CC1IF      :1U; //!< Capture/compare 1 interrupt
                                     //!<               flag
            uint32_t CC2IF      :1U; //!< Capture/Compare 2 interrupt
                                     //!<               flag
            uint32_t CC3IF      :1U; //!< Capture/Compare 3 interrupt
                                     //!<               flag
            uint32_t CC4IF      :1U; //!< Capture/Compare 4 interrupt
                                     //!<               flag
            uint32_t            :1U;
            uint32_t TIF        :1U; //!< Trigger interrupt flag
            uint32_t            :2U;
            uint32_t CC1OF      :1U; //!< Capture/Compare 1 overcapture
                                     //!<               flag
            uint32_t CC2OF      :1U; //!< Capture/compare 2 overcapture
                                     //!<               flag
            uint32_t CC3OF      :1U; //!< Capture/Compare 3 overcapture
                                     //!<               flag
            uint32_t CC4OF      :1U; //!< Capture/Compare 4 overcapture
                                     //!<               flag
            uint32_t            :19U;
        }B;
    } SR; //!< status register (Offset: 0x10, reset: 0x00)

    union TIM2_EGR_union
    {
        uint32_t R;
        struct TIM2_EGR_B_struct
        {
            uint32_t UG         :1U; //!< Update generation
            uint32_t CC1G       :1U; //!< Capture/compare 1
                                     //!<               generation
            uint32_t CC2G       :1U; //!< Capture/compare 2
                                     //!<               generation
            uint32_t CC3G       :1U; //!< Capture/compare 3
                                     //!<               generation
            uint32_t CC4G       :1U; //!< Capture/compare 4
                                     //!<               generation
            uint32_t            :1U;
            uint32_t TG         :1U; //!< Trigger generation
            uint32_t            :25U;
        }B;
    } EGR; //!< event generation register (Offset: 0x14, reset: 0x00)

    union TIM2_CCMR1_Output_union
    {
        uint32_t R;
        struct TIM2_CCMR1_Output_struct
        {
            uint32_t CC1S       :2U; //!< CC1S
            uint32_t OC1FE      :1U; //!< OC1FE
            uint32_t OC1PE      :1U; //!< OC1PE
            uint32_t OC1M       :3U; //!< OC1M
            uint32_t OC1CE      :1U; //!< OC1CE
            uint32_t CC2S       :2U; //!< CC2S
            uint32_t OC2FE      :1U; //!< OC2FE
            uint32_t OC2PE      :1U; //!< OC2PE
            uint32_t OC2M       :3U; //!< OC2M
            uint32_t OC2CE      :1U; //!< OC2CE
            uint32_t            :16U;
        }CCMR1_Output;

        struct TIM2_CCMR1_Input_struct
        {
            uint32_t CC1S       :2U; //!< Capture/Compare 1
                                     //!<               selection
            uint32_t ICPCS      :2U; //!< Input capture 1 prescaler
            uint32_t IC1F       :4U; //!< Input capture 1 filter
            uint32_t CC2S       :2U; //!< Capture/Compare 2
                                     //!<               selection
            uint32_t IC2PCS     :2U; //!< Input capture 2 prescaler
            uint32_t IC2F       :4U; //!< Input capture 2 filter
            uint32_t            :16U;
        }CCMR1_Input;
    } CCMR1; //!< capture/compare mode register 1 (input (Offset: 0x18, reset: 0x00)

    union TIM2_CCMR2_Output_union
    {
        uint32_t R;
        struct TIM2_CCMR2_Output_struct
        {
            uint32_t CC3S       :2U; //!< CC3S
            uint32_t OC3FE      :1U; //!< OC3FE
            uint32_t OC3PE      :1U; //!< OC3PE
            uint32_t OC3M       :3U; //!< OC3M
            uint32_t OC3CE      :1U; //!< OC3CE
            uint32_t CC4S       :2U; //!< CC4S
            uint32_t OC4FE      :1U; //!< OC4FE
            uint32_t OC4PE      :1U; //!< OC4PE
            uint32_t OC4M       :3U; //!< OC4M
            uint32_t OC4CE      :1U; //!< OC4CE
            uint32_t            :16U;
        }CCMR2_Output;

        struct TIM2_CCMR2_Input_struct
        {
            uint32_t CC3S       :2U; //!< Capture/compare 3
                                     //!<               selection
            uint32_t IC3PSC     :2U; //!< Input capture 3 prescaler
            uint32_t IC3F       :4U; //!< Input capture 3 filter
            uint32_t CC4S       :2U; //!< Capture/Compare 4
                                     //!<               selection
            uint32_t IC4PSC     :2U; //!< Input capture 4 prescaler
            uint32_t IC4F       :4U; //!< Input capture 4 filter
            uint32_t            :16U;
        }CCMR2_Input;
    } CCMR2; //!< capture/compare mode register 2 (input (Offset: 0x1c, reset: 0x00)

    union TIM2_CCER_union
    {
        uint32_t R;
        struct TIM2_CCER_B_struct
        {
            uint32_t CC1E       :1U; //!< Capture/Compare 1 output
                                     //!<               enable
            uint32_t CC1P       :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC1NP      :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t CC2E       :1U; //!< Capture/Compare 2 output
                                     //!<               enable
            uint32_t CC2P       :1U; //!< Capture/Compare 2 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC2NP      :1U; //!< Capture/Compare 2 output
                                     //!<               Polarity
            uint32_t CC3E       :1U; //!< Capture/Compare 3 output
                                     //!<               enable
            uint32_t CC3P       :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC3NP      :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t CC4E       :1U; //!< Capture/Compare 4 output
                                     //!<               enable
            uint32_t CC4P       :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC4NP      :1U; //!< Capture/Compare 4 output
                                     //!<               Polarity
            uint32_t            :16U;
        }B;
    } CCER; //!< capture/compare enable (Offset: 0x20, reset: 0x00)

    union TIM2_CNT_union
    {
        uint32_t R;
        struct TIM2_CNT_B_struct
        {
            uint32_t CNT_L      :16U; //!< Low counter value
            uint32_t CNT_H      :16U; //!< High counter value
        }B;
    } CNT; //!< counter (Offset: 0x24, reset: 0x00)

    union TIM2_PSC_union
    {
        uint32_t R;
        struct TIM2_PSC_B_struct
        {
            uint32_t PSC        :16U; //!< Prescaler value
            uint32_t            :16U;
        }B;
    } PSC; //!< prescaler (Offset: 0x28, reset: 0x00)

    union TIM2_ARR_union
    {
        uint32_t R;
        struct TIM2_ARR_B_struct
        {
            uint32_t ARR_L      :16U; //!< Low Auto-reload value
            uint32_t ARR_H      :16U; //!< High Auto-reload value
        }B;
    } ARR; //!< auto-reload register (Offset: 0x2c, reset: 0x00)

    uint32_t TIM2_Reserved0[1U];

    union TIM2_CCR1_union
    {
        uint32_t R;
        struct TIM2_CCR1_B_struct
        {
            uint32_t CCR1_L     :16U; //!< Low Capture/Compare 1
                                     //!<               value
            uint32_t CCR1_H     :16U; //!< High Capture/Compare 1
                                     //!<               value
        }B;
    } CCR1; //!< capture/compare register 1 (Offset: 0x34, reset: 0x00)

    union TIM2_CCR2_union
    {
        uint32_t R;
        struct TIM2_CCR2_B_struct
        {
            uint32_t CCR2_L     :16U; //!< Low Capture/Compare 2
                                     //!<               value
            uint32_t CCR2_H     :16U; //!< High Capture/Compare 2
                                     //!<               value
        }B;
    } CCR2; //!< capture/compare register 2 (Offset: 0x38, reset: 0x00)

    union TIM2_CCR3_union
    {
        uint32_t R;
        struct TIM2_CCR3_B_struct
        {
            uint32_t CCR3_L     :16U; //!< Low Capture/Compare value
            uint32_t CCR3_H     :16U; //!< High Capture/Compare value
        }B;
    } CCR3; //!< capture/compare register 3 (Offset: 0x3c, reset: 0x00)

    union TIM2_CCR4_union
    {
        uint32_t R;
        struct TIM2_CCR4_B_struct
        {
            uint32_t CCR4_L     :16U; //!< Low Capture/Compare value
            uint32_t CCR4_H     :16U; //!< High Capture/Compare value
        }B;
    } CCR4; //!< capture/compare register 4 (Offset: 0x40, reset: 0x00)

    uint32_t TIM2_Reserved1[1U];

    union TIM2_DCR_union
    {
        uint32_t R;
        struct TIM2_DCR_B_struct
        {
            uint32_t DBA        :5U; //!< DMA base address
            uint32_t            :3U;
            uint32_t DBL        :5U; //!< DMA burst length
            uint32_t            :19U;
        }B;
    } DCR; //!< DMA control register (Offset: 0x48, reset: 0x00)

    union TIM2_DMAR_union
    {
        uint32_t R;
        struct TIM2_DMAR_B_struct
        {
            uint32_t DMAB       :16U; //!< DMA register for burst
                                     //!<               accesses
            uint32_t            :16U;
        }B;
    } DMAR; //!< DMA address for full transfer (Offset: 0x4c, reset: 0x00)

    union TIM2_OR_union
    {
        uint32_t R;
        struct TIM2_OR_B_struct
        {
            uint32_t            :10U;
            uint32_t ITR1_RMP   :2U; //!< Timer Input 4 remap
            uint32_t            :20U;
        }B;
    } OR; //!< TIM5 option register (Offset: 0x50, reset: 0x00)
} TIM2_t;



/**************************************************************************************************/
/*!                                     TIMx module memory map                                    */
/**************************************************************************************************/
typedef volatile struct TIMx_struct
{
    union TIMx_CR1_union
    {
        uint32_t R;
        struct TIMx_CR1_B_struct
        {
            uint32_t CEN        :1U; //!< Counter enable
            uint32_t UDIS       :1U; //!< Update disable
            uint32_t URS        :1U; //!< Update request source
            uint32_t OPM        :1U; //!< One-pulse mode
            uint32_t DIR        :1U; //!< Direction
            uint32_t CMS        :2U; //!< Center-aligned mode
                                     //!<               selection
            uint32_t ARPE       :1U; //!< Auto-reload preload enable
            uint32_t CKD        :2U; //!< Clock division
            uint32_t            :22U;
        }B;
    } CR1; //!< control register 1 (Offset: 0x00, reset: 0x00)

    union TIMx_CR2_union
    {
        uint32_t R;
        struct TIMx_CR2_B_struct
        {
            uint32_t            :3U;
            uint32_t CCDS       :1U; //!< Capture/compare DMA
                                     //!<               selection
            uint32_t MMS        :3U; //!< Master mode selection
            uint32_t TI1S       :1U; //!< TI1 selection
            uint32_t            :24U;
        }B;
    } CR2; //!< control register 2 (Offset: 0x04, reset: 0x00)

    union TIMx_SMCR_union
    {
        uint32_t R;
        struct TIMx_SMCR_B_struct
        {
            uint32_t SMS        :3U; //!< Slave mode selection
            uint32_t            :1U;
            uint32_t TS         :3U; //!< Trigger selection
            uint32_t MSM        :1U; //!< Master/Slave mode
            uint32_t ETF        :4U; //!< External trigger filter
            uint32_t ETPS       :2U; //!< External trigger prescaler
            uint32_t ECE        :1U; //!< External clock enable
            uint32_t ETP        :1U; //!< External trigger polarity
            uint32_t            :16U;
        }B;
    } SMCR; //!< slave mode control register (Offset: 0x08, reset: 0x00)

    union TIMx_DIER_union
    {
        uint32_t R;
        struct TIMx_DIER_B_struct
        {
            uint32_t UIE        :1U; //!< Update interrupt enable
            uint32_t CC1IE      :1U; //!< Capture/Compare 1 interrupt
                                     //!<               enable
            uint32_t CC2IE      :1U; //!< Capture/Compare 2 interrupt
                                     //!<               enable
            uint32_t CC3IE      :1U; //!< Capture/Compare 3 interrupt
                                     //!<               enable
            uint32_t CC4IE      :1U; //!< Capture/Compare 4 interrupt
                                     //!<               enable
            uint32_t            :1U;
            uint32_t TIE        :1U; //!< Trigger interrupt enable
            uint32_t            :1U;
            uint32_t UDE        :1U; //!< Update DMA request enable
            uint32_t CC1DE      :1U; //!< Capture/Compare 1 DMA request
                                     //!<               enable
            uint32_t CC2DE      :1U; //!< Capture/Compare 2 DMA request
                                     //!<               enable
            uint32_t CC3DE      :1U; //!< Capture/Compare 3 DMA request
                                     //!<               enable
            uint32_t CC4DE      :1U; //!< Capture/Compare 4 DMA request
                                     //!<               enable
            uint32_t            :1U;
            uint32_t TDE        :1U; //!< Trigger DMA request enable
            uint32_t            :17U;
        }B;
    } DIER; //!< DMA/Interrupt enable register (Offset: 0x0c, reset: 0x00)

    union TIMx_SR_union
    {
        uint32_t R;
        struct TIMx_SR_B_struct
        {
            uint32_t UIF        :1U; //!< Update interrupt flag
            uint32_t CC1IF      :1U; //!< Capture/compare 1 interrupt
                                     //!<               flag
            uint32_t CC2IF      :1U; //!< Capture/Compare 2 interrupt
                                     //!<               flag
            uint32_t CC3IF      :1U; //!< Capture/Compare 3 interrupt
                                     //!<               flag
            uint32_t CC4IF      :1U; //!< Capture/Compare 4 interrupt
                                     //!<               flag
            uint32_t            :1U;
            uint32_t TIF        :1U; //!< Trigger interrupt flag
            uint32_t            :2U;
            uint32_t CC1OF      :1U; //!< Capture/Compare 1 overcapture
                                     //!<               flag
            uint32_t CC2OF      :1U; //!< Capture/compare 2 overcapture
                                     //!<               flag
            uint32_t CC3OF      :1U; //!< Capture/Compare 3 overcapture
                                     //!<               flag
            uint32_t CC4OF      :1U; //!< Capture/Compare 4 overcapture
                                     //!<               flag
            uint32_t            :19U;
        }B;
    } SR; //!< status register (Offset: 0x10, reset: 0x00)

    union TIMx_EGR_union
    {
        uint32_t R;
        struct TIMx_EGR_B_struct
        {
            uint32_t UG         :1U; //!< Update generation
            uint32_t CC1G       :1U; //!< Capture/compare 1
                                     //!<               generation
            uint32_t CC2G       :1U; //!< Capture/compare 2
                                     //!<               generation
            uint32_t CC3G       :1U; //!< Capture/compare 3
                                     //!<               generation
            uint32_t CC4G       :1U; //!< Capture/compare 4
                                     //!<               generation
            uint32_t            :1U;
            uint32_t TG         :1U; //!< Trigger generation
            uint32_t            :25U;
        }B;
    } EGR; //!< event generation register (Offset: 0x14, reset: 0x00)

    union TIMx_CCMR1_Output_union
    {
        uint32_t R;
        struct TIMx_CCMR1_Output_struct
        {
            uint32_t CC1S       :2U; //!< CC1S
            uint32_t OC1FE      :1U; //!< OC1FE
            uint32_t OC1PE      :1U; //!< OC1PE
            uint32_t OC1M       :3U; //!< OC1M
            uint32_t OC1CE      :1U; //!< OC1CE
            uint32_t CC2S       :2U; //!< CC2S
            uint32_t OC2FE      :1U; //!< OC2FE
            uint32_t OC2PE      :1U; //!< OC2PE
            uint32_t OC2M       :3U; //!< OC2M
            uint32_t OC2CE      :1U; //!< OC2CE
            uint32_t            :16U;
        }CCMR1_Output;

        struct TIMx_CCMR1_Input_struct
        {
            uint32_t CC1S       :2U; //!< Capture/Compare 1
                                     //!<               selection
            uint32_t ICPCS      :2U; //!< Input capture 1 prescaler
            uint32_t IC1F       :4U; //!< Input capture 1 filter
            uint32_t CC2S       :2U; //!< Capture/Compare 2
                                     //!<               selection
            uint32_t IC2PCS     :2U; //!< Input capture 2 prescaler
            uint32_t IC2F       :4U; //!< Input capture 2 filter
            uint32_t            :16U;
        }CCMR1_Input;
    } CCMR1; //!< capture/compare mode register 1 (input (Offset: 0x18, reset: 0x00)

    union TIMx_CCMR2_Output_union
    {
        uint32_t R;
        struct TIMx_CCMR2_Output_struct
        {
            uint32_t CC3S       :2U; //!< CC3S
            uint32_t OC3FE      :1U; //!< OC3FE
            uint32_t OC3PE      :1U; //!< OC3PE
            uint32_t OC3M       :3U; //!< OC3M
            uint32_t OC3CE      :1U; //!< OC3CE
            uint32_t CC4S       :2U; //!< CC4S
            uint32_t OC4FE      :1U; //!< OC4FE
            uint32_t OC4PE      :1U; //!< OC4PE
            uint32_t OC4M       :3U; //!< OC4M
            uint32_t OC4CE      :1U; //!< OC4CE
            uint32_t            :16U;
        }CCMR2_Output;

        struct TIMx_CCMR2_Input_struct
        {
            uint32_t CC3S       :2U; //!< Capture/compare 3
                                     //!<               selection
            uint32_t IC3PSC     :2U; //!< Input capture 3 prescaler
            uint32_t IC3F       :4U; //!< Input capture 3 filter
            uint32_t CC4S       :2U; //!< Capture/Compare 4
                                     //!<               selection
            uint32_t IC4PSC     :2U; //!< Input capture 4 prescaler
            uint32_t IC4F       :4U; //!< Input capture 4 filter
            uint32_t            :16U;
        }CCMR2_Input;
    } CCMR2; //!< capture/compare mode register 2 (input (Offset: 0x1c, reset: 0x00)

    union TIMx_CCER_union
    {
        uint32_t R;
        struct TIMx_CCER_B_struct
        {
            uint32_t CC1E       :1U; //!< Capture/Compare 1 output
                                     //!<               enable
            uint32_t CC1P       :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC1NP      :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t CC2E       :1U; //!< Capture/Compare 2 output
                                     //!<               enable
            uint32_t CC2P       :1U; //!< Capture/Compare 2 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC2NP      :1U; //!< Capture/Compare 2 output
                                     //!<               Polarity
            uint32_t CC3E       :1U; //!< Capture/Compare 3 output
                                     //!<               enable
            uint32_t CC3P       :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC3NP      :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t CC4E       :1U; //!< Capture/Compare 4 output
                                     //!<               enable
            uint32_t CC4P       :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC4NP      :1U; //!< Capture/Compare 4 output
                                     //!<               Polarity
            uint32_t            :16U;
        }B;
    } CCER; //!< capture/compare enable (Offset: 0x20, reset: 0x00)

    union TIMx_CNT_union
    {
        uint32_t R;
        struct TIMx_CNT_B_struct
        {
            uint32_t CNT_L      :16U; //!< Low counter value
            uint32_t CNT_H      :16U; //!< High counter value
        }B;
    } CNT; //!< counter (Offset: 0x24, reset: 0x00)

    union TIMx_PSC_union
    {
        uint32_t R;
        struct TIMx_PSC_B_struct
        {
            uint32_t PSC        :16U; //!< Prescaler value
            uint32_t            :16U;
        }B;
    } PSC; //!< prescaler (Offset: 0x28, reset: 0x00)

    union TIMx_ARR_union
    {
        uint32_t R;
        struct TIMx_ARR_B_struct
        {
            uint32_t ARR_L      :16U; //!< Low Auto-reload value
            uint32_t ARR_H      :16U; //!< High Auto-reload value
        }B;
    } ARR; //!< auto-reload register (Offset: 0x2c, reset: 0x00)

    uint32_t TIMx_Reserved0[1U];

    union TIMx_CCR1_union
    {
        uint32_t R;
        struct TIMx_CCR1_B_struct
        {
            uint32_t CCR1_L     :16U; //!< Low Capture/Compare 1
                                     //!<               value
            uint32_t CCR1_H     :16U; //!< High Capture/Compare 1
                                     //!<               value
        }B;
    } CCR1; //!< capture/compare register 1 (Offset: 0x34, reset: 0x00)

    union TIMx_CCR2_union
    {
        uint32_t R;
        struct TIMx_CCR2_B_struct
        {
            uint32_t CCR2_L     :16U; //!< Low Capture/Compare 2
                                     //!<               value
            uint32_t CCR2_H     :16U; //!< High Capture/Compare 2
                                     //!<               value
        }B;
    } CCR2; //!< capture/compare register 2 (Offset: 0x38, reset: 0x00)

    union TIMx_CCR3_union
    {
        uint32_t R;
        struct TIMx_CCR3_B_struct
        {
            uint32_t CCR3_L     :16U; //!< Low Capture/Compare value
            uint32_t CCR3_H     :16U; //!< High Capture/Compare value
        }B;
    } CCR3; //!< capture/compare register 3 (Offset: 0x3c, reset: 0x00)

    union TIMx_CCR4_union
    {
        uint32_t R;
        struct TIMx_CCR4_B_struct
        {
            uint32_t CCR4_L     :16U; //!< Low Capture/Compare value
            uint32_t CCR4_H     :16U; //!< High Capture/Compare value
        }B;
    } CCR4; //!< capture/compare register 4 (Offset: 0x40, reset: 0x00)

    uint32_t TIMx_Reserved1[1U];

    union TIMx_DCR_union
    {
        uint32_t R;
        struct TIMx_DCR_B_struct
        {
            uint32_t DBA        :5U; //!< DMA base address
            uint32_t            :3U;
            uint32_t DBL        :5U; //!< DMA burst length
            uint32_t            :19U;
        }B;
    } DCR; //!< DMA control register (Offset: 0x48, reset: 0x00)

    union TIMx_DMAR_union
    {
        uint32_t R;
        struct TIMx_DMAR_B_struct
        {
            uint32_t DMAB       :16U; //!< DMA register for burst
                                     //!<               accesses
            uint32_t            :16U;
        }B;
    } DMAR; //!< DMA address for full transfer (Offset: 0x4c, reset: 0x00)
} TIMx_t;



/**************************************************************************************************/
/*!                                     TIM5 module memory map                                    */
/**************************************************************************************************/
typedef volatile struct TIM5_struct
{
    union TIM5_CR1_union
    {
        uint32_t R;
        struct TIM5_CR1_B_struct
        {
            uint32_t CEN        :1U; //!< Counter enable
            uint32_t UDIS       :1U; //!< Update disable
            uint32_t URS        :1U; //!< Update request source
            uint32_t OPM        :1U; //!< One-pulse mode
            uint32_t DIR        :1U; //!< Direction
            uint32_t CMS        :2U; //!< Center-aligned mode
                                     //!<               selection
            uint32_t ARPE       :1U; //!< Auto-reload preload enable
            uint32_t CKD        :2U; //!< Clock division
            uint32_t            :22U;
        }B;
    } CR1; //!< control register 1 (Offset: 0x00, reset: 0x00)

    union TIM5_CR2_union
    {
        uint32_t R;
        struct TIM5_CR2_B_struct
        {
            uint32_t            :3U;
            uint32_t CCDS       :1U; //!< Capture/compare DMA
                                     //!<               selection
            uint32_t MMS        :3U; //!< Master mode selection
            uint32_t TI1S       :1U; //!< TI1 selection
            uint32_t            :24U;
        }B;
    } CR2; //!< control register 2 (Offset: 0x04, reset: 0x00)

    union TIM5_SMCR_union
    {
        uint32_t R;
        struct TIM5_SMCR_B_struct
        {
            uint32_t SMS        :3U; //!< Slave mode selection
            uint32_t            :1U;
            uint32_t TS         :3U; //!< Trigger selection
            uint32_t MSM        :1U; //!< Master/Slave mode
            uint32_t ETF        :4U; //!< External trigger filter
            uint32_t ETPS       :2U; //!< External trigger prescaler
            uint32_t ECE        :1U; //!< External clock enable
            uint32_t ETP        :1U; //!< External trigger polarity
            uint32_t            :16U;
        }B;
    } SMCR; //!< slave mode control register (Offset: 0x08, reset: 0x00)

    union TIM5_DIER_union
    {
        uint32_t R;
        struct TIM5_DIER_B_struct
        {
            uint32_t UIE        :1U; //!< Update interrupt enable
            uint32_t CC1IE      :1U; //!< Capture/Compare 1 interrupt
                                     //!<               enable
            uint32_t CC2IE      :1U; //!< Capture/Compare 2 interrupt
                                     //!<               enable
            uint32_t CC3IE      :1U; //!< Capture/Compare 3 interrupt
                                     //!<               enable
            uint32_t CC4IE      :1U; //!< Capture/Compare 4 interrupt
                                     //!<               enable
            uint32_t            :1U;
            uint32_t TIE        :1U; //!< Trigger interrupt enable
            uint32_t            :1U;
            uint32_t UDE        :1U; //!< Update DMA request enable
            uint32_t CC1DE      :1U; //!< Capture/Compare 1 DMA request
                                     //!<               enable
            uint32_t CC2DE      :1U; //!< Capture/Compare 2 DMA request
                                     //!<               enable
            uint32_t CC3DE      :1U; //!< Capture/Compare 3 DMA request
                                     //!<               enable
            uint32_t CC4DE      :1U; //!< Capture/Compare 4 DMA request
                                     //!<               enable
            uint32_t            :1U;
            uint32_t TDE        :1U; //!< Trigger DMA request enable
            uint32_t            :17U;
        }B;
    } DIER; //!< DMA/Interrupt enable register (Offset: 0x0c, reset: 0x00)

    union TIM5_SR_union
    {
        uint32_t R;
        struct TIM5_SR_B_struct
        {
            uint32_t UIF        :1U; //!< Update interrupt flag
            uint32_t CC1IF      :1U; //!< Capture/compare 1 interrupt
                                     //!<               flag
            uint32_t CC2IF      :1U; //!< Capture/Compare 2 interrupt
                                     //!<               flag
            uint32_t CC3IF      :1U; //!< Capture/Compare 3 interrupt
                                     //!<               flag
            uint32_t CC4IF      :1U; //!< Capture/Compare 4 interrupt
                                     //!<               flag
            uint32_t            :1U;
            uint32_t TIF        :1U; //!< Trigger interrupt flag
            uint32_t            :2U;
            uint32_t CC1OF      :1U; //!< Capture/Compare 1 overcapture
                                     //!<               flag
            uint32_t CC2OF      :1U; //!< Capture/compare 2 overcapture
                                     //!<               flag
            uint32_t CC3OF      :1U; //!< Capture/Compare 3 overcapture
                                     //!<               flag
            uint32_t CC4OF      :1U; //!< Capture/Compare 4 overcapture
                                     //!<               flag
            uint32_t            :19U;
        }B;
    } SR; //!< status register (Offset: 0x10, reset: 0x00)

    union TIM5_EGR_union
    {
        uint32_t R;
        struct TIM5_EGR_B_struct
        {
            uint32_t UG         :1U; //!< Update generation
            uint32_t CC1G       :1U; //!< Capture/compare 1
                                     //!<               generation
            uint32_t CC2G       :1U; //!< Capture/compare 2
                                     //!<               generation
            uint32_t CC3G       :1U; //!< Capture/compare 3
                                     //!<               generation
            uint32_t CC4G       :1U; //!< Capture/compare 4
                                     //!<               generation
            uint32_t            :1U;
            uint32_t TG         :1U; //!< Trigger generation
            uint32_t            :25U;
        }B;
    } EGR; //!< event generation register (Offset: 0x14, reset: 0x00)

    union TIM5_CCMR1_Output_union
    {
        uint32_t R;
        struct TIM5_CCMR1_Output_struct
        {
            uint32_t CC1S       :2U; //!< CC1S
            uint32_t OC1FE      :1U; //!< OC1FE
            uint32_t OC1PE      :1U; //!< OC1PE
            uint32_t OC1M       :3U; //!< OC1M
            uint32_t OC1CE      :1U; //!< OC1CE
            uint32_t CC2S       :2U; //!< CC2S
            uint32_t OC2FE      :1U; //!< OC2FE
            uint32_t OC2PE      :1U; //!< OC2PE
            uint32_t OC2M       :3U; //!< OC2M
            uint32_t OC2CE      :1U; //!< OC2CE
            uint32_t            :16U;
        }CCMR1_Output;

        struct TIM5_CCMR1_Input_struct
        {
            uint32_t CC1S       :2U; //!< Capture/Compare 1
                                     //!<               selection
            uint32_t ICPCS      :2U; //!< Input capture 1 prescaler
            uint32_t IC1F       :4U; //!< Input capture 1 filter
            uint32_t CC2S       :2U; //!< Capture/Compare 2
                                     //!<               selection
            uint32_t IC2PCS     :2U; //!< Input capture 2 prescaler
            uint32_t IC2F       :4U; //!< Input capture 2 filter
            uint32_t            :16U;
        }CCMR1_Input;
    } CCMR1; //!< capture/compare mode register 1 (input (Offset: 0x18, reset: 0x00)

    union TIM5_CCMR2_Output_union
    {
        uint32_t R;
        struct TIM5_CCMR2_Output_struct
        {
            uint32_t CC3S       :2U; //!< CC3S
            uint32_t OC3FE      :1U; //!< OC3FE
            uint32_t OC3PE      :1U; //!< OC3PE
            uint32_t OC3M       :3U; //!< OC3M
            uint32_t OC3CE      :1U; //!< OC3CE
            uint32_t CC4S       :2U; //!< CC4S
            uint32_t OC4FE      :1U; //!< OC4FE
            uint32_t OC4PE      :1U; //!< OC4PE
            uint32_t OC4M       :3U; //!< OC4M
            uint32_t OC4CE      :1U; //!< OC4CE
            uint32_t            :16U;
        }CCMR2_Output;

        struct TIM5_CCMR2_Input_struct
        {
            uint32_t CC3S       :2U; //!< Capture/compare 3
                                     //!<               selection
            uint32_t IC3PSC     :2U; //!< Input capture 3 prescaler
            uint32_t IC3F       :4U; //!< Input capture 3 filter
            uint32_t CC4S       :2U; //!< Capture/Compare 4
                                     //!<               selection
            uint32_t IC4PSC     :2U; //!< Input capture 4 prescaler
            uint32_t IC4F       :4U; //!< Input capture 4 filter
            uint32_t            :16U;
        }CCMR2_Input;
    } CCMR2; //!< capture/compare mode register 2 (input (Offset: 0x1c, reset: 0x00)

    union TIM5_CCER_union
    {
        uint32_t R;
        struct TIM5_CCER_B_struct
        {
            uint32_t CC1E       :1U; //!< Capture/Compare 1 output
                                     //!<               enable
            uint32_t CC1P       :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC1NP      :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t CC2E       :1U; //!< Capture/Compare 2 output
                                     //!<               enable
            uint32_t CC2P       :1U; //!< Capture/Compare 2 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC2NP      :1U; //!< Capture/Compare 2 output
                                     //!<               Polarity
            uint32_t CC3E       :1U; //!< Capture/Compare 3 output
                                     //!<               enable
            uint32_t CC3P       :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC3NP      :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t CC4E       :1U; //!< Capture/Compare 4 output
                                     //!<               enable
            uint32_t CC4P       :1U; //!< Capture/Compare 3 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC4NP      :1U; //!< Capture/Compare 4 output
                                     //!<               Polarity
            uint32_t            :16U;
        }B;
    } CCER; //!< capture/compare enable (Offset: 0x20, reset: 0x00)

    union TIM5_CNT_union
    {
        uint32_t R;
        struct TIM5_CNT_B_struct
        {
            uint32_t CNT_L      :16U; //!< Low counter value
            uint32_t CNT_H      :16U; //!< High counter value
        }B;
    } CNT; //!< counter (Offset: 0x24, reset: 0x00)

    union TIM5_PSC_union
    {
        uint32_t R;
        struct TIM5_PSC_B_struct
        {
            uint32_t PSC        :16U; //!< Prescaler value
            uint32_t            :16U;
        }B;
    } PSC; //!< prescaler (Offset: 0x28, reset: 0x00)

    union TIM5_ARR_union
    {
        uint32_t R;
        struct TIM5_ARR_B_struct
        {
            uint32_t ARR_L      :16U; //!< Low Auto-reload value
            uint32_t ARR_H      :16U; //!< High Auto-reload value
        }B;
    } ARR; //!< auto-reload register (Offset: 0x2c, reset: 0x00)

    uint32_t TIM5_Reserved0[1U];

    union TIM5_CCR1_union
    {
        uint32_t R;
        struct TIM5_CCR1_B_struct
        {
            uint32_t CCR1_L     :16U; //!< Low Capture/Compare 1
                                     //!<               value
            uint32_t CCR1_H     :16U; //!< High Capture/Compare 1
                                     //!<               value
        }B;
    } CCR1; //!< capture/compare register 1 (Offset: 0x34, reset: 0x00)

    union TIM5_CCR2_union
    {
        uint32_t R;
        struct TIM5_CCR2_B_struct
        {
            uint32_t CCR2_L     :16U; //!< Low Capture/Compare 2
                                     //!<               value
            uint32_t CCR2_H     :16U; //!< High Capture/Compare 2
                                     //!<               value
        }B;
    } CCR2; //!< capture/compare register 2 (Offset: 0x38, reset: 0x00)

    union TIM5_CCR3_union
    {
        uint32_t R;
        struct TIM5_CCR3_B_struct
        {
            uint32_t CCR3_L     :16U; //!< Low Capture/Compare value
            uint32_t CCR3_H     :16U; //!< High Capture/Compare value
        }B;
    } CCR3; //!< capture/compare register 3 (Offset: 0x3c, reset: 0x00)

    union TIM5_CCR4_union
    {
        uint32_t R;
        struct TIM5_CCR4_B_struct
        {
            uint32_t CCR4_L     :16U; //!< Low Capture/Compare value
            uint32_t CCR4_H     :16U; //!< High Capture/Compare value
        }B;
    } CCR4; //!< capture/compare register 4 (Offset: 0x40, reset: 0x00)

    uint32_t TIM5_Reserved1[1U];

    union TIM5_DCR_union
    {
        uint32_t R;
        struct TIM5_DCR_B_struct
        {
            uint32_t DBA        :5U; //!< DMA base address
            uint32_t            :3U;
            uint32_t DBL        :5U; //!< DMA burst length
            uint32_t            :19U;
        }B;
    } DCR; //!< DMA control register (Offset: 0x48, reset: 0x00)

    union TIM5_DMAR_union
    {
        uint32_t R;
        struct TIM5_DMAR_B_struct
        {
            uint32_t DMAB       :16U; //!< DMA register for burst
                                     //!<               accesses
            uint32_t            :16U;
        }B;
    } DMAR; //!< DMA address for full transfer (Offset: 0x4c, reset: 0x00)

    union TIM5_OR_union
    {
        uint32_t R;
        struct TIM5_OR_B_struct
        {
            uint32_t            :6U;
            uint32_t IT4_RMP    :2U; //!< Timer Input 4 remap
            uint32_t            :24U;
        }B;
    } OR; //!< TIM5 option register (Offset: 0x50, reset: 0x00)
} TIM5_t;



/**************************************************************************************************/
/*!                                     TIM9 module memory map                                    */
/**************************************************************************************************/
typedef volatile struct TIM9_struct
{
    union TIM9_CR1_union
    {
        uint32_t R;
        struct TIM9_CR1_B_struct
        {
            uint32_t CEN        :1U; //!< Counter enable
            uint32_t UDIS       :1U; //!< Update disable
            uint32_t URS        :1U; //!< Update request source
            uint32_t OPM        :1U; //!< One-pulse mode
            uint32_t            :3U;
            uint32_t ARPE       :1U; //!< Auto-reload preload enable
            uint32_t CKD        :2U; //!< Clock division
            uint32_t            :22U;
        }B;
    } CR1; //!< control register 1 (Offset: 0x00, reset: 0x00)

    union TIM9_CR2_union
    {
        uint32_t R;
        struct TIM9_CR2_B_struct
        {
            uint32_t            :4U;
            uint32_t MMS        :3U; //!< Master mode selection
            uint32_t            :25U;
        }B;
    } CR2; //!< control register 2 (Offset: 0x04, reset: 0x00)

    union TIM9_SMCR_union
    {
        uint32_t R;
        struct TIM9_SMCR_B_struct
        {
            uint32_t SMS        :3U; //!< Slave mode selection
            uint32_t            :1U;
            uint32_t TS         :3U; //!< Trigger selection
            uint32_t MSM        :1U; //!< Master/Slave mode
            uint32_t            :24U;
        }B;
    } SMCR; //!< slave mode control register (Offset: 0x08, reset: 0x00)

    union TIM9_DIER_union
    {
        uint32_t R;
        struct TIM9_DIER_B_struct
        {
            uint32_t UIE        :1U; //!< Update interrupt enable
            uint32_t CC1IE      :1U; //!< Capture/Compare 1 interrupt
                                     //!<               enable
            uint32_t CC2IE      :1U; //!< Capture/Compare 2 interrupt
                                     //!<               enable
            uint32_t            :3U;
            uint32_t TIE        :1U; //!< Trigger interrupt enable
            uint32_t            :25U;
        }B;
    } DIER; //!< DMA/Interrupt enable register (Offset: 0x0c, reset: 0x00)

    union TIM9_SR_union
    {
        uint32_t R;
        struct TIM9_SR_B_struct
        {
            uint32_t UIF        :1U; //!< Update interrupt flag
            uint32_t CC1IF      :1U; //!< Capture/compare 1 interrupt
                                     //!<               flag
            uint32_t CC2IF      :1U; //!< Capture/Compare 2 interrupt
                                     //!<               flag
            uint32_t            :3U;
            uint32_t TIF        :1U; //!< Trigger interrupt flag
            uint32_t            :2U;
            uint32_t CC1OF      :1U; //!< Capture/Compare 1 overcapture
                                     //!<               flag
            uint32_t CC2OF      :1U; //!< Capture/compare 2 overcapture
                                     //!<               flag
            uint32_t            :21U;
        }B;
    } SR; //!< status register (Offset: 0x10, reset: 0x00)

    union TIM9_EGR_union
    {
        uint32_t R;
        struct TIM9_EGR_B_struct
        {
            uint32_t UG         :1U; //!< Update generation
            uint32_t CC1G       :1U; //!< Capture/compare 1
                                     //!<               generation
            uint32_t CC2G       :1U; //!< Capture/compare 2
                                     //!<               generation
            uint32_t            :3U;
            uint32_t TG         :1U; //!< Trigger generation
            uint32_t            :25U;
        }B;
    } EGR; //!< event generation register (Offset: 0x14, reset: 0x00)

    union TIM9_CCMR1_Output_union
    {
        uint32_t R;
        struct TIM9_CCMR1_Output_struct
        {
            uint32_t CC1S       :2U; //!< Capture/Compare 1
                                     //!<               selection
            uint32_t OC1FE      :1U; //!< Output Compare 1 fast
                                     //!<               enable
            uint32_t OC1PE      :1U; //!< Output Compare 1 preload
                                     //!<               enable
            uint32_t OC1M       :3U; //!< Output Compare 1 mode
            uint32_t            :1U;
            uint32_t CC2S       :2U; //!< Capture/Compare 2
                                     //!<               selection
            uint32_t OC2FE      :1U; //!< Output Compare 2 fast
                                     //!<               enable
            uint32_t OC2PE      :1U; //!< Output Compare 2 preload
                                     //!<               enable
            uint32_t OC2M       :3U; //!< Output Compare 2 mode
            uint32_t            :17U;
        }CCMR1_Output;

        struct TIM9_CCMR1_Input_struct
        {
            uint32_t CC1S       :2U; //!< Capture/Compare 1
                                     //!<               selection
            uint32_t ICPCS      :2U; //!< Input capture 1 prescaler
            uint32_t IC1F       :3U; //!< Input capture 1 filter
            uint32_t            :1U;
            uint32_t CC2S       :2U; //!< Capture/Compare 2
                                     //!<               selection
            uint32_t IC2PCS     :2U; //!< Input capture 2 prescaler
            uint32_t IC2F       :3U; //!< Input capture 2 filter
            uint32_t            :17U;
        }CCMR1_Input;
    } CCMR1; //!< capture/compare mode register 1 (input (Offset: 0x18, reset: 0x00)

    uint32_t TIM9_Reserved0[1U];

    union TIM9_CCER_union
    {
        uint32_t R;
        struct TIM9_CCER_B_struct
        {
            uint32_t CC1E       :1U; //!< Capture/Compare 1 output
                                     //!<               enable
            uint32_t CC1P       :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC1NP      :1U; //!< Capture/Compare 1 output
                                     //!<               Polarity
            uint32_t CC2E       :1U; //!< Capture/Compare 2 output
                                     //!<               enable
            uint32_t CC2P       :1U; //!< Capture/Compare 2 output
                                     //!<               Polarity
            uint32_t            :1U;
            uint32_t CC2NP      :1U; //!< Capture/Compare 2 output
                                     //!<               Polarity
            uint32_t            :24U;
        }B;
    } CCER; //!< capture/compare enable (Offset: 0x20, reset: 0x00)

    union TIM9_CNT_union
    {
        uint32_t R;
        struct TIM9_CNT_B_struct
        {
            uint32_t CNT        :16U; //!< counter value
            uint32_t            :16U;
        }B;
    } CNT; //!< counter (Offset: 0x24, reset: 0x00)

    union TIM9_PSC_union
    {
        uint32_t R;
        struct TIM9_PSC_B_struct
        {
            uint32_t PSC        :16U; //!< Prescaler value
            uint32_t            :16U;
        }B;
    } PSC; //!< prescaler (Offset: 0x28, reset: 0x00)

    union TIM9_ARR_union
    {
        uint32_t R;
        struct TIM9_ARR_B_struct
        {
            uint32_t ARR        :16U; //!< Auto-reload value
            uint32_t            :16U;
        }B;
    } ARR; //!< auto-reload register (Offset: 0x2c, reset: 0x00)

    uint32_t TIM9_Reserved1[1U];

    union TIM9_CCR1_union
    {
        uint32_t R;
        struct TIM9_CCR1_B_struct
        {
            uint32_t CCR1       :16U; //!< Capture/Compare 1 value
            uint32_t            :16U;
        }B;
    } CCR1; //!< capture/compare register 1 (Offset: 0x34, reset: 0x00)

    union TIM9_CCR2_union
    {
        uint32_t R;
        struct TIM9_CCR2_B_struct
        {
            uint32_t CCR2       :16U; //!< Capture/Compare 2 value
            uint32_t            :16U;
        }B;
    } CCR2; //!< capture/compare register 2 (Offset: 0x38, reset: 0x00)
} TIM9_t;



/**************************************************************************************************/
/*!                                    USARTx module memory map                                   */
/**************************************************************************************************/
typedef volatile struct USARTx_struct
{
    union USARTx_SR_union
    {
        uint32_t R;
        struct USARTx_SR_B_struct
        {
            uint32_t PE         :1U; //!< Parity error
            uint32_t FE         :1U; //!< Framing error
            uint32_t NF         :1U; //!< Noise detected flag
            uint32_t ORE        :1U; //!< Overrun error
            uint32_t IDLE       :1U; //!< IDLE line detected
            uint32_t RXNE       :1U; //!< Read data register not
                                     //!<               empty
            uint32_t TC         :1U; //!< Transmission complete
            uint32_t TXE        :1U; //!< Transmit data register
                                     //!<               empty
            uint32_t LBD        :1U; //!< LIN break detection flag
            uint32_t CTS        :1U; //!< CTS flag
            uint32_t            :22U;
        }B;
    } SR; //!< Status register (Offset: 0x00, reset: 0xc00000)

    union USARTx_DR_union
    {
        uint32_t R;
        struct USARTx_DR_B_struct
        {
            uint32_t DR         :9U; //!< Data value
            uint32_t            :23U;
        }B;
    } DR; //!< Data register (Offset: 0x04, reset: 0x00)

    union USARTx_BRR_union
    {
        uint32_t R;
        struct USARTx_BRR_B_struct
        {
            uint32_t DIV_Fraction:4U; //!< fraction of USARTDIV
            uint32_t DIV_Mantissa:12U; //!< mantissa of USARTDIV
            uint32_t            :16U;
        }B;
    } BRR; //!< Baud rate register (Offset: 0x08, reset: 0x00)

    union USARTx_CR1_union
    {
        uint32_t R;
        struct USARTx_CR1_B_struct
        {
            uint32_t SBK        :1U; //!< Send break
            uint32_t RWU        :1U; //!< Receiver wakeup
            uint32_t RE         :1U; //!< Receiver enable
            uint32_t TE         :1U; //!< Transmitter enable
            uint32_t IDLEIE     :1U; //!< IDLE interrupt enable
            uint32_t RXNEIE     :1U; //!< RXNE interrupt enable
            uint32_t TCIE       :1U; //!< Transmission complete interrupt
                                     //!<               enable
            uint32_t TXEIE      :1U; //!< TXE interrupt enable
            uint32_t PEIE       :1U; //!< PE interrupt enable
            uint32_t PS         :1U; //!< Parity selection
            uint32_t PCE        :1U; //!< Parity control enable
            uint32_t WAKE       :1U; //!< Wakeup method
            uint32_t M          :1U; //!< Word length
            uint32_t UE         :1U; //!< USART enable
            uint32_t            :1U;
            uint32_t OVER8      :1U; //!< Oversampling mode
            uint32_t            :16U;
        }B;
    } CR1; //!< Control register 1 (Offset: 0x0c, reset: 0x00)

    union USARTx_CR2_union
    {
        uint32_t R;
        struct USARTx_CR2_B_struct
        {
            uint32_t ADD        :4U; //!< Address of the USART node
            uint32_t            :1U;
            uint32_t LBDL       :1U; //!< lin break detection length
            uint32_t LBDIE      :1U; //!< LIN break detection interrupt
                                     //!<               enable
            uint32_t            :1U;
            uint32_t LBCL       :1U; //!< Last bit clock pulse
            uint32_t CPHA       :1U; //!< Clock phase
            uint32_t CPOL       :1U; //!< Clock polarity
            uint32_t CLKEN      :1U; //!< Clock enable
            uint32_t STOP       :2U; //!< STOP bits
            uint32_t LINEN      :1U; //!< LIN mode enable
            uint32_t            :17U;
        }B;
    } CR2; //!< Control register 2 (Offset: 0x10, reset: 0x00)

    union USARTx_CR3_union
    {
        uint32_t R;
        struct USARTx_CR3_B_struct
        {
            uint32_t EIE        :1U; //!< Error interrupt enable
            uint32_t IREN       :1U; //!< IrDA mode enable
            uint32_t IRLP       :1U; //!< IrDA low-power
            uint32_t HDSEL      :1U; //!< Half-duplex selection
            uint32_t NACK       :1U; //!< Smartcard NACK enable
            uint32_t SCEN       :1U; //!< Smartcard mode enable
            uint32_t DMAR       :1U; //!< DMA enable receiver
            uint32_t DMAT       :1U; //!< DMA enable transmitter
            uint32_t RTSE       :1U; //!< RTS enable
            uint32_t CTSE       :1U; //!< CTS enable
            uint32_t CTSIE      :1U; //!< CTS interrupt enable
            uint32_t ONEBIT     :1U; //!< One sample bit method
                                     //!<               enable
            uint32_t            :20U;
        }B;
    } CR3; //!< Control register 3 (Offset: 0x14, reset: 0x00)

    union USARTx_GTPR_union
    {
        uint32_t R;
        struct USARTx_GTPR_B_struct
        {
            uint32_t PSC        :8U; //!< Prescaler value
            uint32_t GT         :8U; //!< Guard time value
            uint32_t            :16U;
        }B;
    } GTPR; //!< Guard time and prescaler (Offset: 0x18, reset: 0x00)
} USARTx_t;



/**************************************************************************************************/
/*!                                     WWDG module memory map                                    */
/**************************************************************************************************/
typedef volatile struct WWDG_struct
{
    union WWDG_CR_union
    {
        uint32_t R;
        struct WWDG_CR_B_struct
        {
            uint32_t T          :7U; //!< 7-bit counter (MSB to LSB)
            uint32_t WDGA       :1U; //!< Activation bit
            uint32_t            :24U;
        }B;
    } CR; //!< Control register (Offset: 0x00, reset: 0x7f)

    union WWDG_CFR_union
    {
        uint32_t R;
        struct WWDG_CFR_B_struct
        {
            uint32_t W          :7U; //!< 7-bit window value
            uint32_t WDGTB0     :1U; //!< Timer base
            uint32_t WDGTB1     :1U; //!< Timer base
            uint32_t EWI        :1U; //!< Early wakeup interrupt
            uint32_t            :22U;
        }B;
    } CFR; //!< Configuration register (Offset: 0x04, reset: 0x7f)

    union WWDG_SR_union
    {
        uint32_t R;
        struct WWDG_SR_B_struct
        {
            uint32_t EWIF       :1U; //!< Early wakeup interrupt
                                     //!<               flag
            uint32_t            :31U;
        }B;
    } SR; //!< Status register (Offset: 0x08, reset: 0x00)
} WWDG_t;



// ADC1
static ADC1_t* const ADC1          = ((ADC1_t*)     0x40012000UL);

// ADC_Common
static ADC_Common_t* const ADC_Common = ((ADC_Common_t*)0x40012300UL);

// CRC
static CRC_t* const CRC            = ((CRC_t*)      0x40023000UL);

// DBG
static DBG_t* const DBG            = ((DBG_t*)      0xe0042000UL);

// DMA1
static DMAx_t* const DMA1          = ((DMAx_t*)     0x40026000UL);

// DMA2
static DMAx_t* const DMA2          = ((DMAx_t*)     0x40026400UL);

// EXTI
static EXTI_t* const EXTI          = ((EXTI_t*)     0x40013c00UL);

// FLASH
static FLASH_t* const FLASH        = ((FLASH_t*)    0x40023c00UL);

// FPU
static FPU_t* const FPU            = ((FPU_t*)      0xe000ef34UL);

// FPU_CPACR
static FPU_CPACR_t* const FPU_CPACR = ((FPU_CPACR_t*)0xe000ed88UL);

// GPIOA
static GPIOx_t* const GPIOA        = ((GPIOx_t*)    0x40020000UL);

// GPIOB
static GPIOx_t* const GPIOB        = ((GPIOx_t*)    0x40020400UL);

// GPIOC
static GPIOx_t* const GPIOC        = ((GPIOx_t*)    0x40020800UL);

// GPIOD
static GPIOx_t* const GPIOD        = ((GPIOx_t*)    0x40020c00UL);

// GPIOE
static GPIOx_t* const GPIOE        = ((GPIOx_t*)    0x40021000UL);

// GPIOH
static GPIOx_t* const GPIOH        = ((GPIOx_t*)    0x40021c00UL);

// I2C1
static I2Cx_t* const I2C1          = ((I2Cx_t*)     0x40005400UL);

// I2C2
static I2Cx_t* const I2C2          = ((I2Cx_t*)     0x40005800UL);

// I2C3
static I2Cx_t* const I2C3          = ((I2Cx_t*)     0x40005c00UL);

// I2S2ext
static I2Sxext_t* const I2S2ext    = ((I2Sxext_t*)  0x40003400UL);

// I2S3ext
static I2Sxext_t* const I2S3ext    = ((I2Sxext_t*)  0x40004000UL);

// IWDG
static IWDG_t* const IWDG          = ((IWDG_t*)     0x40003000UL);

// MPU
static MPU_t* const MPU            = ((MPU_t*)      0xe000ed90UL);

// NVIC
static NVIC_t* const NVIC          = ((NVIC_t*)     0xe000e100UL);

// NVIC_STIR
static NVIC_STIR_t* const NVIC_STIR = ((NVIC_STIR_t*)0xe000ef00UL);

// OTG_FS_PWRCLK
static OTG_FS_PWRCLK_t* const OTG_FS_PWRCLK = ((OTG_FS_PWRCLK_t*)0x50000e00UL);

// PWR
static PWR_t* const PWR            = ((PWR_t*)      0x40007000UL);

// RCC
static RCC_t* const RCC            = ((RCC_t*)      0x40023800UL);

// RTC
static RTC_t* const RTC            = ((RTC_t*)      0x40002800UL);

// SCB
static SCB_t* const SCB            = ((SCB_t*)      0xe000ed00UL);

// SCB_ACTRL
static SCB_ACTRL_t* const SCB_ACTRL = ((SCB_ACTRL_t*)0xe000e008UL);

// SDIO
static SDIO_t* const SDIO          = ((SDIO_t*)     0x40012c00UL);

// SPI1
static I2Sxext_t* const SPI1       = ((I2Sxext_t*)  0x40013000UL);

// SPI2
static I2Sxext_t* const SPI2       = ((I2Sxext_t*)  0x40003800UL);

// SPI3
static I2Sxext_t* const SPI3       = ((I2Sxext_t*)  0x40003c00UL);

// SPI4
static I2Sxext_t* const SPI4       = ((I2Sxext_t*)  0x40013400UL);

// SPI5
static I2Sxext_t* const SPI5       = ((I2Sxext_t*)  0x40015000UL);

// STK
static STK_t* const SysTick        = ((STK_t*)      0xe000e010UL);

// SYSCFG
static SYSCFG_t* const SYSCFG      = ((SYSCFG_t*)   0x40013800UL);

// TIM1
static TIM1x_t* const TIM1         = ((TIM1x_t*)    0x40010000UL);

// TIM10
static TIM10_t* const TIM10        = ((TIM10_t*)    0x40014400UL);

// TIM11
static TIM11_t* const TIM11        = ((TIM11_t*)    0x40014800UL);

// TIM2
static TIM2_t* const TIM2          = ((TIM2_t*)     0x40000000UL);

// TIM3
static TIMx_t* const TIM3          = ((TIMx_t*)     0x40000400UL);

// TIM4
static TIMx_t* const TIM4          = ((TIMx_t*)     0x40000800UL);

// TIM5
static TIM5_t* const TIM5          = ((TIM5_t*)     0x40000c00UL);

// TIM8
static TIM1x_t* const TIM8         = ((TIM1x_t*)    0x40010400UL);

// TIM9
static TIM9_t* const TIM9          = ((TIM9_t*)     0x40014000UL);

// USART1
static USARTx_t* const USART1      = ((USARTx_t*)   0x40011000UL);

// USART2
static USARTx_t* const USART2      = ((USARTx_t*)   0x40004400UL);

// USART6
static USARTx_t* const USART6      = ((USARTx_t*)   0x40011400UL);

// WWDG
static WWDG_t* const WWDG          = ((WWDG_t*)     0x40002c00UL);



#endif // STM32F411_SFR_H

//****************************************** end of file *******************************************

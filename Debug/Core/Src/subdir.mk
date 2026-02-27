################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/SSD1306_drv.c \
../Core/Src/main.c \
../Core/Src/pish_counter.c \
../Core/Src/pish_flash_drv.c \
../Core/Src/pish_gpio_dr.c \
../Core/Src/pish_i2c_drv.c \
../Core/Src/pish_rcc_drv.c \
../Core/Src/pish_timer_drv.c \
../Core/Src/pish_uart_drv.c \
../Core/Src/sowt_timer.c \
../Core/Src/stm32f4xx_it.c \
../Core/Src/sysmem.c 

OBJS += \
./Core/Src/SSD1306_drv.o \
./Core/Src/main.o \
./Core/Src/pish_counter.o \
./Core/Src/pish_flash_drv.o \
./Core/Src/pish_gpio_dr.o \
./Core/Src/pish_i2c_drv.o \
./Core/Src/pish_rcc_drv.o \
./Core/Src/pish_timer_drv.o \
./Core/Src/pish_uart_drv.o \
./Core/Src/sowt_timer.o \
./Core/Src/stm32f4xx_it.o \
./Core/Src/sysmem.o 

C_DEPS += \
./Core/Src/SSD1306_drv.d \
./Core/Src/main.d \
./Core/Src/pish_counter.d \
./Core/Src/pish_flash_drv.d \
./Core/Src/pish_gpio_dr.d \
./Core/Src/pish_i2c_drv.d \
./Core/Src/pish_rcc_drv.d \
./Core/Src/pish_timer_drv.d \
./Core/Src/pish_uart_drv.d \
./Core/Src/sowt_timer.d \
./Core/Src/stm32f4xx_it.d \
./Core/Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/SSD1306_drv.cyclo ./Core/Src/SSD1306_drv.d ./Core/Src/SSD1306_drv.o ./Core/Src/SSD1306_drv.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/pish_counter.cyclo ./Core/Src/pish_counter.d ./Core/Src/pish_counter.o ./Core/Src/pish_counter.su ./Core/Src/pish_flash_drv.cyclo ./Core/Src/pish_flash_drv.d ./Core/Src/pish_flash_drv.o ./Core/Src/pish_flash_drv.su ./Core/Src/pish_gpio_dr.cyclo ./Core/Src/pish_gpio_dr.d ./Core/Src/pish_gpio_dr.o ./Core/Src/pish_gpio_dr.su ./Core/Src/pish_i2c_drv.cyclo ./Core/Src/pish_i2c_drv.d ./Core/Src/pish_i2c_drv.o ./Core/Src/pish_i2c_drv.su ./Core/Src/pish_rcc_drv.cyclo ./Core/Src/pish_rcc_drv.d ./Core/Src/pish_rcc_drv.o ./Core/Src/pish_rcc_drv.su ./Core/Src/pish_timer_drv.cyclo ./Core/Src/pish_timer_drv.d ./Core/Src/pish_timer_drv.o ./Core/Src/pish_timer_drv.su ./Core/Src/pish_uart_drv.cyclo ./Core/Src/pish_uart_drv.d ./Core/Src/pish_uart_drv.o ./Core/Src/pish_uart_drv.su ./Core/Src/sowt_timer.cyclo ./Core/Src/sowt_timer.d ./Core/Src/sowt_timer.o ./Core/Src/sowt_timer.su ./Core/Src/stm32f4xx_it.cyclo ./Core/Src/stm32f4xx_it.d ./Core/Src/stm32f4xx_it.o ./Core/Src/stm32f4xx_it.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su

.PHONY: clean-Core-2f-Src


################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Drivers/door_driver.c \
../Core/Drivers/pump_driver.c \
../Core/Drivers/relay_driver.c \
../Core/Drivers/sensor_driver.c \
../Core/Drivers/uart_driver.c 

OBJS += \
./Core/Drivers/door_driver.o \
./Core/Drivers/pump_driver.o \
./Core/Drivers/relay_driver.o \
./Core/Drivers/sensor_driver.o \
./Core/Drivers/uart_driver.o 

C_DEPS += \
./Core/Drivers/door_driver.d \
./Core/Drivers/pump_driver.d \
./Core/Drivers/relay_driver.d \
./Core/Drivers/sensor_driver.d \
./Core/Drivers/uart_driver.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Drivers/%.o Core/Drivers/%.su Core/Drivers/%.cyclo: ../Core/Drivers/%.c Core/Drivers/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Core/Protocol -I../Core/App -I../Core/Commands -I../Core/Services -I../Core/Drivers -I../Core/Storage -I../Core/Machine -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Drivers

clean-Core-2f-Drivers:
	-$(RM) ./Core/Drivers/door_driver.cyclo ./Core/Drivers/door_driver.d ./Core/Drivers/door_driver.o ./Core/Drivers/door_driver.su ./Core/Drivers/pump_driver.cyclo ./Core/Drivers/pump_driver.d ./Core/Drivers/pump_driver.o ./Core/Drivers/pump_driver.su ./Core/Drivers/relay_driver.cyclo ./Core/Drivers/relay_driver.d ./Core/Drivers/relay_driver.o ./Core/Drivers/relay_driver.su ./Core/Drivers/sensor_driver.cyclo ./Core/Drivers/sensor_driver.d ./Core/Drivers/sensor_driver.o ./Core/Drivers/sensor_driver.su ./Core/Drivers/uart_driver.cyclo ./Core/Drivers/uart_driver.d ./Core/Drivers/uart_driver.o ./Core/Drivers/uart_driver.su

.PHONY: clean-Core-2f-Drivers


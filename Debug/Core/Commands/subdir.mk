################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Commands/cmd_distance.c \
../Core/Commands/cmd_env.c \
../Core/Commands/cmd_fan.c \
../Core/Commands/cmd_lamp.c \
../Core/Commands/cmd_led.c \
../Core/Commands/cmd_lock.c \
../Core/Commands/cmd_status.c \
../Core/Commands/cmd_system.c \
../Core/Commands/cmd_weight.c \
../Core/Commands/command_registry.c 

OBJS += \
./Core/Commands/cmd_distance.o \
./Core/Commands/cmd_env.o \
./Core/Commands/cmd_fan.o \
./Core/Commands/cmd_lamp.o \
./Core/Commands/cmd_led.o \
./Core/Commands/cmd_lock.o \
./Core/Commands/cmd_status.o \
./Core/Commands/cmd_system.o \
./Core/Commands/cmd_weight.o \
./Core/Commands/command_registry.o 

C_DEPS += \
./Core/Commands/cmd_distance.d \
./Core/Commands/cmd_env.d \
./Core/Commands/cmd_fan.d \
./Core/Commands/cmd_lamp.d \
./Core/Commands/cmd_led.d \
./Core/Commands/cmd_lock.d \
./Core/Commands/cmd_status.d \
./Core/Commands/cmd_system.d \
./Core/Commands/cmd_weight.d \
./Core/Commands/command_registry.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Commands/%.o Core/Commands/%.su Core/Commands/%.cyclo: ../Core/Commands/%.c Core/Commands/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Core/Protocol -I../Core/App -I../Core/Commands -I../Core/Services -I../Core/Drivers -I../Core/Storage -I../Core/Machine -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Commands

clean-Core-2f-Commands:
	-$(RM) ./Core/Commands/cmd_distance.cyclo ./Core/Commands/cmd_distance.d ./Core/Commands/cmd_distance.o ./Core/Commands/cmd_distance.su ./Core/Commands/cmd_env.cyclo ./Core/Commands/cmd_env.d ./Core/Commands/cmd_env.o ./Core/Commands/cmd_env.su ./Core/Commands/cmd_fan.cyclo ./Core/Commands/cmd_fan.d ./Core/Commands/cmd_fan.o ./Core/Commands/cmd_fan.su ./Core/Commands/cmd_lamp.cyclo ./Core/Commands/cmd_lamp.d ./Core/Commands/cmd_lamp.o ./Core/Commands/cmd_lamp.su ./Core/Commands/cmd_led.cyclo ./Core/Commands/cmd_led.d ./Core/Commands/cmd_led.o ./Core/Commands/cmd_led.su ./Core/Commands/cmd_lock.cyclo ./Core/Commands/cmd_lock.d ./Core/Commands/cmd_lock.o ./Core/Commands/cmd_lock.su ./Core/Commands/cmd_status.cyclo ./Core/Commands/cmd_status.d ./Core/Commands/cmd_status.o ./Core/Commands/cmd_status.su ./Core/Commands/cmd_system.cyclo ./Core/Commands/cmd_system.d ./Core/Commands/cmd_system.o ./Core/Commands/cmd_system.su ./Core/Commands/cmd_weight.cyclo ./Core/Commands/cmd_weight.d ./Core/Commands/cmd_weight.o ./Core/Commands/cmd_weight.su ./Core/Commands/command_registry.cyclo ./Core/Commands/command_registry.d ./Core/Commands/command_registry.o ./Core/Commands/command_registry.su

.PHONY: clean-Core-2f-Commands


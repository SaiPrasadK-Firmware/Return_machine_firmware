################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Services/communication_service.c \
../Core/Services/door_service.c \
../Core/Services/sensor_service.c \
../Core/Services/system_service.c 

OBJS += \
./Core/Services/communication_service.o \
./Core/Services/door_service.o \
./Core/Services/sensor_service.o \
./Core/Services/system_service.o 

C_DEPS += \
./Core/Services/communication_service.d \
./Core/Services/door_service.d \
./Core/Services/sensor_service.d \
./Core/Services/system_service.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Services/%.o Core/Services/%.su Core/Services/%.cyclo: ../Core/Services/%.c Core/Services/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Core/Protocol -I../Core/App -I../Core/Commands -I../Core/Services -I../Core/Drivers -I../Core/Storage -I../Core/Machine -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Services

clean-Core-2f-Services:
	-$(RM) ./Core/Services/communication_service.cyclo ./Core/Services/communication_service.d ./Core/Services/communication_service.o ./Core/Services/communication_service.su ./Core/Services/door_service.cyclo ./Core/Services/door_service.d ./Core/Services/door_service.o ./Core/Services/door_service.su ./Core/Services/sensor_service.cyclo ./Core/Services/sensor_service.d ./Core/Services/sensor_service.o ./Core/Services/sensor_service.su ./Core/Services/system_service.cyclo ./Core/Services/system_service.d ./Core/Services/system_service.o ./Core/Services/system_service.su

.PHONY: clean-Core-2f-Services


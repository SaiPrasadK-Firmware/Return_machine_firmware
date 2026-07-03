################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Tests/Protocol/crc16_test.c \
../Core/Tests/Protocol/packet_test.c 

OBJS += \
./Core/Tests/Protocol/crc16_test.o \
./Core/Tests/Protocol/packet_test.o 

C_DEPS += \
./Core/Tests/Protocol/crc16_test.d \
./Core/Tests/Protocol/packet_test.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Tests/Protocol/%.o Core/Tests/Protocol/%.su Core/Tests/Protocol/%.cyclo: ../Core/Tests/Protocol/%.c Core/Tests/Protocol/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Core/Protocol -I../Core/App -I../Core/Commands -I../Core/Services -I../Core/Drivers -I../Core/Storage -I../Core/Machine -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Tests-2f-Protocol

clean-Core-2f-Tests-2f-Protocol:
	-$(RM) ./Core/Tests/Protocol/crc16_test.cyclo ./Core/Tests/Protocol/crc16_test.d ./Core/Tests/Protocol/crc16_test.o ./Core/Tests/Protocol/crc16_test.su ./Core/Tests/Protocol/packet_test.cyclo ./Core/Tests/Protocol/packet_test.d ./Core/Tests/Protocol/packet_test.o ./Core/Tests/Protocol/packet_test.su

.PHONY: clean-Core-2f-Tests-2f-Protocol


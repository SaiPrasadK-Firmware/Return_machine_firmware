################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Protocol/command_dispatcher.c \
../Core/Protocol/crc16.c \
../Core/Protocol/frame_decoder.c \
../Core/Protocol/packet.c \
../Core/Protocol/packet_builder.c \
../Core/Protocol/packet_parser.c \
../Core/Protocol/packet_validator.c 

OBJS += \
./Core/Protocol/command_dispatcher.o \
./Core/Protocol/crc16.o \
./Core/Protocol/frame_decoder.o \
./Core/Protocol/packet.o \
./Core/Protocol/packet_builder.o \
./Core/Protocol/packet_parser.o \
./Core/Protocol/packet_validator.o 

C_DEPS += \
./Core/Protocol/command_dispatcher.d \
./Core/Protocol/crc16.d \
./Core/Protocol/frame_decoder.d \
./Core/Protocol/packet.d \
./Core/Protocol/packet_builder.d \
./Core/Protocol/packet_parser.d \
./Core/Protocol/packet_validator.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Protocol/%.o Core/Protocol/%.su Core/Protocol/%.cyclo: ../Core/Protocol/%.c Core/Protocol/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Core/Protocol -I../Core/App -I../Core/Commands -I../Core/Services -I../Core/Drivers -I../Core/Storage -I../Core/Machine -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Protocol

clean-Core-2f-Protocol:
	-$(RM) ./Core/Protocol/command_dispatcher.cyclo ./Core/Protocol/command_dispatcher.d ./Core/Protocol/command_dispatcher.o ./Core/Protocol/command_dispatcher.su ./Core/Protocol/crc16.cyclo ./Core/Protocol/crc16.d ./Core/Protocol/crc16.o ./Core/Protocol/crc16.su ./Core/Protocol/frame_decoder.cyclo ./Core/Protocol/frame_decoder.d ./Core/Protocol/frame_decoder.o ./Core/Protocol/frame_decoder.su ./Core/Protocol/packet.cyclo ./Core/Protocol/packet.d ./Core/Protocol/packet.o ./Core/Protocol/packet.su ./Core/Protocol/packet_builder.cyclo ./Core/Protocol/packet_builder.d ./Core/Protocol/packet_builder.o ./Core/Protocol/packet_builder.su ./Core/Protocol/packet_parser.cyclo ./Core/Protocol/packet_parser.d ./Core/Protocol/packet_parser.o ./Core/Protocol/packet_parser.su ./Core/Protocol/packet_validator.cyclo ./Core/Protocol/packet_validator.d ./Core/Protocol/packet_validator.o ./Core/Protocol/packet_validator.su

.PHONY: clean-Core-2f-Protocol


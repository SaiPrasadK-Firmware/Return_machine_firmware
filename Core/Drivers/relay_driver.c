#include "relay_driver.h"
#include "main.h"

void RelayDriver_SetOutput12(uint8_t state)
{
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, state ? GPIO_PIN_SET : GPIO_PIN_RESET);
}

void RelayDriver_SetOutput13(uint8_t state)
{
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, state ? GPIO_PIN_SET : GPIO_PIN_RESET);
}

void RelayDriver_SetOutput14(uint8_t state)
{
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, state ? GPIO_PIN_SET : GPIO_PIN_RESET);
}

void RelayDriver_SetOutput15(uint8_t state)
{
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, state ? GPIO_PIN_SET : GPIO_PIN_RESET);
}


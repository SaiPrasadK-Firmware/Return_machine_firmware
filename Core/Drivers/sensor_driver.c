#include "sensor_driver.h"

// In the future this wraps ADC / I2C HAL operations
uint32_t SensorDriver_ReadDistance(void)
{
    return 100; // Mock 100mm distance
}

uint32_t SensorDriver_ReadWeight(void)
{
    return 250; // Mock 250g weight
}

uint32_t SensorDriver_ReadTemperature(void)
{
    return 25; // Mock 25 degrees C
}

uint32_t SensorDriver_ReadHumidity(void)
{
    return 55; // Mock 55% relative humidity
}


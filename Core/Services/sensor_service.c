#include "sensor_service.h"
#include "sensor_driver.h"
#include <stddef.h>

SensorResult_t SensorService_Process(const SensorRequest_t *pRequest, uint32_t *pOutValue)
{
    if (pRequest == NULL || pOutValue == NULL)
    {
        return SENSOR_ERROR_FAULT;
    }

    switch (pRequest->readType)
    {
        case SENSOR_READ_DISTANCE:
            *pOutValue = SensorDriver_ReadDistance();
            break;
        case SENSOR_READ_WEIGHT:
            *pOutValue = SensorDriver_ReadWeight();
            break;
        case SENSOR_READ_TEMPERATURE:
            *pOutValue = SensorDriver_ReadTemperature();
            break;
        case SENSOR_READ_HUMIDITY:
            *pOutValue = SensorDriver_ReadHumidity();
            break;
        default:
            return SENSOR_ERROR_FAULT;
    }

    return SENSOR_SUCCESS;
}

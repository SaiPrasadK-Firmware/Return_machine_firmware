#include "cmd_env.h"
#include "sensor_service.h"
#include "communication_service.h"
#include <string.h>

CommandResult_t CmdEnv_Handle(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL)
    {
        return COMMAND_INVALID_PARAMETER;
    }

    uint8_t payload[4];
    
    // Retrieve Temperature (Standard SHT3x queries)
    SensorRequest_t temp_req = { SENSOR_READ_TEMPERATURE };
    uint32_t temp_val = 0;
    if (SensorService_Process(&temp_req, &temp_val) == SENSOR_SUCCESS)
    {
        payload[0] = (uint8_t)((temp_val >> 8) & 0xFF);
        payload[1] = (uint8_t)(temp_val & 0xFF);
    }
    else
    {
        payload[0] = 0;
        payload[1] = 0;
    }

    // Retrieve Humidity
    SensorRequest_t hum_req = { SENSOR_READ_HUMIDITY };
    uint32_t hum_val = 0;
    if (SensorService_Process(&hum_req, &hum_val) == SENSOR_SUCCESS)
    {
        payload[2] = (uint8_t)((hum_val >> 8) & 0xFF);
        payload[3] = (uint8_t)(hum_val & 0xFF);
    }
    else
    {
        payload[2] = 0;
        payload[3] = 0;
    }

    ProtocolPacket_t response;
    response.header.header1 = PROTOCOL_START_BYTE1;
    response.header.header2 = PROTOCOL_START_BYTE2;
    response.header.command = CMD_TEM_HUM;
    response.header.control = 0x00;
    response.header.payloadLen = sizeof(payload);
    memcpy(response.payload, payload, sizeof(payload));

    CommunicationService_SendPacket(&response);

    return COMMAND_OK;
}

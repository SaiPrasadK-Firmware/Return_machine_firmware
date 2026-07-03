#include "cmd_weight.h"
#include "sensor_service.h"
#include "communication_service.h"
#include <string.h>

CommandResult_t CmdWeight_Handle(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL)
    {
        return COMMAND_INVALID_PARAMETER;
    }

    SensorRequest_t request;
    request.readType = SENSOR_READ_WEIGHT;

    uint32_t weight_val = 0;
    SensorResult_t result = SensorService_Process(&request, &weight_val);
    if (result != SENSOR_SUCCESS)
    {
        return COMMAND_HARDWARE_ERROR;
    }

    ProtocolPacket_t response;
    response.header.header1 = PROTOCOL_START_BYTE1;
    response.header.header2 = PROTOCOL_START_BYTE2;
    response.header.command = CMD_GET_WEIGHT;
    response.header.control = 0x00;
    response.header.payloadLen = 2;

    // Pack 16-bit weight data
    response.payload[0] = (uint8_t)((weight_val >> 8) & 0xFF);
    response.payload[1] = (uint8_t)(weight_val & 0xFF);

    CommunicationService_SendPacket(&response);

    return COMMAND_OK;
}

#include "cmd_status.h"
#include "communication_service.h"
#include "machine_state.h"
#include "sensor_service.h"
#include <string.h>

CommandResult_t CmdStatus_Handle(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL)
    {
        return COMMAND_INVALID_PARAMETER;
    }

    uint8_t payload[6];
    
    // Byte 0: Machine state code
    payload[0] = (uint8_t)MachineState_Get();
    
    // Byte 1: Sensor bitmask (door status bits)
    payload[1] = 0x00; 

    // Retrieve active distance telemetry
    SensorRequest_t dist_req = { SENSOR_READ_DISTANCE };
    uint32_t dist_val = 0;
    if (SensorService_Process(&dist_req, &dist_val) == SENSOR_SUCCESS)
    {
        payload[2] = (uint8_t)((dist_val >> 8) & 0xFF);
        payload[3] = (uint8_t)(dist_val & 0xFF);
    }
    else
    {
        payload[2] = 0;
        payload[3] = 0;
    }
    
    // Retrieve active scale telemetry
    SensorRequest_t weight_req = { SENSOR_READ_WEIGHT };
    uint32_t weight_val = 0;
    if (SensorService_Process(&weight_req, &weight_val) == SENSOR_SUCCESS)
    {
        payload[4] = (uint8_t)((weight_val >> 8) & 0xFF);
        payload[5] = (uint8_t)(weight_val & 0xFF);
    }
    else
    {
        payload[4] = 0;
        payload[5] = 0;
    }

    ProtocolPacket_t response;
    response.header.header1 = PROTOCOL_START_BYTE1;
    response.header.header2 = PROTOCOL_START_BYTE2;
    response.header.command = CMD_GET_DEVSTATUS;
    response.header.control = 0x00;
    response.header.payloadLen = sizeof(payload);
    memcpy(response.payload, payload, sizeof(payload));

    CommunicationService_SendPacket(&response);

    return COMMAND_OK;
}

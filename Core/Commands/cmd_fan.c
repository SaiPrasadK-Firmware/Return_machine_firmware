#include "cmd_fan.h"
#include "relay_driver.h"
#include "communication_service.h"
#include <string.h>

CommandResult_t CmdFan_Handle(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL)
    {
        return COMMAND_INVALID_PARAMETER;
    }

    // Packet payload byte 0: 0x01 to turn Fan ON, 0x00 to turn Fan OFF
    // Exhaust fan uses the companion relay driver output Pin PB14 (Verified in Phase 6 analyses)
    uint8_t control_action = 0x00;
    if (pPacket->header.payloadLen > 0)
    {
        control_action = pPacket->payload[0];
    }

    if (control_action == 0x01)
    {
        RelayDriver_SetOutput14(1);
    }
    else
    {
        RelayDriver_SetOutput14(0);
    }

    ProtocolPacket_t response;
    response.header.header1 = PROTOCOL_START_BYTE1;
    response.header.header2 = PROTOCOL_START_BYTE2;
    response.header.command = CMD_VENTILATOR;
    response.header.control = 0x00;
    response.header.payloadLen = 1;
    response.payload[0] = control_action; 

    CommunicationService_SendPacket(&response);

    return COMMAND_OK;
}

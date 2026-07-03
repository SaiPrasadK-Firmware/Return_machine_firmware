#include "cmd_lamp.h"
#include "relay_driver.h"
#include "communication_service.h"
#include <string.h>

CommandResult_t CmdLamp_Handle(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL)
    {
        return COMMAND_INVALID_PARAMETER;
    }

    // Packet payload byte 0: 0x01 to turn ON, 0x00 to turn OFF
    uint8_t control_action = 0x00;
    if (pPacket->header.payloadLen > 0)
    {
        control_action = pPacket->payload[0];
    }

    if (control_action == 0x01)
    {
        // Engage Lamp: PB15 SET, PB14 RESET (Matches original FUN_8000c910)
        RelayDriver_SetOutput15(1);
        RelayDriver_SetOutput14(0);
    }
    else
    {
        // Disengage Lamp: PB15 RESET, PB14 RESET (Matches original FUN_8000c97c)
        RelayDriver_SetOutput15(0);
        RelayDriver_SetOutput14(0);
    }

    ProtocolPacket_t response;
    response.header.header1 = PROTOCOL_START_BYTE1;
    response.header.header2 = PROTOCOL_START_BYTE2;
    response.header.command = CMD_POWER_ON_INSIDE_LAMP;
    response.header.control = 0x00;
    response.header.payloadLen = 1;
    response.payload[0] = control_action; // Echo control action back

    CommunicationService_SendPacket(&response);

    return COMMAND_OK;
}

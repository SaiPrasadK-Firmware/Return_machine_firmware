#include "cmd_led.h"
#include "communication_service.h"
#include <string.h>

CommandResult_t CmdLed_Handle(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL)
    {
        return COMMAND_INVALID_PARAMETER;
    }

    // Recovered behavior: LED ring output control logic requires custom serial LED protocols.
    // Address targets remain partially verified. Response packet echoes parameters back.
    uint8_t color_action = 0x00;
    if (pPacket->header.payloadLen > 0)
    {
        color_action = pPacket->payload[0];
    }

    ProtocolPacket_t response;
    response.header.header1 = PROTOCOL_START_BYTE1;
    response.header.header2 = PROTOCOL_START_BYTE2;
    response.header.command = CMD_ONERING_LED_ON;
    response.header.control = 0x00;
    response.header.payloadLen = 1;
    response.payload[0] = color_action; 

    CommunicationService_SendPacket(&response);

    return COMMAND_OK;
}

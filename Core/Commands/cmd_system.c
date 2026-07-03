/**
 * @file cmd_system.c
 * @brief System command family handler implementing Android Boot Handshake response.
 */

#include "cmd_system.h"
#include "system_service.h"
#include "communication_service.h"
#include <string.h>

CommandResult_t CmdSystem_Handle(const ProtocolPacket_t *pPacket)
{
    if (pPacket == NULL)
    {
        return COMMAND_INVALID_PARAMETER;
    }

    SystemInfoRequest_t request;
    request.infoType = SYSTEM_INFO_GET_SERIAL;

    uint8_t out_payload[32];
    uint16_t out_len = 0;

    SystemResult_t result = SystemService_Process(&request, out_payload, sizeof(out_payload), &out_len);
    if (result != SYSTEM_SUCCESS)
    {
        return COMMAND_HARDWARE_ERROR;
    }

    // Build the compatible response packet structure
    ProtocolPacket_t response;
    response.header.header1 = PROTOCOL_START_BYTE1;
    response.header.header2 = PROTOCOL_START_BYTE2;
    response.header.command = CMD_SYS_INFO;
    response.header.control = 0x00; // Handshake Status OK
    response.header.payloadLen = out_len;
    memcpy(response.payload, out_payload, out_len);

    // Transmit response back to Android controller
    CommunicationService_SendPacket(&response);

    return COMMAND_OK;
}

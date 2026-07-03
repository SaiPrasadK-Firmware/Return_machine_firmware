/**
 * @file packet_test.c
 * @brief Comprehensive test suite for Protocol Builder, Parser, and Decoder.
 */

#ifdef DEBUG

#include "crc16.h"
#include "protocol_config.h"
#include "protocol_types.h"
#include "packet_builder.h"
#include "packet_validator.h"
#include "frame_decoder.h"
#include "command_dispatcher.h"
#include <assert.h>
#include <string.h>

void Packet_Test(void)
{
    // ----------------------------------------------------
    // Test 1: Basic Packet Serialization (Packet_Build)
    // ----------------------------------------------------
    ProtocolPacket_t tx_packet;
    tx_packet.header.header1 = PROTOCOL_START_BYTE1;
    tx_packet.header.header2 = PROTOCOL_START_BYTE2;
    tx_packet.header.command = 0x51;
    tx_packet.header.control = 0x01; // Lock Control
    tx_packet.header.payloadLen = 4;
    memcpy(tx_packet.payload, "DOOR", 4);

    uint8_t tx_buffer[64];
    uint16_t tx_len = Packet_Build(&tx_packet, tx_buffer, sizeof(tx_buffer));

    assert(tx_len == 12); // Header (8 bytes) + Payload (4 bytes)
    assert(tx_buffer[0] == 0xAA);
    assert(tx_buffer[1] == 0x55);
    assert(tx_buffer[4] == 0x51);
    assert(tx_buffer[5] == 0x01);
    assert(tx_buffer[6] == 0x04);
    assert(tx_buffer[7] == 0x00);
    assert(memcmp(&tx_buffer[8], "DOOR", 4) == 0);

    // ----------------------------------------------------
    // Test 2: Byte Stream Decoder (Valid Packet stream)
    // ----------------------------------------------------
    PacketDecoder_t decoder;
    FrameDecoder_Init(&decoder);

    PacketResult_t rx_result = PACKET_INCOMPLETE;
    for (uint16_t i = 0; i < tx_len; i++)
    {
        rx_result = FrameDecoder_InputByte(&decoder, tx_buffer[i]);
        if (i < tx_len - 1)
        {
            assert(rx_result == PACKET_INCOMPLETE);
        }
    }
    assert(rx_result == PACKET_OK);

    ProtocolPacket_t rx_packet;
    PacketResult_t decode_result = FrameDecoder_GetFrame(&decoder, &rx_packet);
    assert(decode_result == PACKET_OK);
    assert(rx_packet.header.command == 0x51);
    assert(rx_packet.header.control == 0x01);
    assert(rx_packet.header.payloadLen == 4);
    assert(memcmp(rx_packet.payload, "DOOR", 4) == 0);

    // Verify statistics
    assert(decoder.packetsReceived == 1);
    assert(decoder.crcErrors == 0);

    // ----------------------------------------------------
    // Test 3: Android Packet Compatibility
    // ----------------------------------------------------
    // Captured Android packet: [0xAA, 0x55, 0xD6, 0x23, 0x01, 0x02, 0x00, 0x00]
    // Cmd: 0x01, Control: 0x02, PayloadLen: 0
    const uint8_t android_packet[] = {0xAA, 0x55, 0xD6, 0x23, 0x01, 0x02, 0x00, 0x00};
    
    FrameDecoder_Init(&decoder);
    rx_result = FrameDecoder_InputBuffer(&decoder, android_packet, sizeof(android_packet));
    assert(rx_result == PACKET_OK);

    decode_result = FrameDecoder_GetFrame(&decoder, &rx_packet);
    assert(decode_result == PACKET_OK);
    assert(rx_packet.header.command == 0x01);
    assert(rx_packet.header.control == 0x02);
    assert(rx_packet.header.payloadLen == 0);

    // ----------------------------------------------------
    // Test 4: CRC Validation Failure
    // ----------------------------------------------------
    uint8_t bad_packet[8];
    memcpy(bad_packet, android_packet, 8);
    bad_packet[2] = 0x00; // Corrupt CRC
    bad_packet[3] = 0x00;

    FrameDecoder_Init(&decoder);
    rx_result = FrameDecoder_InputBuffer(&decoder, bad_packet, 8);
    assert(rx_result == PACKET_OK); // Frame decoder completes payload index collection

    decode_result = FrameDecoder_GetFrame(&decoder, &rx_packet);
    assert(decode_result == PACKET_INVALID_CRC);
    assert(decoder.crcErrors == 1);

    // ----------------------------------------------------
    // Test 5: Length limits check
    // ----------------------------------------------------
    uint8_t overflow_packet[] = {0xAA, 0x55, 0x00, 0x00, 0x01, 0x02, 0x01, 0x02}; // payload length 0x0201 > 512
    FrameDecoder_Init(&decoder);
    rx_result = FrameDecoder_InputBuffer(&decoder, overflow_packet, sizeof(overflow_packet));
    assert(rx_result == PACKET_INVALID_LENGTH);
    assert(decoder.lengthErrors == 1);

    // ----------------------------------------------------
    // Test 6: Zero-length payload builder & parse
    // ----------------------------------------------------
    tx_packet.header.payloadLen = 0;
    tx_len = Packet_Build(&tx_packet, tx_buffer, sizeof(tx_buffer));
    assert(tx_len == 8);

    FrameDecoder_Init(&decoder);
    rx_result = FrameDecoder_InputBuffer(&decoder, tx_buffer, tx_len);
    assert(rx_result == PACKET_OK);

    // ----------------------------------------------------
    // Test 7: Garbage bytes before header recovery
    // ----------------------------------------------------
    uint8_t garbage_stream[] = {0xFF, 0x00, 0xAA, 0x12, 0xAA, 0x55, 0xD6, 0x23, 0x01, 0x02, 0x00, 0x00};
    FrameDecoder_Init(&decoder);
    rx_result = FrameDecoder_InputBuffer(&decoder, garbage_stream, sizeof(garbage_stream));
    assert(rx_result == PACKET_OK);

    decode_result = FrameDecoder_GetFrame(&decoder, &rx_packet);
    assert(decode_result == PACKET_OK);
    assert(decoder.headerErrors > 0);

    // ----------------------------------------------------
    // Test 8: Decoder Timeout Reset
    // ----------------------------------------------------
    FrameDecoder_Init(&decoder);
    FrameDecoder_InputByte(&decoder, 0xAA);
    FrameDecoder_InputByte(&decoder, 0x55);
    assert(decoder.state == DECODER_STATE_WAIT_CRC_H);

    // Simulate timeout
    FrameDecoder_ProcessTimeout(&decoder);
    assert(decoder.state == DECODER_STATE_WAIT_HEADER1);
    assert(decoder.timeouts == 1);

    // ----------------------------------------------------
    // Test 9: Header bytes in payload
    // ----------------------------------------------------
    tx_packet.header.payloadLen = 4;
    tx_packet.payload[0] = 0xAA;
    tx_packet.payload[1] = 0x55;
    tx_packet.payload[2] = 0x12;
    tx_packet.payload[3] = 0x34;

    tx_len = Packet_Build(&tx_packet, tx_buffer, sizeof(tx_buffer));
    FrameDecoder_Init(&decoder);
    rx_result = FrameDecoder_InputBuffer(&decoder, tx_buffer, tx_len);
    assert(rx_result == PACKET_OK);

    decode_result = FrameDecoder_GetFrame(&decoder, &rx_packet);
    assert(decode_result == PACKET_OK);
    assert(rx_packet.payload[0] == 0xAA);
    assert(rx_packet.payload[1] == 0x55);

    // ----------------------------------------------------
    // Test 10: Routing via dispatcher & registry table
    // ----------------------------------------------------
    // Verify Cmd Lock (CMD_LOCK = 0x51)
    rx_packet.header.command = 0x51;
    rx_packet.header.control = 0x01; // Lock action
    rx_packet.header.payloadLen = 0;
    decode_result = CommandDispatcher_Process(&rx_packet);
    assert(decode_result == PACKET_OK);

    // Verify Cmd System Handshake (CMD_SYS_INFO = 0x21)
    rx_packet.header.command = 0x21;
    rx_packet.header.control = 0x00;
    rx_packet.header.payloadLen = 0;
    decode_result = CommandDispatcher_Process(&rx_packet);
    assert(decode_result == PACKET_OK);

    // Verify Cmd Device Status (CMD_GET_DEVSTATUS = 0x58)
    rx_packet.header.command = 0x58;
    rx_packet.header.control = 0x00;
    rx_packet.header.payloadLen = 0;
    decode_result = CommandDispatcher_Process(&rx_packet);
    assert(decode_result == PACKET_OK);

    // Verify Cmd Get Weight (CMD_GET_WEIGHT = 0x56)
    rx_packet.header.command = 0x56;
    rx_packet.header.control = 0x00;
    rx_packet.header.payloadLen = 0;
    decode_result = CommandDispatcher_Process(&rx_packet);
    assert(decode_result == PACKET_OK);

    // Verify Cmd Power On Inside Lamp (CMD_POWER_ON_INSIDE_LAMP = 0x59)
    rx_packet.header.command = 0x59;
    rx_packet.header.control = 0x00;
    rx_packet.header.payloadLen = 0;
    decode_result = CommandDispatcher_Process(&rx_packet);
    assert(decode_result == PACKET_OK);

    // Verify Cmd OneRing LED (CMD_ONERING_LED_ON = 0x5A)
    rx_packet.header.command = 0x5A;
    rx_packet.header.control = 0x00;
    rx_packet.header.payloadLen = 0;
    decode_result = CommandDispatcher_Process(&rx_packet);
    assert(decode_result == PACKET_OK);

    // Verify Cmd Ventilator Fan (CMD_VENTILATOR = 0x5B)
    rx_packet.header.command = 0x5B;
    rx_packet.header.control = 0x00;
    rx_packet.header.payloadLen = 0;
    decode_result = CommandDispatcher_Process(&rx_packet);
    assert(decode_result == PACKET_OK);

    // Verify Cmd Temperature/Humidity (CMD_TEM_HUM = 0x5C)
    rx_packet.header.command = 0x5C;
    rx_packet.header.control = 0x00;
    rx_packet.header.payloadLen = 0;
    decode_result = CommandDispatcher_Process(&rx_packet);
    assert(decode_result == PACKET_OK);

    // Verify Unsupported Cmd ID behavior
    rx_packet.header.command = 0x99;
    decode_result = CommandDispatcher_Process(&rx_packet);
    assert(decode_result == PACKET_UNSUPPORTED_COMMAND);
}
#endif /* DEBUG */


#include "machine_state.h"
#include <stddef.h>

static MachineState_t g_currentMachineState = STATE_BOOT;

void MachineState_Init(void)
{
    g_currentMachineState = STATE_BOOT;
}

void MachineState_Set(MachineState_t state)
{
    g_currentMachineState = state;
}

MachineState_t MachineState_Get(void)
{
    return g_currentMachineState;
}

void MachineState_Process(void)
{
    switch (g_currentMachineState)
    {
        case STATE_BOOT:
            // Perform diagnostic initialization checks
            MachineState_Set(STATE_IDLE);
            break;
        case STATE_IDLE:
            break;
        case STATE_READY:
            break;
        case STATE_ERROR:
            break;
        default:
            break;
    }
}

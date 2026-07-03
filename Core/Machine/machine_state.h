#ifndef __MACHINE_STATE_H
#define __MACHINE_STATE_H

typedef enum
{
    STATE_BOOT,
    STATE_IDLE,
    STATE_READY,
    STATE_RETURNING,
    STATE_DOOR_OPEN,
    STATE_FULL,
    STATE_ERROR,
    STATE_SERVICE,
    STATE_CALIBRATION
} MachineState_t;

/**
 * @brief Initializes the machine state variables.
 */
void MachineState_Init(void);

/**
 * @brief Sets a new central state transition.
 */
void MachineState_Set(MachineState_t state);

/**
 * @brief Retrieves the current operational state.
 */
MachineState_t MachineState_Get(void);

/**
 * @brief Executes periodic machine operational processes.
 */
void MachineState_Process(void);

#endif /* __MACHINE_STATE_H */

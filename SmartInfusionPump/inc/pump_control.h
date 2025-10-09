#ifndef PUMP_CONTROL_H
#define PUMP_CONTROL_H
#include <stdint.h>

void PumpControl_Init(void);
void PumpControl_SetFlowSetpoint(float ml_per_min);
void PumpControl_Update(void);
void PumpControl_Stop(void);

#endif // PUMP_CONTROL_H

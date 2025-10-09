        #include "pump_control.h"
#include <stdio.h>

static float setpoint = 0.0f;
static int running = 0;

void PumpControl_Init(void)
{
    setpoint = 25.0f; /* default ml/min */
    running = 1;
    printf("[PumpControl] Init, setpoint=%.2f ml/min\n", setpoint);
}

void PumpControl_SetFlowSetpoint(float ml_per_min)
{
    setpoint = ml_per_min;
    printf("[PumpControl] New setpoint=%.2f ml/min\n", setpoint);
}

void PumpControl_Update(void)
{
    if (!running) return;
    /* In a real system we would read sensors and adjust PWM. Here we simulate. */
    printf("[PumpControl] Maintaining flow at %.2f ml/min\n", setpoint);
}

void PumpControl_Stop(void)
{
    running = 0;
    printf("[PumpControl] STOPPING pump (safe-stop)\n");
}

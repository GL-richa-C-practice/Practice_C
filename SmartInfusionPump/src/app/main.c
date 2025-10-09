#include "event.h"
#include "pump_control.h"
#include "safety_monitor.h"
#include "middleware/event_queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void System_Init(void)
{
    PumpControl_Init();
    SafetyMonitor_Init();
    EventQueue_Init();
    printf("[SYSTEM] Init complete\n");
}

int main(void)
{
    System_Init();

    /* For HOST_BUILD we simulate sensor updates periodically */
    for (int t = 0; t < 20; ++t)
    {
        Event_t e = { .id = EVENT_SENSOR_UPDATE, .data = NULL };
        EventQueue_Post(e);

        Event_t ev;
        while (EventQueue_Get(&ev))
        {
            switch (ev.id)
            {
                case EVENT_SENSOR_UPDATE:
                    SafetyMonitor_Update();
                    PumpControl_Update();
                    break;
                case EVENT_FAULT_DETECTED:
                    PumpControl_Stop();
                    printf("[MAIN] Fault detected, stopping pump\n");
                    break;
                default:
                    break;
            }
        }
        usleep(200000); // 200ms
    }
    printf("[SYSTEM] Simulation finished\n");
    return 0;
}

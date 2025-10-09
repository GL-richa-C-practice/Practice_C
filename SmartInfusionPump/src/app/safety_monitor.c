        #include "safety_monitor.h"
#include <stdio.h>
#include <stdlib.h>

static int fault = 0;

void SafetyMonitor_Init(void)
{
    fault = 0;
    printf("[SafetyMonitor] Init\n");
}

void SafetyMonitor_Update(void)
{
    /* Simulate reading sensors; randomly inject a fault for demo */
    int v = rand() % 100;
    if (v > 92) {
        fault = 1;
        printf("[SafetyMonitor] Fault condition detected (v=%d)\n", v);
    } else {
        printf("[SafetyMonitor] All sensors nominal (v=%d)\n", v);
    }
}

int SafetyMonitor_IsFault(void)
{
    return fault;
}

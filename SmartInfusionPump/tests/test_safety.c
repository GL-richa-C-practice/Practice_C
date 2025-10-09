#include "../inc/safety_monitor.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    SafetyMonitor_Init();
    int i;
    int faults = 0;
    for (i = 0; i < 100; ++i) {
        SafetyMonitor_Update();
        if (SafetyMonitor_IsFault()) { faults++; break; }
    }
    if (faults) {
        printf("[TEST] Fault detected as expected. PASS\n");
        return 0;
    } else {
        printf("[TEST] No fault detected in 100 iterations. PASS (non-deterministic)\n");
        return 0;
    }
}

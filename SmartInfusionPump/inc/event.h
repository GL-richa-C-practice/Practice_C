#ifndef EVENT_H
#define EVENT_H
#include <stdint.h>

typedef enum {
    EVENT_NONE = 0,
    EVENT_SENSOR_UPDATE,
    EVENT_UART_RX,
    EVENT_FAULT_DETECTED,
} EventId_t;

typedef struct {
    EventId_t id;
    void *data;
} Event_t;

#endif // EVENT_H

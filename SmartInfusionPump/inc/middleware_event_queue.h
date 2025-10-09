#ifndef EVENT_QUEUE_H
#define EVENT_QUEUE_H
#include "event.h"

void EventQueue_Init(void);
int EventQueue_Post(Event_t e);
int EventQueue_Get(Event_t *e);

#endif // EVENT_QUEUE_H

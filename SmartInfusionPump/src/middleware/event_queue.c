#include "event.h"
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#define EQ_SIZE 16

static Event_t eq[EQ_SIZE];
static uint8_t head = 0, tail = 0;

void EventQueue_Init(void)
{
    head = tail = 0;
    memset(eq, 0, sizeof(eq));
}

int EventQueue_Post(Event_t e)
{
    uint8_t next = (head + 1) % EQ_SIZE;
    if (next == tail) return 0; /* full */
    eq[head] = e;
    head = next;
    return 1;
}

int EventQueue_Get(Event_t *e)
{
    if (head == tail) return 0; /* empty */
    *e = eq[tail];
    tail = (tail + 1) % EQ_SIZE;
    return 1;
}

CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinc -Itests -O2
LDFLAGS =

HOST_SRCS = $(wildcard src/app/*.c) $(wildcard src/drivers/*.c) $(wildcard src/middleware/*.c)
HOST_OBJS = $(HOST_SRCS:.c=.o)

TEST_SRCS = $(wildcard tests/*.c)

TARGET = sipc_sim

.PHONY: all clean run_sim test dist

all: $(TARGET)

$(TARGET): $(HOST_SRCS)
	$(CC) $(CFLAGS) -DHOST_BUILD $^ -o $@ $(LDFLAGS)

run_sim: $(TARGET)
	./$(TARGET)

test: $(TEST_SRCS) $(HOST_SRCS)
	$(CC) $(CFLAGS) -DHOST_BUILD tests/test_safety.c src/app/main.c src/middleware/event_queue.c src/app/safety_monitor.c -o sipc_test && ./sipc_test

clean:
	rm -f $(TARGET) sipc_test *.o

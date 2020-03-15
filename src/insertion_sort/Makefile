C := gcc
TARGET := main

SRCS := $(wildcard *.c)

OBJS := $(patsubst %.c,%.o,$(SRCS))

all: $(TARGET)
$(TARGET): $(OBJS)
	$(C) -o $@ $^
%.o: %.cpp
	$(C) -c $<
clean:
	rm -rf $(TARGET) *.o

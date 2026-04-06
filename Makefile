CC     = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
TARGET = agenda
SRCS   = main.c agenda.c

all: $(TARGET)

$(TARGET): $(SRCS) agenda.h
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET) *.o

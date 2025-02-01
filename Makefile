CC = gcc

CFLAGS = -Wall -Wextra -O2

TARGET = main

$(TARGET) : main.c
	$(CC) main.c function.c -o $(TARGET)

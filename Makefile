CC=g++

DEBUG=-g

TARGET=main

CFLAGS=-c -Wall $(DEBUG)

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

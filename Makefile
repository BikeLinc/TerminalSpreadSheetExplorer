# Makefile for building TSSE
CC=g++
LIBS=-lncurses

CSOURCES=$(wildcard ./src/*.cpp)

TARGET=tsse

all:
	$(CC) $(CSOURCES) -o $(TARGET) $(LIBS)
CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=$(shell find . -name *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
TARGET=bin/test

all: $(SOURCES) $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

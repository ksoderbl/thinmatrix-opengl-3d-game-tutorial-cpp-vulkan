#
# Generic Makefile to make one Vulkan based executable.
# Use GNU make .
#

SHELL	= /bin/sh

SOURCES = \
	MainGameLoop.cpp \
	DisplayManager.cpp

TARGET  = main
OBJECTS = $(SOURCES:.cpp=.o)

CC	= g++
CFLAGS	= -O2 -Wall -std=c++17
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi


all: $(TARGET)
.PHONY: all


$(OBJECTS): %.o: %.cpp
	$(CC) -c $(CFLAGS) $^ -o $@

$(TARGET): $(OBJECTS)
	$(CC) $^ $(LDFLAGS) -o $@

.PHONY: clean
clean:
	-rm -f core \#*\# *~ */*~ *.o */*.o $(TARGET)

# Compilers
СС = clang
CXX = clang++

# C flags
CFLAGS = -std=c11 -Wall -O2
CFLAGS += $(shell pkg-config --cflags sdl2 sdl2_ttf)
CFLAGS += -DARDUINO=10805

# C++ flags
CXXFLAGS = -std=c++11 -Wall -O2
CXXFLAGS += $(shell pkg-config --cflags sdl2 sdl2_ttf)
CXXFLAGS += -DARDUINO=10805

# Sources path
VIRTUAL_ARDUINO_DIR = Virtual_Arduino
FRAME_DIR = $(VIRTUAL_ARDUINO_DIR)/Frame
PAGES_DIR = $(VIRTUAL_ARDUINO_DIR)/Pages
LIBS_DIR = $(VIRTUAL_ARDUINO_DIR)/libraries

# Common flags
COMMON_FLAGS += -I$(FRAME_DIR)/ArduinoAPI
COMMON_FLAGS += -I$(FRAME_DIR)/ArduinoAPI/avr
COMMON_FLAGS += -I$(FRAME_DIR)/LLA_Drivers/inc

COMMON_FLAGS += -I$(PAGES_DIR)

COMMON_FLAGS += -I$(LIBS_DIR)/Juan_EventButton_Library
COMMON_FLAGS += -I$(LIBS_DIR)/MillisTaskManager
COMMON_FLAGS += -I$(LIBS_DIR)/U8g2/src
COMMON_FLAGS += -I$(LIBS_DIR)/U8g2/src/clib

# C/C++ flags
CFLAGS += $(COMMON_FLAGS)
CXXFLAGS += $(COMMON_FLAGS)

SOURCES_CXX = main.cpp

# Seek all c/cpp
CPP_FILES = $(shell find $(VIRTUAL_ARDUINO_DIR) -name "*.cpp" \
	-not -path "*/examples/*")
SOURCES_CXX += $(CPP_FILES)

C_FILES = $(shell find $(VIRTUAL_ARDUINO_DIR) -name "*.c" \
	-not -path "*/examples/*")
SOURCES_C = $(C_FILES)

# Linker flags
LDFLAGS = $(shell pkg-config --libs sdl2 sdl2_ttf)

# MacOS Specific
LDFLAGS += -framework Cocoa -framework IOKit -framework Carbon

# Objects
OBJECTS_CXX = $(SOURCES_CXX:.cpp=.o)
OBJECTS_C = $(SOURCES_C:.c=.o)
OBJECTS = $(OBJECTS_CXX) $(OBJECTS_C)

# Target
TARGET = lcd_simulator

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) -o $@ $(OBJECTS) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS) $(TARGET)

.PHONY: all clean
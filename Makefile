# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++11

# Target executable name
TARGET = cipher

# Source files
SRC = src/Cipher.cpp \
      src/Atbash.cpp \
      src/Scytale.cpp \
      src/Ong.cpp \
      src/main.cpp

# Default target
all: $(TARGET)

# Link object files into final executable
$(TARGET):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Clean build files
clean:
	rm -f $(TARGET)

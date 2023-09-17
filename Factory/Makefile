# Compiler
CXX = g++

# Source files
SRCS = main.cpp Logistics.cpp RoadLogistics.cpp SeaLogistics.cpp Ship.cpp Truck.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
TARGET = mylog

# Default target
all: $(TARGET)

# Linking rule
$(TARGET): $(OBJS)
	$(CXX)  -o $@ $(OBJS)

# Compilation rule
%.o: %.cpp
	$(CXX)  -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

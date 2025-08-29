# makefile for efficient code compilation and execution.
# Compiler
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Executable name
TARGET = predicta.exe

# Source files
SRCS = main.cpp menu.cpp userBudget.cpp dailyLog.cpp warning.cpp weekLog.cpp history.cpp insights.cpp log_counter.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Build target
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build (clear .o files)
clean:
	del /Q *.o $(TARGET)

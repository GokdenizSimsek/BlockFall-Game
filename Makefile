# Variables
CXX = g++
CXXFLAGS = -g -std=c++11
SOURCES = main.cpp BlockFall.cpp GameController.cpp LeaderboardEntry.cpp Leaderboard.cpp
HEADERS = BlockFall.h Block.h GameController.h LeaderboardEntry.h Leaderboard.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = blockfall

# Default rule to build the project
all: $(TARGET)

# Rule to build the main target
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Rule to compile source files to object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean the build artifacts
clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean

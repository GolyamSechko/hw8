CXX = g++
CXXFLAGS = -c -std=c++11 -Wall
SOURCES = wine_example.cpp Wine.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = test

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	\rm *.o $(EXECUTABLE)

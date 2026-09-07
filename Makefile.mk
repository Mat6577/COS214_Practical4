CXX = g++
CXXFLAGS = -std=c++11 -g -Wall

SOURCES = main.cpp \

TARGET =  taskforge

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

.PHONY: all clean
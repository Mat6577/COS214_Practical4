CXX = g++
CXXFLAGS = -std=c++11 -Wall

SOURCES = main.cpp \

TARGET =  eventflow

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

.PHONY: all clean
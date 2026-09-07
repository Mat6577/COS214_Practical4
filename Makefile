CXX = g++
CXXFLAGS = -std=c++11 -g -Wall

SOURCES = \
	main.cpp \
	AbstractFilmCategories.cpp \
	Comedy.cpp \
	Drama.cpp \
	Film.cpp \
	FilmCategories.cpp \
	FilmCategoryIterator.cpp \
	FilmIterator.cpp \
	FilmTypes.cpp \
	Genres.cpp \
	Horror.cpp \
	Romance.cpp \
	StateBasedIterator.cpp \
	States.cpp \
	Thriller.cpp

TARGET = taskforge

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

valgrind: $(TARGET)
	valgrind --leak-check=full --show-leak-kinds=all ./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run valgrind clean
CXX = g++
CXXFLAGS = -std=c++11 -g -Wall

SOURCES = main.cpp \
		  AbstractFilmCategories.cpp\
          Comedy.cpp\
          Drama.cpp\
          Film.cpp\
          FilmCategories.cpp\
          FilmCategoriesIterator.cpp\
          FilmIterator.cpp\
          FilmTypes.cpp\
          Genres.cpp\
          Horror.cpp\
          Romance.cpp\
          StateBasedIterator.cpp\
          States.cpp\
	      Thriller.cpp

TARGET =  taskforge

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

.PHONY: all clean

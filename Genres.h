#ifndef GENRES_H
#define GENRES_H

#include <cstring>
#include <iostream>

#include "Film.h"

class Genres : Film {

public:
	Film* film;

	~Genres();

	virtual Film* getFilm() = 0;

	virtual void setFilm(Film* film);

	virtual std::string getMetaData() = 0;

	virtual void printMetaData() = 0;

	Genres();
};

#endif

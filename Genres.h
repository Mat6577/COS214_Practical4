#ifndef GENRES_H
#define GENRES_H

#include <cstring>
#include <iostream>

#include "Film.h"

class Genres : public Film {
private:
	Film* film;
public:
	~Genres();

	Film* getFilm();

	void setFilm(Film* film);

	virtual std::string getMetaData() = 0;

	virtual void printMetaData() = 0;

	Genres(Film* film);
};

#endif

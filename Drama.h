#ifndef DRAMA_H
#define DRAMA_H

#include <cstring>
#include <iostream>

#include "Film.h"
#include "Genres.h"

class Drama : public Genres {


public:
	std::string getMetaData();

	void printMetaData();

	Drama(Film* film);
};

#endif

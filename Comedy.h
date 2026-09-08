#ifndef COMEDY_H
#define COMEDY_H

#include <cstring>
#include <iostream>

#include "Film.h"
#include "Genres.h"


class Comedy : public Genres {


public:
	std::string getMetaData();

	void printMetaData();

	Comedy(Film* film);
};

#endif

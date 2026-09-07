#ifndef THRILLER_H
#define THRILLER_H


#include <cstring>
#include <iostream>
#include <iomanip>


#include "Film.h"
#include "Genres.h"


class Thriller : public Genres {


public:
	std::string getMetaData();

	void printMetaData();

	Thriller(Film* film);
};

#endif

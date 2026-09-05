#ifndef DRAMA_H
#define DRAMA_H

#include <cstring>
#include <iostream>

#include "Film.h"
#include "Genres.h"

class Drama : Genres {


public:
	std::string getMetaData();

	void printMetaData();

	Drama();
};

#endif

#ifndef HORROR_H
#define HORROR_H

#include <string>
#include <iostream>

#include "Film.h"
#include "Genres.h"

class Horror : Genres {


public:
	std::string getMetaData();

	void printMetaData();

	Horror();
};

#endif

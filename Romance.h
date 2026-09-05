#ifndef ROMANCE_H
#define ROMANCE_H

#include <cstring>
#include <iostream>

#include "Film.h"
#include "Genres.h"


class Romance : Genres {


public:
	std::string getMetaData();

	void printMetaData();

	Romance();
};

#endif

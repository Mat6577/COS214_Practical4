#ifndef COMEDY_H
#define COMEDY_H

#include <cstring>
#include <iostream>

#include "Film.h"
#include "Genres.h"


class Comedy : Genres {


public:
	std::string getMetaData();

	void printMetaData();

	Comedy();
};

#endif

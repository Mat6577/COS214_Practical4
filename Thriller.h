#ifndef THRILLER_H
#define THRILLER_H


#include <cstring>
#include <iostream>
#include <iomanip>


#include "Film.h"
#include "Genres.h"


class Thriller : Genres {


public:
	std::string getMetaData();

	void printMetaData();

	Thriller();
};

#endif

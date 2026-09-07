#ifndef HORROR_H
#define HORROR_H

#include <string>
#include <iostream>

#include "Film.h"
#include "Genres.h"

class Horror : public Genres {


public:
	std::string getMetaData();

	void printMetaData();

	Horror();
};

#endif

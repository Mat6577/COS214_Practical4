#ifndef FILM_H
#define FILM_H

#include <cstring>
#include <iostream>

class Film {


public:
	~Film();

	virtual std::string getMetaData() = 0;

	virtual void printMetaData() = 0;

	Film();
};

#endif

#ifndef FILMTYPES_H
#define FILMTYPES_H

class FilmTypes : Film {

public:
	State* state;

	FilmTypes();

	void ~FilmTypes();

	virtual void printMetaData() = 0;

	virtual string getMetaData() = 0;

	virtual void setState(State* state) = 0;

	virtual State* getState() = 0;
};

#endif

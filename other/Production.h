#ifndef PRODUCTION_H
#define PRODUCTION_H

class Production : States {


public:
	Production();

	void printState();

	void getStateInformation();

	void changeState(FilmType* Film);
};

#endif

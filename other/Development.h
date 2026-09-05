#ifndef DEVELOPMENT_H
#define DEVELOPMENT_H

class Development : States {


public:
	Development();

	void printState();

	void getStateInformation();

	void changeState(FilmType* Film);
};

#endif

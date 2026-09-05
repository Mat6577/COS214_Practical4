#ifndef DISTRIBUTION_H
#define DISTRIBUTION_H

class Distribution : States {


public:
	Distribution();

	void printState();

	void getStateInformation();

	void changeState(FilmType* Film);
};

#endif

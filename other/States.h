#ifndef STATES_H
#define STATES_H

class States {


public:
	States();

	~State();

	virtual void printState() = 0;

	virtual string getStateInformation() = 0;

	virtual void changeState(FilmType* Film) = 0;
};

#endif

#ifndef FILMITERATOR_H
#define FILMITERATOR_H

class FilmIterator {


public:
	virtual void first() = 0;

	virtual void next() = 0;

	virtual bool isDone() = 0;

	virtual Film& currentItem() = 0;

	FilmIterator();
};

#endif

#ifndef FILMCATEGORYITERATOR_H
#define FILMCATEGORYITERATOR_H

#include "Film.h"
#include "FilmIterator.h"

class FilmCategoryIterator : FilmIterator {


public:
	void first();

	void next();

	bool IsDone();

	Film& currentItem();

	FilmCategoryIterator();
};

#endif

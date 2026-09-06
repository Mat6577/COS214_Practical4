#ifndef ABSTRACTFILMCATEGORIES_H
#define ABSTRACTFILMCATEGORIES_H

class AbstractFilmCategories : Film {

public:
	List<Film*> children;

	void ~FilmCategories();

	virtual List<Film*> getChildren() = 0;

	virtual void setChildren(List<Film*> children) = 0;

	virtual FilmIterator* createIterator() = 0;

	virtual string getMetaData() = 0;

	virtual void printMetaData() = 0;

	AbstractFilmCategories();

	virtual void add(Film* child) = 0;

	virtual void remove(Film* child) = 0;

	virtual Film* getChild(int index) = 0;
};

#endif

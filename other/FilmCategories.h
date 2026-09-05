#ifndef FILMCATEGORIES_H
#define FILMCATEGORIES_H

class FilmCategories : AbstractFilmCategories {

public:
	List<Film*> children;

	void ~FilmCategories();

	FilmCategories();

	List<Film*> getChildren();

	void setChildren(List<Film*> children);

	FilmIterator* createIterator();

	string getMetaData();

	void printMetaData();

	void add(Film* child);

	void remove(Film* child);

	Film* getChild(int index);
};

#endif

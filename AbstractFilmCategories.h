#ifndef ABSTRACTFILMCATEGORIES_H
#define ABSTRACTFILMCATEGORIES_H

#include "Film.h"
#include <list>

class FilmIterator;

class AbstractFilmCategories : public Film {
protected:
    std::list<Film*> children;

public:
    AbstractFilmCategories();
    virtual ~AbstractFilmCategories();

    virtual void add(Film* film);
    virtual void remove(Film* film);
    virtual Film* getChild(int index);

    virtual std::list<Film*> getChildren();
    virtual void setChildren(std::list<Film*> children);

    virtual FilmIterator* createIterator() = 0;
};

#endif
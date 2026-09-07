#ifndef ABSTRACTFILMCATEGORIES_H
#define ABSTRACTFILMCATEGORIES_H

#include "Film.h"
#include <list>

class FilmIterator;

class AbstractFilmCategories : public Film
{
protected:
    std::list<Film*> children;

public:
    AbstractFilmCategories();
    virtual ~AbstractFilmCategories();

    virtual std::list<Film*> getChildren();
    virtual void setChildren(std::list<Film*> children);

    virtual FilmIterator* createIterator() = 0;

    virtual void add(Film* child);
    virtual void remove(Film* child);
    virtual Film* getChild(int index);
};

#endif
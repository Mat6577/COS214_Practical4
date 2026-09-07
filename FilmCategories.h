#ifndef FILMCATEGORIES_H
#define FILMCATEGORIES_H

#include "AbstractFilmCategories.h"

class FilmCategories : public AbstractFilmCategories
{
public:
    FilmCategories();
    ~FilmCategories() override;

    std::string getMetaData() override;
    void printMetaData() override;

    FilmIterator* createIterator() override;
};

#endif
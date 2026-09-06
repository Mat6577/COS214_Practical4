#ifndef FILMCATEGORIES_H
#define FILMCATEGORIES_H

#include "AbstractFilmCategories.h"

class FilmCategories : public AbstractFilmCategories {
public:
    FilmCategories();
    ~FilmCategories();

    std::string getMetaData() override;
    void printMetaData() override;

    FilmIterator* createIterator() override;

    void add(Film* film) override;
    void remove(Film* film) override;
    Film* getChild(int index) override;
};

#endif
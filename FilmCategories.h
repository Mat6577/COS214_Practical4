#ifndef FILMCATEGORIES_H
#define FILMCATEGORIES_H

#include "AbstractFilmCategories.h"

class FilmCategories : public AbstractFilmCategories
{
private:
    std::string categoryName;
public:
    FilmCategories(std::string name);
    ~FilmCategories() override;

    std::string getMetaData() override;
    void printMetaData() override;

    FilmIterator* createIterator() override;
    FilmIterator* createStateIterator(const std::string& state);
};

#endif
#ifndef FILMCATEGORYITERATOR_H
#define FILMCATEGORYITERATOR_H

#include "FilmIterator.h"
#include <list>

class FilmCategories;
class Film;

class FilmCategoryIterator: public FilmIterator
{
private:
    const FilmCategories* aggregate;
    std::list<Film*>::const_iterator currentIter;
public:
    explicit FilmCategoryIterator(const FilmCategories* cat);
    ~FilmCategoryIterator() override=default;
    void first() override;
    void next() override;
    bool isDone() const override;
    Film* currentItem() const override;
};
#endif

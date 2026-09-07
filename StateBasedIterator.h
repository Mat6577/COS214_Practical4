#ifndef STATEBASEDITERATOR_H
#define STATEBASEDITERATOR_H

#include "FilmIterator.h"
#include <string>
#include <list>

class FilmCategories;
class Film;

class StateBasedIterator:public FilmIterator
{
private:
    const FilmCategories* aggregate;
    std::string targetState;
    std::list<Film*>::const_iterator currentIter;
    void advanceToNextMatch();
public:
    StateBasedIterator(const FilmCategories* cat, const std::string& state);
    ~StateBasedIterator() override=default;
    void first() override;
    void next() override;
    bool isDone() const override;
    Film* currentItem() const override;
};

#endif
#ifndef FILMITERATOR_H
#define FILMITERATOR_H

class Film;
class FilmIterator
{

public:
    virtual ~FilmIterator()=default;
    virtual void first()=0;
    virtual void next()=0;
    virtual bool isDone() const =0;
    virtual Film* currentItem() const=0;
};
#endif


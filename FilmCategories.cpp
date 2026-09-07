#include "FilmCategories.h"
#include "FilmIterator.h"
#include "FilmCategoryIterator.h"
#include "StateBasedIterator.h"
#include <iostream>

std::string FilmCategories::getMetaData()
{
    return "Film Category";
}

void FilmCategories::printMetaData()
{
    std::cout << getMetaData() << std::endl;
}

FilmIterator* FilmCategories::createIterator()
{
    return new FilmCategoryIterator(this);
}

FilmIterator* FilmCategories::createStateIterator(const std::string& state){
    return new StateBasedIterator(this,state);
 }
#include "FilmCategories.h"
#include "FilmIterator.h"
#include "FilmCategoryIterator.h"
#include "StateBasedIterator.h"
#include <iostream>

FilmCategories::FilmCategories(std::string name)
{
    categoryName = name;
}

FilmCategories::~FilmCategories()
{
}

std::string FilmCategories::getMetaData()
{
    return categoryName;
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
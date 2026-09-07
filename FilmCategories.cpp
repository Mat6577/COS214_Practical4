#include "FilmCategories.h"
#include "FilmIterator.h"
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
    return nullptr;
}
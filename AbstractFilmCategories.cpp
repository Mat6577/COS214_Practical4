#include "AbstractFilmCategories.h"

AbstractFilmCategories::AbstractFilmCategories()
{
}

AbstractFilmCategories::~AbstractFilmCategories()
{
}

void AbstractFilmCategories::add(Film* film)
{
}

void AbstractFilmCategories::remove(Film* film)
{
}

Film* AbstractFilmCategories::getChild(int index)
{
    return nullptr;
}

std::list<Film*> AbstractFilmCategories::getChildren()
{
    return children;
}

void AbstractFilmCategories::setChildren(std::list<Film*> children)
{
    this->children = children;
}
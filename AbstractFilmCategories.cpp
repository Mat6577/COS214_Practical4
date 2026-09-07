#include "AbstractFilmCategories.h"

AbstractFilmCategories::AbstractFilmCategories()
{
}

AbstractFilmCategories::~AbstractFilmCategories()
{
    for(Film* child : children)
    {
        delete child;
    }

    children.clear();
}

std::list<Film*> AbstractFilmCategories::getChildren()
{
    return children;
}

void AbstractFilmCategories::setChildren(std::list<Film*> children)
{
    this->children = children;
}

void AbstractFilmCategories::add(Film* child)
{
    children.push_back(child);
}

void AbstractFilmCategories::remove(Film* child)
{
    children.remove(child);
}

Film* AbstractFilmCategories::getChild(int index)
{
    if(index < 0)
    {
        return nullptr;
    }

    auto it = children.begin();

    for(int i = 0; i < index && it != children.end(); i++)
    {
        ++it;
    }

    if(it == children.end())
    {
        return nullptr;
    }

    return *it;
}

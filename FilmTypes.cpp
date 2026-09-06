#include "FilmTypes.h"
#include "States.h"
#include <iostream>

// FilmTypes

FilmTypes::FilmTypes()
    : state(nullptr)
{
}

FilmTypes::~FilmTypes()
{
    delete state;
}

void FilmTypes::setState(States* state)
{
    this->state = state;
}

States* FilmTypes::getState()
{
    return state;
}

// LiveActionFilm

LiveActionFilm::LiveActionFilm()
{
}

std::string LiveActionFilm::getMetaData()
{
    return "";
}

void LiveActionFilm::printMetaData()
{
}

// AnimatedFilm

AnimatedFilm::AnimatedFilm()
{
}

std::string AnimatedFilm::getMetaData()
{
    return "";
}

void AnimatedFilm::printMetaData()
{
}

// ShortFilm

ShortFilm::ShortFilm()
{
}

std::string ShortFilm::getMetaData()
{
    return "";
}

void ShortFilm::printMetaData()
{
}

// IndependentFilm

IndependentFilm::IndependentFilm()
{
}

std::string IndependentFilm::getMetaData()
{
    return "";
}

void IndependentFilm::printMetaData()
{
}

// BlockbusterFilm

BlockbusterFilm::BlockbusterFilm()
{
}

std::string BlockbusterFilm::getMetaData()
{
    return "";
}

void BlockbusterFilm::printMetaData()
{
}
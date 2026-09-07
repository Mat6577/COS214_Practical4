#include "FilmTypes.h"
#include "States.h"
#include <iostream>

// FilmTypes

FilmTypes::FilmTypes()
    : state(new Development())
{
}

FilmTypes::~FilmTypes()
{
    delete state;
}

void FilmTypes::setState(States* state)
{
    delete this->state;
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
    return "Live Action Film";
}

void LiveActionFilm::printMetaData()
{
    std::cout << getMetaData() << std::endl;
}

// AnimatedFilm 

AnimatedFilm::AnimatedFilm()
{
}

std::string AnimatedFilm::getMetaData()
{
    return "Animated Film";
}

void AnimatedFilm::printMetaData()
{
    std::cout << getMetaData() << std::endl;
}

// ShortFilm

ShortFilm::ShortFilm()
{
}

std::string ShortFilm::getMetaData()
{
    return "Short Film";
}

void ShortFilm::printMetaData()
{
    std::cout << getMetaData() << std::endl;
}

// IndependentFilm 

IndependentFilm::IndependentFilm()
{
}

std::string IndependentFilm::getMetaData()
{
    return "Independent Film";
}

void IndependentFilm::printMetaData()
{
    std::cout << getMetaData() << std::endl;
}

// BlockbusterFilm

BlockbusterFilm::BlockbusterFilm()
{
}

std::string BlockbusterFilm::getMetaData()
{
    return "Blockbuster Film";
}

void BlockbusterFilm::printMetaData()
{
    std::cout << getMetaData() << std::endl;
}
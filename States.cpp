#include "States.h"
#include "FilmTypes.h"
#include <iostream>

// Development

void Development::printState()
{
    std::cout << "Development" << std::endl;
}

std::string Development::getStateInformation()
{
    return "Development";
}

void Development::changeState(FilmTypes* film)
{
    film->setState(new Production());
}

// Production

void Production::printState()
{
    std::cout << "Production" << std::endl;
}

std::string Production::getStateInformation()
{
    return "Production";
}

void Production::changeState(FilmTypes* film)
{
    film->setState(new Distribution());
}

//  Distribution 

void Distribution::printState()
{
    std::cout << "Distribution" << std::endl;
}

std::string Distribution::getStateInformation()
{
    return "Distribution";
}

void Distribution::changeState(FilmTypes* film)
{
    // Final state
}
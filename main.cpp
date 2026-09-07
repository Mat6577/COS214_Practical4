#include <iostream>

#include "FilmCategories.h"
#include "States.h"
#include "FilmTypes.h"
#include "Drama.h"
#include "Comedy.h"
#include "Horror.h"
#include "Thriller.h"
#include "Romance.h"
#include "FilmCategoryIterator.h"
#include "StateBasedIterator.h"

int main()
{
    std::cout << "========== TASKFORGE TEST ==========\n" << std::endl;

    // Categories
    FilmCategories* comedyCollection =
        new FilmCategories("Comedy Collection");

    FilmCategories* featuredCollection =
        new FilmCategories("Featured Collection");

    // Films
    ShortFilm* shortFilm = new ShortFilm();
    AnimatedFilm* animatedFilm = new AnimatedFilm();
    BlockbusterFilm* blockbusterFilm = new BlockbusterFilm();

    // Add films
    comedyCollection->add(shortFilm);
    comedyCollection->add(animatedFilm);
    comedyCollection->add(blockbusterFilm);

    std::cout << "=== CATEGORY INFO ===" << std::endl;
    comedyCollection->printMetaData();

    std::cout << "\n=== ALL FILMS ===" << std::endl;

    FilmIterator* allFilms =
        comedyCollection->createIterator();

    for(allFilms->first();
        !allFilms->isDone();
        allFilms->next())
    {
        Film* current = allFilms->currentItem();

        if(current)
        {
            current->printMetaData();
        }
    }

    delete allFilms;

    std::cout << "\n=== STATE TRANSITION ===" << std::endl;

    std::cout << "Before: ";
    shortFilm->getState()->printState();

    shortFilm->getState()->changeState(shortFilm);

    std::cout << "After: ";
    shortFilm->getState()->printState();

    std::cout << "\n=== PRODUCTION FILMS ===" << std::endl;

    FilmIterator* productionIterator =
        comedyCollection->createStateIterator("Production");

    for(productionIterator->first();
        !productionIterator->isDone();
        productionIterator->next())
    {
        Film* current = productionIterator->currentItem();

        if(current)
        {
            current->printMetaData();
        }
    }

    delete productionIterator;

    std::cout << "\n=== MOVING FILM ===" << std::endl;

    comedyCollection->remove(animatedFilm);
    featuredCollection->add(animatedFilm);

    std::cout << "\nComedy Collection:" << std::endl;

    FilmIterator* comedyIterator =
        comedyCollection->createIterator();

    for(comedyIterator->first();
        !comedyIterator->isDone();
        comedyIterator->next())
    {
        Film* current = comedyIterator->currentItem();

        if(current)
        {
            current->printMetaData();
        }
    }

    delete comedyIterator;

    std::cout << "\nFeatured Collection:" << std::endl;

    FilmIterator* featuredIterator =
        featuredCollection->createIterator();

    for(featuredIterator->first();
        !featuredIterator->isDone();
        featuredIterator->next())
    {
        Film* current = featuredIterator->currentItem();

        if(current)
        {
            current->printMetaData();
        }
    }

    delete featuredIterator;

    delete comedyCollection;
    delete featuredCollection;

    std::cout << "\n========== END OF DEMO ==========" << std::endl;

    return 0;
}
#include <iostream>

#include "FilmCategories.h"
#include "FilmTypes.h"
#include "States.h"

#include "Comedy.h"
#include "Drama.h"
#include "Horror.h"
#include "Thriller.h"
#include "Romance.h"

#include "FilmIterator.h"

int main()
{
    std::cout << "========== TASKFORGE DEMO ==========\n" << std::endl;

    // =====================================================
    // CREATE CATEGORIES
    // =====================================================

    FilmCategories* comedyCollection =
        new FilmCategories("Comedy Collection");

    FilmCategories* featuredCollection =
        new FilmCategories("Featured Collection");

    // =====================================================
    // CREATE FILMS
    // =====================================================

    ShortFilm* shortFilm = new ShortFilm();
    AnimatedFilm* animatedFilm = new AnimatedFilm();
    BlockbusterFilm* blockbusterFilm = new BlockbusterFilm();

    // =====================================================
    // DECORATORS / GENRES
    // =====================================================

    std::cout << "=== GENRE INFORMATION ===" << std::endl;

    Comedy comedy(shortFilm);
    Horror horror(blockbusterFilm);
    Romance romance(animatedFilm);

    std::cout << "\nComedy Metadata:\n";
    comedy.printMetaData();

    std::cout << "\nHorror Metadata:\n";
    horror.printMetaData();

    std::cout << "\nRomance Metadata:\n";
    romance.printMetaData();

    // =====================================================
    // COMPOSITE
    // =====================================================

    comedyCollection->add(shortFilm);
    comedyCollection->add(animatedFilm);
    comedyCollection->add(blockbusterFilm);

    std::cout << "\n=== CATEGORY INFORMATION ===" << std::endl;
    comedyCollection->printMetaData();

    // =====================================================
    // ITERATOR 1
    // =====================================================

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

    // =====================================================
    // STATE PATTERN
    // =====================================================

    std::cout << "\n=== FILM LIFECYCLE ===" << std::endl;

    std::cout << "\nShort Film State:" << std::endl;

    std::cout << "Current State: ";
    shortFilm->getState()->printState();

    shortFilm->getState()->changeState(shortFilm);

    std::cout << "After First Transition: ";
    shortFilm->getState()->printState();

    shortFilm->getState()->changeState(shortFilm);

    std::cout << "After Second Transition: ";
    shortFilm->getState()->printState();

    // Animated film into Production
    animatedFilm->getState()->changeState(animatedFilm);

    // =====================================================
    // ITERATOR 2
    // =====================================================

    std::cout << "\n=== PRODUCTION FILMS ===" << std::endl;

    FilmIterator* productionIterator =
        comedyCollection->createStateIterator("Production");

    for(productionIterator->first();
        !productionIterator->isDone();
        productionIterator->next())
    {
        Film* current =
            productionIterator->currentItem();

        if(current)
        {
            current->printMetaData();
        }
    }

    delete productionIterator;

    // =====================================================
    // RUNTIME MODIFICATION
    // =====================================================

    std::cout << "\n=== MOVING FILM ===" << std::endl;

    comedyCollection->remove(animatedFilm);
    featuredCollection->add(animatedFilm);

    // =====================================================
    // TRAVERSE AGAIN
    // =====================================================

    std::cout << "\n=== COMEDY COLLECTION ===" << std::endl;

    FilmIterator* comedyIterator =
        comedyCollection->createIterator();

    for(comedyIterator->first();
        !comedyIterator->isDone();
        comedyIterator->next())
    {
        Film* current =
            comedyIterator->currentItem();

        if(current)
        {
            current->printMetaData();
        }
    }

    delete comedyIterator;

    std::cout << "\n=== FEATURED COLLECTION ===" << std::endl;

    FilmIterator* featuredIterator =
        featuredCollection->createIterator();

    for(featuredIterator->first();
        !featuredIterator->isDone();
        featuredIterator->next())
    {
        Film* current =
            featuredIterator->currentItem();

        if(current)
        {
            current->printMetaData();
        }
    }

    delete featuredIterator;

    // =====================================================
    // CLEANUP
    // =====================================================

    delete comedyCollection;
    delete featuredCollection;

    std::cout
        << "\n========== END OF DEMO =========="
        << std::endl;

    return 0;
}
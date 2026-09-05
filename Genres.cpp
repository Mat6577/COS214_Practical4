#include "Genres.h"

Genres::Genres() : film(nullptr) {}				// Constructor

Genres::~Genres()
{
	delete film;					// Null check for the destructor
}

/**
 * @brief A getter for the Abstract Genres
 * @return film of the genre or a nullptr
 */ 
Film *Genres::getFilm()
{
    return (this->film)? film : nullptr;
}

/**
 * @brief A method used to link one decorator to either a leaf or another decorator
 * @param film Only parameter
 */
void Genres::setFilm(Film *film)
{
	if (film) {
		std::cout << "Cannot assign a genre which has been appended to another film";			
		return;
	}
	this->film = film;
}

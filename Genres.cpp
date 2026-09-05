#include "Genres.h"

Genres::Genres() : film(nullptr) {}				// Constructor

Genres::~Genres()
{
	delete film;					// Null check for the destructor
}

/// @brief A method used to link one decorator to either a leaf or another decorator
/// @param film 
void Genres::setFilm(Film *film)
{
	if (film != nullptr) {
		std::cout << "Cannot assign a genre which has been appended to another film";			
		return;
	}
	this->film = film;
}

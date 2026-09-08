#include "Thriller.h"

/**
 * @brief This is used to get information regarding the thriller genre. It will be appended to the movie print.
 * @return It return a string
 */
std::string Thriller::getMetaData() {
	std::string string = "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	string += "+ Age_Classification:                                                     15  +\n";
	string += "+ Content_Advisories:                          Intense Psychological Tension  +\n";
	string += "+                                                   Strong Suspense & Threat  +\n";
	string += "+ Scare_Factor_Rating:                                                7 / 10  +\n";
	string += "+ sub_Genre:                     Psychological Thriller / Neo-Noir / Mystery  +\n";
	string += "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

	return string;
}

/**
 * @brief Used to print the information it receives from the get method
 */
void Thriller::printMetaData() {
	std::cout << this->getMetaData();
}

Thriller::Thriller(Film* film) 
	: Genres(film) {}




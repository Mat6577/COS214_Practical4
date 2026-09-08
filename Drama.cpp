#include "Drama.h"

/**
 * @brief This is used to get information regarding the drama genre. It will be appended to the movie print.
 * @return It return a string
 */
std::string Drama::getMetaData() {
	std::string string = "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	string += "+ Age_Classification:                                                     PG  +\n";
	string += "+ Content_Advisories:                                       Emotional Themes  +\n";
	string += "+                                                       Mild Mature Elements  +\n";
	string += "+ Scare_Factor_Rating:                                                1 / 10  +\n";
	string += "+ sub_Genre:                        Melodrama / Coming-of-Age / Biographical  +\n";
	string += "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	return string;
}


/**
 * @brief Used to print the information it receives from the get method
 */
void Drama::printMetaData() {	
	std::cout << this->getMetaData();
}

Drama::Drama(Film* film) 
	: Genres(film) {}

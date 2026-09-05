#include "Romance.h"

/**
 * @brief This is used to get information regarding the romance genre. It will be appended to the movie print.
 * @return It return a string
 */
std::string Romance::getMetaData() {
	std::string string = "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	string += "+ Age_Classification:                                                  PG-13 +\n";
	string += "+ Content_Advisories:                                       Sensual Contente  +\n";
	string += "+                                          Romantic Dialogue & Mild Language  +\n";
	string += "+ Scare_Factor_Rating:                                                0 / 10  +\n";
	string += "+ sub_Genre:               Contemporary Romance / Historical Drama / Rom-Com  +\n";
	string += "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

	return string;
}

/**
 * @brief Used to print the information it receives from the get method
 */
void Romance::printMetaData() {
	std::cout << this->getMetaData();
}

Romance::Romance() {};


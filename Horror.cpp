#include "Horror.h"

/**
 * @brief This is used to get information regarding the horror genre. It will be appended to the movie print.
 * @return It return a string
 */
std::string Horror::getMetaData() {
	std::string string = "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	string += "+ Age_Classification:                                                     18  +\n";
	string += "+ Content_Advisories:                                        Severe Violence  +\n";
	string += "+                                                            Strong Language  +\n";
	string += "+ Scare_Factor_Rating:                                               12 / 10  +\n";
	string += "+ sub_Genre:                                Slasher / Splatter / Gore Fiesta  +\n";
	string += "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	return string;
}

/**
 * @brief Used to print the information it receives from the get method
 */
void Horror::printMetaData() {
	std::cout << this->getMetaData();
}

Horror::Horror() {}

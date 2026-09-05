#include "Comedy.h"

/**
 * @brief This is used to get information regarding the comedy genre. It will be appended to the movie print.
 * @return It return a string
 */
std::string Comedy::getMetaData() {
	std::string string = "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	string += "+ Age_Classification:                                            12A / PG-13  +\n";
	string += "+ Content_Advisories:                                           Crude Humour  +\n";
	string += "+                                              Moderate Infrequent Profanity  +\n";
	string += "+ Scare_Factor_Rating:                                                0 / 10  +\n";
	string += "+ sub_Genre:                                    Slapstick / Rom-Com / Satire  +\n";
	string += "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	return string;
}

/**
 * @brief Used to print the information it receives from the get method
 */
void Comedy::printMetaData() {
	std::cout << this->getMetaData();
}

Comedy::Comedy() {}

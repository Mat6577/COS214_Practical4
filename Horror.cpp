#include "Horror.h"

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

void Horror::printMetaData() {
	std::cout << this->getMetaData();
}

Horror::Horror() {}

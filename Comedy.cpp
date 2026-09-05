#include "Comedy.h"

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

void Comedy::printMetaData() {
	std::cout << this->getMetaData();
}

Comedy::Comedy() {}

#include "Thriller.h"

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

void Thriller::printMetaData() {
	std::cout << this->getMetaData();
}

Thriller::Thriller() {}




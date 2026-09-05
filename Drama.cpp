#include "Drama.h"

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

void Drama::printMetaData() {	
	std::cout << this->getMetaData();
}

Drama::Drama() {}

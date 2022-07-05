#include <iostream>
#include "CountryList.h"

int main()
{
	CountryList list;
	Country* c;

	list.addCountry(Country("aaa"));
	list.addCountry(Country("bbb"));

	c = list.getCountryByName("aaa");

	if (c) {
		std::cout << c->getName() << std::endl;
	}
	else {
		std::cerr << "Not found" << std::endl;
	}

	return 0;
}

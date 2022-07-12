
#ifndef __COUNTRYLIST__
#define __COUNTRYLIST__

#include <iostream>
#include <list>
#include "Country.h"

class CountryList
{
private:
	std::list<Country> *countries;

public:
	CountryList();
	~CountryList();

	void addCountry(Country new_country);
	bool removeCountry(std::string cname);
	void clearList();

	const std::list<Country>* getCountries() const;
	Country* getCountryByName(std::string cname) const;
};

#endif // !__COUNTRYLIST__


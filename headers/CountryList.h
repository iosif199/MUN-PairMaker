
#ifndef __COUNTRYLIST_H__
#define __COUNTRYLIST_H__

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

	const std::list<Country>* getCountries() const;
	Country* getCountryByName(std::string cname);
};

#endif // !__COUNTRYLIST_H__


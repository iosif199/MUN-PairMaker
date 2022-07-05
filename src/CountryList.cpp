#include "CountryList.h"

CountryList::CountryList()
{
	this->countries = new std::list<Country>();
}

CountryList::~CountryList()
{
	delete this->countries;
}

void CountryList::addCountry(Country new_country)
{
	this->countries->push_back(new_country);
}

bool CountryList::removeCountry(std::string cname)
{
	for (auto i = this->countries->begin(); i != this->countries->end(); ++i) {
		if (i->getName()._Equal(cname)) {
			this->countries->erase(i);
			return true;
		}
	}

	return false;
}

const std::list<Country>* CountryList::getCountries() const
{
	return this->countries;
}

Country* CountryList::getCountryByName(std::string cname)
{
	for (auto i = this->countries->begin(); i != this->countries->end(); ++i) {
		if (i->getName()._Equal(cname)) {
			return &(*i);
		}
	}

	return nullptr;
}

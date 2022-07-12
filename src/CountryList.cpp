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

/**
 * @brief Removes a country with the given name
 * 
 * @param cname The country's name to be removed
 * @return true The country was removed successfully
 * @return false There wasn't a country with the given name
 */
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

void CountryList::clearList()
{
	this->countries->clear();
}

const std::list<Country>* CountryList::getCountries() const
{
	return this->countries;
}

/**
 * @brief Searches for a country with the given name
 * 
 * @param cname The country's name we are searching
 * @return Country* A pointer to the requested country, or nullptr if the country does not exist
 */
Country* CountryList::getCountryByName(std::string cname) const
{
	for (auto i = this->countries->begin(); i != this->countries->end(); ++i) {
		if (i->getName()._Equal(cname)) {
			return &(*i);
		}
	}

	return nullptr;
}

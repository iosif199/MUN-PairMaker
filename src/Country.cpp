#include "Country.h"

Country::Country(std::string name)
{
    this->name = name;
}

Country::~Country()
{
}

std::string Country::getName() const
{
    return this->name;
}

void Country::setName(std::string name)
{
    this->name = name;
}

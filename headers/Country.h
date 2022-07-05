
#ifndef __COUNTRY_H__
#define __COUNTRY_H__

#include <iostream>

class Country
{
private:
	std::string name;

public:
	Country(std::string name);
	~Country();

	std::string getName();
	void setName(std::string name);

};

#endif // !__COUNTRY_H__

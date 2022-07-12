
#ifndef __COUNTRY__
#define __COUNTRY__

#include <iostream>

class Country
{
private:
	std::string name;

public:
	Country(std::string name);
	~Country();

	std::string getName() const;
	void setName(std::string name);

};

#endif // !__COUNTRY__

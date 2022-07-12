
#ifndef __PARTICIPANT__
#define __PARTICIPANT__

#include <iostream>

class Participant
{
private:
	std::string name;

public:
	Participant(std::string name);
	~Participant();

	std::string getName() const;
	void setName(std::string name);
};


#endif // !__PARTICIPANT__


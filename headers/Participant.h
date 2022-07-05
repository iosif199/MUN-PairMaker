
#ifndef __PARTICIPANT_H__
#define __PARTICIPANT_H__

#include <iostream>

class Participant
{
private:
	std::string name;

public:
	Participant(std::string name);
	~Participant();

	std::string getName();
	void setName(std::string name);
};


#endif // !__PARTICIPANT_H__


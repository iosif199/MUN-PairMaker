
#ifndef __PARTICIPANTLIST_H__
#define __PARTICIPANTLIST_H__

#include <iostream>
#include <list>
#include "Participant.h"

class ParticipantList
{
private:
	std::list<Participant>* participants;

public:
	ParticipantList();
	~ParticipantList();

	void addParticipant(Participant new_participant);
	bool removeParticipant(std::string pname);

	Participant* getParticipantByName(std::string pname);
};


#endif // !__PARTICIPANTLIST_H__



#ifndef __PARTICIPANTLIST__
#define __PARTICIPANTLIST__

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
	void clearList();

	const std::list<Participant>* getParticipants() const;
	Participant* getParticipantByName(std::string pname);
};


#endif // !__PARTICIPANTLIST__


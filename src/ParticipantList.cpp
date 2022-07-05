#include "ParticipantList.h"

ParticipantList::ParticipantList()
{
	this->participants = new std::list<Participant>();
}

ParticipantList::~ParticipantList()
{
	delete this->participants;
}

void ParticipantList::addParticipant(Participant new_participant)
{
	this->participants->push_back(new_participant);
}

bool ParticipantList::removeParticipant(std::string pname)
{
	for (auto i = this->participants->begin(); i != this->participants->end(); ++i) {
		if (i->getName()._Equal(pname)) {
			this->participants->erase(i);
			return true;
		}
	}

	return false;
}

Participant* ParticipantList::getParticipantByName(std::string pname)
{
	for (auto i = this->participants->begin(); i != this->participants->end(); ++i) {
		if (i->getName()._Equal(pname)) {
			return &(*i);
		}
	}

	return nullptr;
}

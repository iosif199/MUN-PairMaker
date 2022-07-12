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

void ParticipantList::clearList()
{
	this->participants->clear();
}

const std::list<Participant>* ParticipantList::getParticipants() const
{
	return this->participants;
}

/**
 * @brief Finds and returns a participant, according to his name
 * 
 * @param pname The participant's name
 * @return Participant* A pointer to the participant, or nullptr if he does not exist
 */
Participant* ParticipantList::getParticipantByName(std::string pname)
{
	for (auto i = this->participants->begin(); i != this->participants->end(); ++i) {
		if (i->getName()._Equal(pname)) {
			return &(*i);
		}
	}

	return nullptr;
}

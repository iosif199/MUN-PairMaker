#include "Participant.h"

Participant::Participant(std::string name)
{
	this->name = name;
}

Participant::~Participant()
{
}

std::string Participant::getName()
{
	return this->name;
}

void Participant::setName(std::string name)
{
	this->name = name;
}

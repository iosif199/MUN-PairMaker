#include "PairMaker.h"

PairMaker::PairMaker()
{
	this->country_names = new std::list<std::string>();
	this->participant_names = new std::list<std::string>();
	this->pairs = new std::map<std::string, std::string>();
}

PairMaker::~PairMaker()
{
	delete this->country_names;
	delete this->participant_names;
	delete this->pairs;
}

void PairMaker::addCountry(std::string cname)
{
	this->country_names->push_back(cname);
}

void PairMaker::addParticipant(std::string pname)
{
	this->participant_names->push_back(pname);
}

void PairMaker::removeCountry(std::string cname)
{
	this->country_names->remove(cname);
}

void PairMaker::removeParticipant(std::string pname)
{
	this->participant_names->remove(pname);
}

void PairMaker::generatePairs()
{
}

std::map<std::string, std::string> PairMaker::getPairs()
{
	return *this->pairs;
}

void PairMaker::writePairsToXML()
{
}

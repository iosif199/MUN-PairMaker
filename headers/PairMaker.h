
#ifndef __PAIRMAKER__
#define __PAIRMAKER__

#include <iostream>
#include <list>
#include <map>
#include <ctime>
#include <fstream>
#include "CountryList.h"
#include "ParticipantList.h"
#include "pugixml.hpp"


class PairMaker
{
private:
	std::list<std::string> *country_names;
	std::list<std::string> *participant_names;
	std::map<std::string, std::string> *pairs;

public:
	PairMaker();
	PairMaker(const CountryList* clist, const ParticipantList* plist);
	~PairMaker();

	void addCountry(std::string cname);
	void addCountriesFromCList(CountryList* lst);

	void addParticipant(std::string pname);
	void addParticipantsFromPList(ParticipantList* lst);

	void removeCountry(std::string cname);
	void removeParticipant(std::string pname);

	void generatePairs();
	std::map<std::string, std::string> getPairs();
	
	void writePairsToCSV(std::string fname, const char* separator = ",");
	void writePairsToXML(std::string fname);
};


#endif // !__PAIRMAKER__

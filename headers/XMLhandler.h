
#ifndef __XMLHANDLER__
#define __XMLHANDLER__

#include <iostream>
#include <map>
#include <ctime>
#include "pugixml.hpp"
#include "ParticipantList.h"
#include "CountryList.h"

class XMLhandler
{
public:
	static void writePairs(std::string fname, std::map<std::string, std::string>* pairs);

	static void loadCountriesFromXML(const char* fname, CountryList* clist);
	static void saveCountriesToXML(const char* fname, CountryList* clist);
	static void loadParticipantsFromXML(const char* fname, ParticipantList* plist);
	static void saveParticipantsToXML(const char* fname, ParticipantList* plist);
};


#endif // !__XMLHANDLER__

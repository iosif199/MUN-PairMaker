
#ifndef __PAIRMAKER_H__
#define __PAIRMAKER_H__

#include <iostream>
#include <list>
#include <map>

class PairMaker
{
private:
	std::list<std::string> *country_names;
	std::list<std::string> *participant_names;
	std::map<std::string, std::string> *pairs;

public:
	PairMaker();
	~PairMaker();

	void addCountry(std::string cname);
	void addParticipant(std::string pname);

	void removeCountry(std::string cname);
	void removeParticipant(std::string pname);

	void generatePairs();
	std::map<std::string, std::string> getPairs();
	void writePairsToXML();
};


#endif // !__PAIRMAKER_H__

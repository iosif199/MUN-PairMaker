#include <iostream>
#include "CountryList.h"
#include "ParticipantList.h"
#include "PairMaker.h"

int main()
{
	CountryList list;
	ParticipantList plist;
	PairMaker pairs;

	list.addCountry(Country("aaa"));
	list.addCountry(Country("bbb"));
	list.addCountry(Country("ccc"));
	list.addCountry(Country("ddd"));
	list.addCountry(Country("eee"));

	plist.addParticipant(Participant("111"));
	plist.addParticipant(Participant("222"));
	plist.addParticipant(Participant("333"));
	plist.addParticipant(Participant("444"));

	pairs.addCountriesFromCList(&list);
	pairs.addParticipantsFromPList(&plist);
	pairs.generatePairs();

	for (const auto pair : pairs.getPairs()) {
		std::cout << pair.first << '\t' << pair.second << '\n';
	}

	pairs.writePairsToXML("test.xml");
	pairs.writePairsToCSV("example.csv");

	return 0;
}

#include "PairMaker.h"

/**
 * @brief Construct a new empty PairMaker object
 * 
 */
PairMaker::PairMaker()
{
	this->country_names		= new std::list<std::string>();
	this->participant_names	= new std::list<std::string>();
	this->pairs				= new std::map<std::string, std::string>();
}

/**
 * @brief Construct a new Pair Maker:: Pair Maker object
 * 
 * @param clist 
 * @param plist 
 */
PairMaker::PairMaker(const CountryList* clist, const ParticipantList* plist)
{
	this->country_names = new std::list<std::string>();
	for (auto c : *clist->getCountries()) {
		this->country_names->push_back(c.getName());
	}

	this->participant_names = new std::list<std::string>();
	for (auto p : *plist->getParticipants()) {
		this->participant_names->push_back(p.getName());
	}

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

void PairMaker::addCountriesFromCList(CountryList* lst)
{
	for (auto country : *lst->getCountries()) {
		this->addCountry(std::string(country.getName()));
	}
}

void PairMaker::addParticipant(std::string pname)
{
	this->participant_names->push_back(pname);
}

void PairMaker::addParticipantsFromPList(ParticipantList* lst)
{
	for (auto participant : *lst->getParticipants()) {
		this->addParticipant(std::string(participant.getName()));
	}
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
	// Check if the countries have been initialized
	if (this->country_names->empty()) {
		throw std::runtime_error("There are no countries to be paired.");
	}

	// Check if the participants have been initialized
	if (this->participant_names->empty()) {
		throw std::runtime_error("There are no participants to be paired with the countries.");
	}

	// Check if the pairs can be made
	if (this->country_names->size() < this->participant_names->size()) {
		throw std::runtime_error("There are more participants than countries.");
	}

	//
	// All checks were successful, make the pairs
	//

	// Make a copy of the participants and countries
	std::list<std::string> countries(*this->country_names);
	std::list<std::string> participants(*this->participant_names);

	// Iterators which will hold the selected country and participant
	std::list<std::string>::iterator selected_country, selected_participant;

	int c_index, p_index;
	while (!participants.empty()) {
		// Get random indexes
		c_index = rand() % countries.size();
		p_index = rand() % participants.size();

		// Select the country and participant from the random index
		selected_country = countries.begin();
		selected_participant = participants.begin();
		std::advance(selected_country, c_index);
		std::advance(selected_participant, p_index);

		// Add the pair in the map
		this->pairs->insert(std::pair<std::string, std::string>(
			*selected_country, *selected_participant
		));

		// Remove the country/participant from the temporary lists
		countries.remove(*selected_country);
		participants.remove(*selected_participant);
	}
}

std::map<std::string, std::string> PairMaker::getPairs()
{
	return *this->pairs;
}

/**
 * @brief Exports the pairs in a CSV file
 * 
 * @param fname The file's name to export the pairs
 * @param separator The separator for the fields. By default is ",", but Microsoft Excel uses ";"
 */
void PairMaker::writePairsToCSV(std::string fname, const char* separator)
{
	std::ofstream output_csv(fname);

	output_csv << "sep=" << separator << std::endl;

	output_csv << "Country" << separator << "Participant" << std::endl;

	for (const auto pair : *this->pairs) {
		output_csv << pair.first << separator << pair.second << std::endl;
	}

	output_csv.close();
}

/**
 * @brief Exports the pairs in an XML file
 * 
 * @param fname The file's name to export the pairs
 */
void PairMaker::writePairsToXML(std::string fname)
{
	pugi::xml_document doc;

	pugi::xml_node pairs_node = doc.append_child("mun_pairmaker").append_child("pairs");

	for (const auto p : *this->pairs) {
		pugi::xml_node pair = pairs_node.append_child("pair");
		pair.append_attribute("country") = p.first.c_str();
		pair.append_attribute("participant") = p.second.c_str();
	}

	doc.save_file(fname.c_str(), "\t", 1U, pugi::encoding_utf8);
}

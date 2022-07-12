#include "XMLhandler.h"

void XMLhandler::writePairs(std::string fname, std::map<std::string, std::string>* pairs)
{

}

/**
 * @brief Loads the countries from a given XML. It checks for duplicates, and if it finds any, it will keep only the first one
 * 
 * @param fname The XML's file name containing the countries
 * @param clist A country list to store the loaded countries
 */
void XMLhandler::loadCountriesFromXML(const char* fname, CountryList* clist)
{
	pugi::xml_document doc;

	if (!doc.load_file(fname)) {
		throw std::runtime_error("Cannot open the selected file.");
	}

	pugi::xml_node countries = doc.child("mun_pairmaker").child("countries");

	if (!countries.child("country")) {
		throw std::runtime_error("The selected file is improperly formated");
	}

	for (pugi::xml_node country = countries.child("country"); country; country = country.next_sibling("country")) {
		if (!clist->getCountryByName(country.attribute("name").value())) {
			clist->addCountry(Country(country.attribute("name").value()));
		}
	}
}

/**
 * @brief Saves a country list in an XML file
 * 
 * @param fname The XML's file name
 * @param clist The country list to be stored in the XML
 */
void XMLhandler::saveCountriesToXML(const char* fname, CountryList* clist)
{
	pugi::xml_document doc;
	time_t curr_time = time(NULL);

	pugi::xml_node root_node = doc.append_child("mun_pairmaker");
	pugi::xml_node countries_node = root_node.append_child("countries");

	for (const auto& c : *clist->getCountries()) {
		pugi::xml_node country = countries_node.append_child("country");
		country.append_attribute("name") = c.getName().c_str();
	}

	// An alternative file naming scheme
	/*
	std::string str = fname;
	str += '\\';
	str += std::to_string((intmax_t)curr_time);
	str += ".xml";
	*/

	doc.save_file(fname, "\t", 1U, pugi::encoding_utf8);
}

/**
 * @brief Loads the participants from a given XML. It checks for duplicates, and if it finds any, it will keep only the first one
 * 
 * @param fname The XML's file name containing the participants
 * @param clist A country list to store the loaded participants
 */
void XMLhandler::loadParticipantsFromXML(const char* fname, ParticipantList* plist)
{
	pugi::xml_document doc;

	if (!doc.load_file(fname)) {
		throw std::runtime_error("Cannot open the selected file.");
	}

	pugi::xml_node participants = doc.child("mun_pairmaker").child("participants");

	if (!participants.child("participant")) {
		throw std::runtime_error("The selected file is improperly formated");
	}

	for (pugi::xml_node participant = participants.child("participant");
		 participant;
		 participant = participant.next_sibling("participant")
	) {
		if (!plist->getParticipantByName(participant.attribute("name").value())) {
			plist->addParticipant(Participant(participant.attribute("name").value()));
		}
	}
}

/**
 * @brief Saves a participant list in an XML file
 * 
 * @param fname The XML's file name
 * @param clist The participant list to be stored in the XML
 */
void XMLhandler::saveParticipantsToXML(const char* fname, ParticipantList* plist)
{
	pugi::xml_document doc;

	pugi::xml_node root_node = doc.append_child("mun_pairmaker");
	pugi::xml_node participants_node = root_node.append_child("participants");

	for (const auto& p : *plist->getParticipants()) {
		pugi::xml_node participant = participants_node.append_child("participant");
		participant.append_attribute("name") = p.getName().c_str();
	}

	doc.save_file(fname, "\t", 1U, pugi::encoding_utf8);
}

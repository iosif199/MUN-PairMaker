
#ifndef __XMLHANDLER_H__
#define __XMLHANDLER_H__

#include <iostream>
#include <map>
#include "pugixml.hpp"

class XMLhandler
{
public:
	static void writePairs(std::string fname, std::map<std::string, std::string>* pairs);
};


#endif // !__XMLHANDLER_H__

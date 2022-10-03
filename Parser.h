#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <sstream>

template<typename T>
class Parser {
private: 
	std::istream& istr;
	std::string& stopLine;
public:
	Parser(std::istream& istr, std::string& stopLine) : istr(istr), stopLine(stopLine) {};
	bool readNext(T& next) {
		std::string line;
		std::getline(istr, line)
		if (line!=stopLine)
		{
			std::istringstream lineIn(line);
			lineIn >> next;
			return true;
		}
		else
		{
			return false;
		}
	}
};
#endif // !PARSER_H

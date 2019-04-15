#pragma once
#include <string>

class person{
private:
	std::string first_name;
	std::string last_name;

protected:
	std::string age;

public:
	person(std::string,std::string,std::string);
	~person();

	std::string getfirst_name();
	std::string getlast_name();

	void setfirst_name(std::string);
	void setlast_name(std::string);

	void printInformation();
};
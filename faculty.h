#pragma once

#include "person.h"
#include <string>

class faculty: public person{
private:
	int course_count;
	std::string ext_num;

public:
	faculty(std::string first_name,std::string last_name,std::string age, int course_count, std::string ext_num);
	~faculty();

	int getcourse_count();
	std::string getext_num();

	void setcourse_count(int);
	void setext_num(std::string);

	void printFaculty();
};
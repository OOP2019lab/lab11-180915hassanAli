#pragma once

#include "person.h"
#include <string>

class student: public person{
private:
	std::string fyp_name;
	float cgpa;

public:
	student(std::string first_name,std::string last_name,std::string age, std::string fyp_name,float cgpa);
	~student();

	std::string getfyp_name();
	float getcgpa();

	void setfyp_name(std::string);
	void setcgpa(float);

	void student::printStudent();
};
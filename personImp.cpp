#include "person.h"
#include <iostream>

person::person(std::string first_name,std::string last_name,std::string age):first_name(first_name),last_name(last_name),age(age){
	std::cout<<"constructor of person called"<<std::endl;
}

person::~person(){
	std::cout<<"destructor of person called"<<std::endl;
}

std::string person::getfirst_name(){
	return first_name;
}
std::string person::getlast_name(){
	return last_name;
}

void person::setfirst_name(std::string str){
	first_name=str;
}
void person::setlast_name(std::string str){
	last_name=str;
}

void person::printInformation(){
	std::cout<<first_name<<" "<<last_name<<" is "<<age<<" years old";
}
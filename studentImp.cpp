#include "student.h"
#include <iostream>

student::student(std::string first_name,std::string last_name,std::string age, std::string fyp_name,float cgpa):person(first_name,last_name,age),fyp_name(fyp_name),cgpa(cgpa){
	std::cout<<"constructor of student called"<<std::endl;
}

student::~student(){
	std::cout<<"destructor of student called"<<std::endl;
}

std::string student::getfyp_name(){
	return fyp_name;
}
float student::getcgpa(){
	return cgpa;
}

void student::setfyp_name(std::string str){
	fyp_name=str;
}
void student::setcgpa(float n){
	cgpa=n;
}

void student::printStudent(){
	std::cout<<getfirst_name()<<" "<<getlast_name()<<" is "<<age<<" years old, gpa is "<<cgpa;
}
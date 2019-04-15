#include "faculty.h"
#include <iostream>

faculty::faculty(std::string first_name,std::string last_name,std::string age, int course_count, std::string ext_num):person(first_name,last_name,age),course_count(course_count),ext_num(ext_num){
	std::cout<<"constructor of faculty called"<<std::endl;
}

faculty::~faculty(){
	std::cout<<"destructor of faculty called"<<std::endl;
}

int faculty::getcourse_count(){
	return course_count;
}

std::string faculty::getext_num(){
	return ext_num;
}

void faculty::setcourse_count(int n){
	course_count=n;
}

void faculty::setext_num(std::string str){
	ext_num=str;
}

void faculty::printFaculty(){
	printInformation();
	std::cout<<" and has courses "<<course_count<<" and extension "<<ext_num;
}
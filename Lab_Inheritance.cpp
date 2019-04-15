#include <iostream>
#include <string>

#include "faculty.h"
#include "student.h"

using namespace std;
int main(){

	student ted(string("Ted"),string("Thompson"),string("22"),string(""),float(3.91));
	faculty richard(string("Richard"),string("Karp"),string("45"),2,string("420"));
	
	ted.printStudent();
	cout<<endl;
	richard.printFaculty();

	/*constructor of person called
	constructor of student called
	constructor of person called
	constructor of faculty called
	destructor of faculty called
	destructor of person called
	destructor of student called
	destructor of person called
	*/

	system("pause");
}
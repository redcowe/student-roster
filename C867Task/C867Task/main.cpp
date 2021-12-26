#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include <sstream>
#include "roster.h"



int main()
{
	//F1 Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.

	std::cout << "Scripting and Programming - Applications ? C867" << std::endl;
	std::cout << "C++" << std::endl;
	std::cout << "#006595768" << std::endl;
	std::cout << "Joshua Cowell" << std::endl;

	//F2 Create an instance of the Roster class called classRoster.
	
	roster class_roster;

	//F3 Add each student to classRoster.

	class_roster.parse_add_student(class_roster.student_data);

	//F4

}


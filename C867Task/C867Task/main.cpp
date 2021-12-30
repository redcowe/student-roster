#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include <sstream>
#include "roster.h"

//Formatting
void break_line()
{
	std::cout << " " << std::endl;
}


int main()
{
	
	//F1 Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
	std::cout << "Scripting and Programming - Applications - C867" << std::endl;
	std::cout << "Language: C++" << std::endl;
	std::cout << "#006595768" << std::endl;
	std::cout << "Joshua Cowell" << std::endl;

	//F2 Create an instance of the Roster class called classRoster.
	roster class_roster;

	//F3 Add each student to classRoster.
	class_roster.add_student(class_roster.student_data);
	break_line();
	
	//F4 Print all students
	class_roster.print_all();
	break_line();	

	//F4 Print all invalid emails
	class_roster.print_invalid_emails();
	break_line();

	//F4 Print average days-per-course for all students
	for (int i = 0; i < student::number_of_students; i++)
	{
		class_roster.print_average_days(class_roster.class_roster_array[i].get_id());
	}
	break_line();
	

	//F4 Print by degree program
	class_roster.print_by_degree_program(SOFTWARE);
	break_line();
	

	//F4 Remove Student
	class_roster.remove_student("A3");
	class_roster.print_all();
	class_roster.remove_student("A3");
	break_line();

	//F5 Implement the destructor to release the memory that was allocated dynamically in Roster.
	class_roster.~roster();
	return 0;
}


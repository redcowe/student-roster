#include "roster.h"
#include <string>

//E0 Create a Roster class (roster.cpp)
roster::roster()
{

}

//E1 Parse each set of data identified in the gstudentData Table.h
//E2  Add each student object to classRosterArray.
//E3(a)
void roster::parse_add_student(string students[]) 
{
	for (int i = 0; i < student::number_of_students; i++)
	{
		student Student;
		string student_string = students[i];
		vector<string> result;
		stringstream stream(student_string);

		///Parsing student data
		while (stream.good())
		{
			string sub_string;
			getline(stream, sub_string, ',');
			result.push_back(sub_string);
		}

		for (int x = 0; x < result.size(); x++)
		{
			///Setting properties of Student
			if (x == 0)
			{
				Student.set_id(result.at(x));
			}
			else if (x == 1)
			{
				Student.set_first_name(result.at(x));
			}
			else if (x == 2)
			{
				Student.set_last_name(result.at(x));
			}
			else if (x == 3)
			{
				Student.set_email_address(result.at(x));
			}
			else if (x == 4)
			{
				Student.set_age(result.at(x));
			}
			else if (x == 5)
			{
				Student.set_days_per_course(stoi(result.at(x)));
				Student.iterator++;
			}
			else if (x == 6)
			{
				Student.set_days_per_course(stoi(result.at(x)));
				Student.iterator++;
			}
			else if (x == 7)
			{
				Student.set_days_per_course(stoi(result.at(x)));
				Student.iterator++;
			}
			else if (x == 8)

				if (result.at(x) == "SECURITY")
				{
					Student.set_degree_program(SECURITY);
				}
				else if (result.at(x) == "NETWORK")
				{
					Student.set_degree_program(NETWORK);
				}
				else
				{
					Student.set_degree_program(SOFTWARE);
				}

		}
		///Adding student
		class_roster_array[i] = Student;

	}

	
}

void roster::remove_student(string student_id)
{
	for (int i = 0 ; i < student::number_of_students ; i++)
		if (student_id == class_roster_array[i].get_id())
		{
			class_roster_array[i] = class_roster_array[i + 1];
		}
		else if (student_id != class_roster_array[i].get_id()) 
		{
			std::cout << "Student with ID: " << student_id << " not found." << std::endl;
		}
		else
		{
			std::cout << "ERROR" << std::endl;
		}
}

void roster::print_invalid_emails(string email)
{

}


roster::~roster()
{
	///Delete anything that has a "new" keyword.
}
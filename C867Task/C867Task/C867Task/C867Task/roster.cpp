#include "roster.h"
#include <string>
//E0 Create a Roster class (roster.cpp)
roster::roster()
{
	this->call_count = 0;
	this->class_roster_array = new student[student::number_of_students];
}


// E1, E2, E3(a)
void roster::add_student(string students[]) 
{
	for (int i = 0; i < student::number_of_students; i++)
	{
		student Student;
		string student_string = students[i];
		vector<string> result;
		stringstream stream(student_string);

		//E1 Parse each set of data identified in the gstudentData Table.h
		while (stream.good())
		{
			string sub_string;
			getline(stream, sub_string, ',');
			result.push_back(sub_string);
		}

		for (int x = 0; x < result.size(); x++)
		{
			degree_program degree_type = UNSURE;
			
			//E3(a) sets the instance variables from part D1 and updates the roster;
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
				Student.set_age(stoi(result.at(x)));
			}
			else if (x == 5) //Adding days to array
			{
				Student.class_1 = stoi(result.at(x));
				Student.set_days_per_course(Student.class_1);
				Student.iterator++;
			}
			else if (x == 6)
			{
				Student.class_2 = stoi(result.at(x));
				Student.set_days_per_course(Student.class_2);
				Student.iterator++;
			}
			else if (x == 7)
			{
				Student.class_3 = stoi(result.at(x));
				Student.set_days_per_course(Student.class_3);
				Student.iterator++;
			}
			else if (x == 8)

				if (result.at(x) == "SECURITY")
				{
					degree_type = SECURITY;
					Student.set_degree_program(SECURITY);
				}
				else if (result.at(x) == "NETWORK")
				{
					degree_type = NETWORK;
					Student.set_degree_program(NETWORK);
				}
				else
				{
					degree_type = SOFTWARE;
					Student.set_degree_program(SOFTWARE);
				}

		}
		
		//E2  Add each student object to classRosterArray.
		class_roster_array[i] = Student;

	}

	
}



//E3(b) Removes students from the roster by student ID
void roster::remove_student(string student_id)
{
	for (int i = 0; i < student::number_of_students; i++)
	{
		if (student_id == class_roster_array[i].get_id())
		{
			class_roster_array[i] = class_roster_array[i + 2];
			break;
		} 
		else if ( student_id != class_roster_array[i].get_id() && call_count >= 1)
		{
			cout << " " << endl;
			cout << "Student with ID " << student_id << " not found." << endl;
			break;
		}
	}
	call_count += 1;
}

//E3(c) Prints a complete tab-separated list of student data in the provided
void roster::print_all()
{
	if (call_count >= 1)
	{
		class_roster_array[0].print();
		class_roster_array[1].print();
		class_roster_array[2].print();
		class_roster_array[3].print();
	}
	else
	{
		for (int i = 0; i < student::number_of_students; i++)
		{
			class_roster_array[i].print();
		}
	}
	
}


//E3(d) Prints a studentfs average number of days in the three courses
void roster::print_average_days(string student_id)
{
	for (int i = 0; i < student::number_of_students; i++)
	{
		if (class_roster_array[i].get_id() == student_id)
		{
			class_roster_array[i].average = (class_roster_array[i].class_1 + class_roster_array[i].class_2 + class_roster_array[i].class_3) / 3;

			cout << "The average number of days-per-class for " << class_roster_array[i].get_first_name() << " " << class_roster_array[i].get_last_name() << " is: " << class_roster_array[i].average << " days." << endl;
		}
	}
}

//E3(e) Prints a complete tab-separated list of student data
void roster::print_invalid_emails()
{
	cout << "Invalid Emails: " << endl;
	cout << " " << endl;


	for (int i = 0; i < student::number_of_students; i++)
	{
		if (email_valid(class_roster_array[i].get_email_address()) != true)
		{

			cout << class_roster_array[i].get_email_address() << endl;
		}
	}
}

//E3(f) Prints out student information for a degree program
void roster::print_by_degree_program(degree_program degree_type)
{
	for (int i = 0; i < student::number_of_students; i++)
	{
		if (degree_type == class_roster_array[i].get_degree_type())
		{
			class_roster_array[i].print();
		}
	}
}



roster::~roster()
{
	if (this->class_roster_array != nullptr)
	{
		this->class_roster_array = nullptr;
		delete[] this->class_roster_array;
	}
}

#include "student.h"
#include <iostream>
#include <iomanip>


/// Empty Constructor
//D1 Create the class Student  in the files student.h 
student::student()
{
	this->student_id = "";
	this->first_name = "";
	this->last_name = "";
	this->email_address = "";
	this->age = 0;
	this->days_per_course = new int[days_per_course_array_size];
	for (int i = 0; i < days_per_course_array_size; i++) this->days_per_course[i] = 0;
	this->degree_type = UNSURE;
	int class_1 = 0;
	int class_2 = 0;
	int class_3 = 0;
	int iterator = 0;

}

/// Full constructor

student::student(string student_id, string first_name, string last_name, string email_address, int days_per_course[], degree_program degree_type)
{
	this->student_id = student_id;
	this->first_name = first_name;
	this->last_name = last_name;
	this->email_address = email_address;
	this->days_per_course = new int[days_per_course_array_size];
	for (int i = 0; i < days_per_course_array_size; i++) this->days_per_course[i] = days_per_course[i];
	this->degree_type = degree_type;
	int class_1 = 0;
	int class_2 = 0;
	int class_3 = 0;
	int iterator = 0;
}

///Getters

string student::get_id()
{
	return student_id;
}

string student::get_first_name()
{
	return first_name;
}

string student::get_last_name()
{
	return last_name;
}

string student::get_email_address()
{
	return email_address;
}

int student::get_age()
{
	return age;
}

string student::get_days_per_course()
{
	string value1 = to_string(this->class_1);
	string value2 = to_string(this->class_2);
	string value3 = to_string(this->class_3);
	string result = value1 + ", " + value2 + ", " + value3;
	return  result;
}

degree_program student::get_degree_type()
{
	return degree_type;
}

///Setters

void student::set_id(string student_id)
{
	this->student_id = student_id;
}

void student::set_first_name(string first_name)
{
	this->first_name = first_name;
}

void student::set_last_name(string last_name)
{
	this->last_name = last_name;
}

void student::set_email_address(string email_address)
{
	this->email_address = email_address;
}

void student::set_age(int age)
{
	this->age = age;
}

void student::set_days_per_course(int days) /// Edit this later, prob wrong.
{
	for (int i = 0; i < days_per_course_array_size; i++)	
	{
		if (iterator == 0)
		{
			this->days_per_course = new int[days_per_course_array_size];
			this->days_per_course[iterator] = days;
			break;
		}
		else
		{
			this->days_per_course[iterator] = days;
			break;
		}
	}
	
}

void student::set_degree_program(degree_program degree_type)
{
	this->degree_type = degree_type;
}

void student::print()
{
	std::cout << std::left << std::setw(5) << student_id;
	std::cout << std::left << std::setw(10) << first_name;
	std::cout << std::left << std::setw(10) << last_name;
	std::cout << std::left << std::setw(25) << email_address;
	std::cout << std::left << std::setw(5) << age;
	std::cout << std::left << std::setw(15) << get_days_per_course();
	std::cout << std::left << std::setw(10) << degree_type_array[get_degree_type()] << std::endl;
}

student::~student()
{
	if (days_per_course != nullptr)
	{
		delete[] days_per_course;
		days_per_course = nullptr;
	}	
}
#pragma once
#include "student.h"
#include <sstream>
#include <vector>
#include <iostream>
#include <regex>

using namespace std;

class roster
{

private:

	bool email_valid(string email)
	{
		const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
		return regex_match(email, pattern);
	}

	int call_count = 0;

	vector<string> result;
	
//Public declaration
public:
	
	string student_data[student::number_of_students] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Joshua,Cowell,jcowel7@wgu.edu,18,30,23,12,SOFTWARE"};

	//E1 Create an array of pointers, classRosterArray, to hold the data provided in the ÅgstudentData Table.Åh

	student* class_roster_array;

	void add_student(string students[]);

	void remove_student(string student_id);

	void print_all();

	void print_average_days(string student_id);

	void print_invalid_emails();

	void print_by_degree_program(degree_program degree_type);

	///Constructor
	roster();

	///Deconstructor
	~roster();

	
};
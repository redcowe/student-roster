#pragma once
#include "degree.h"

using namespace std;

class student
{
private:

	/// Student information variable declairations

	string student_id;
	string first_name;
	string last_name;
	string email_address;
	string age;
	int* days_per_course;
	degree_program degree_type;
	

public:
	const static int days_per_course_array_size = 3;
	const static int number_of_students = 5;
	int iterator = 0;
	///Constructors

	student();
	student(string student_id, string first_name, string last_name, string email_address, int days_per_course[], degree_program degree_type);


	///Getter declairations

	string get_id();

	string get_first_name();
	
	string get_last_name();

	string get_email_address();

	string get_days_per_course();
	
	degree_program get_degree_type();
	

	///Setter declairations

	void set_id(string student_id);

	void set_first_name(string first_name);

	void set_last_name(string last_name);

	void set_email_address(string email_address);

	void set_age(string age);

	void set_days_per_course(int days);

	void set_degree_program(degree_program degree_type);

	void print();


	//Deconstructor
	~student();
};



#pragma once
#include "degree.h"

using namespace std;

class student
{
private:

	// Student information variable declairations
	//D1 Create the class Student  in the files student.h 
	string student_id;
	string first_name;
	string last_name;
	string email_address;
	int age;
	int* days_per_course;
	degree_program degree_type;
	
	

public:
	int class_1 = 0;
	int class_2 = 0;
	int class_3 = 0;
	int average = 0;
	bool enrolled = true;
	const static int days_per_course_array_size = 3;
	const static int number_of_students = 5;
	int iterator = 0;

	///Constructors

	student();
	//D2(d)
	student(string student_id, string first_name, string last_name, string email_address, int days_per_course[], degree_program degree_type);


	///Getter declairations
	//D2(a) Accessor 

	string get_id();

	string get_first_name();
	
	string get_last_name();

	string get_email_address();

	int get_age();

	string get_days_per_course();
	
	degree_program get_degree_type();
	

	//Setter declairations
	//D2(b) Mutator 
	void set_id(string student_id);

	void set_first_name(string first_name);

	void set_last_name(string last_name);

	void set_email_address(string email_address);

	void set_age(int age);

	void set_days_per_course(int days);

	void set_degree_program(degree_program degree_type);
	//D2(e)
	void print();


	//Deconstructor
	~student();
};



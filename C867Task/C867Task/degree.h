#pragma once
#include <string>
//C0 Define an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.

enum degree_program
{
	SECURITY, NETWORK, SOFTWARE, UNSURE
};

static const std::string degree_type_array[] = { "SECURITY", "NETWORK", "SOFTWARE", "UNSURE"};
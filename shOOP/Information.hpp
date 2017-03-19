#include <iostream>

using namespace std;

#ifndef INFORMATION_H
#define INFORMATION_H

class Information 
{
public:
	// Default Constructor
	Information();

	// Overload Constructor
	Information(char* name, char* address, char* type, char* office);

	//Accesors
	char* get_name();
	char* get_address();
	char* get_type();
	char* get_office();

	// Mutators
	

	// Methods
	void print();

private:
	char* new_name;
	char* new_address;
	char* new_type;
	char* new_office;
};
#endif INFORMATION_H

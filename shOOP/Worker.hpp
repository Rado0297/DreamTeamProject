#pragma once

#include <iostream>
#include <string>

using std::string;
using namespace std;

class Worker
{
public:

	// Default Constructor
	Worker();

	// Overload Constructor
	Worker(string new_name, int new_salary);

	//Copy Constructor
	Worker(const Worker& other);

	//Copy assignment operator
	Worker& operator=(const Worker& other);

	//Destructor
	~Worker();

	//Accesors
	string get_new_name();
	int get_new_salary();
	virtual string get_new_position();

	// Mutators
	void set_salary(int new_salary);

	// Methods
	virtual void print()=0;

private:
	string name;
	int salary;
};


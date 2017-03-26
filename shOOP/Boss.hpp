#include <iostream>
#include <string>

using namespace std;

#ifndef BOSS_H
#define BOSS_H

class Boss
{
public:
	// Default Constructor
	Boss();

	// Overload Constructor
	Boss(string, int, int, int, double);

	//Copy Constructor
	Boss(const Boss& other);

	//Copy assignment operator
	Boss& operator=(const Boss& other);

	//Destructor
	~Boss();

	//Accesors
	string get_new_name();
	int get_new_ucn();
	int get_new_year_of_appointement();
	int get_new_password();
	double get_new_salary();

	// Mutators
	double set_new_salary();

	// Methods
	void print();

private:
	string name;
	int ucn;
	int year_of_appointement;
	int password;	
	double salary;
};

#endif BOSS_H
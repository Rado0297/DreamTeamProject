#pragma once
#include "Worker.hpp"

class Cashier : public Worker
{
private:
	string password;
public:

	//Parameterless constructor
	Cashier();

	//Constructor with parameters
	Cashier(string new_name, string new_password, int new_salary);

	//Copy constructor
	Cashier(const Cashier& other);

	//Assignment operator
	Cashier& operator=(const Cashier& other);

	string get_new_position();
	void print();
	string get_password();
};
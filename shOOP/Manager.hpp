#pragma once
#include "Worker.hpp"

class Manager : public Worker
{
private:
	string ManagerID;
public:

	//Parameterless constructor
	Manager();

	//Constructor with parameters
	Manager(string ID, string new_name, int new_salary);

	//Copy constructor
	Manager(const Manager& other);

	//Assignment operator
	Manager& operator=(const Manager& other);

	string get_new_position();
	void print();
	string get_managerID();
};
#pragma once
#include "Finance.h"

class Employee
{
private:

    std::string name;
    int age;
    std::string position;
    float salary;

public:
	Employee();
	Employee(std::string name, int age, std::string positin, float salary);
	void changeEmployee(std::string name, int age, std::string positin, float salary);
	void paySalary(Finance *f);
	void viewEmployee();

	~Employee();
};



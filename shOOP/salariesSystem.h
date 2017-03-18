#ifndef SALARIES_HPP
#define SALARIES_HPP

#pragma once

class Salary
{
public:
	//constructor
	Salary(int workHoursPerMonth, int extraHours, int lateForWork);
	//method for paying salary
	void pay();

	//destructor
	~Salary();

private:
	std::string IBAN;
	int workHoursPerMonth;
	int extraHours;
	int lateForWork;
	double salaryForMonth;
};


#endif // !SALARIES_HPP
#include "Boss.hpp"

Boss::Boss() 
{
	ucn = 0;
	year_of_appointement = 0;
	password = 0;
}

Boss::Boss(string new_name, int new_ucn, int new_year_of_appointment, int new_password, double new_salary)
{
	name = new_name;
	ucn = new_ucn;
	year_of_appointement = new_year_of_appointment;
	password = new_password;
	salary = new_salary;
}

Boss::Boss(const Boss& other)
{
	if (this != &other)
	{
		cout << "copy construct" << endl;
		new_name = other.new_name;
	}
}

Boss & Boss::operator=(const Boss & other)
{
	if (this != &other)
	{

		cout << "operator = " << endl;
		new_name = other.new_name;
	}
	return *this;

}

Boss::~Boss()
{
}

string Boss::get_new_name()
{
	return name;
}

int Boss::get_new_ucn()
{
	return ucn;
}

int Boss::get_new_year_of_appointement()
{
	return year_of_appointement;
}

int Boss::get_new_password()
{
	return password;
}

double Boss::get_new_salary()
{
	return salary;
}

void Boss::print()
{
	cout << "name: " << get_new_name()
		<< "\nucn: " << get_new_ucn()
		<< "\nyear of appointment: " << get_new_year_of_appointement() << endl;
}
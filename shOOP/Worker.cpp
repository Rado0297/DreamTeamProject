#include "Worker.h"

Worker::Worker()
{
	new_salary = 0;
}

Worker::Worker(string new_name, position new_pos, int new_salary)
{
	name = new_name;
	salary = new_salary;
}

Worker::Worker(const Worker& other)
{
	if (this != &other)
	{
		cout << "copy construct" << endl;
		name = other.name;
	}
}

Worker & Worker::operator=(const Worker & other)
{
	if (this != &other)
	{

		cout << "operator = " << endl;
		name = other.name;
	}
	return *this;

}

Worker::~Worker()
{
}

string Worker::get_new_name()
{
	return name;
}

int Worker::get_new_salary()
{
	return salary;
}

string Worker::get_new_position()
{
	switch (_position)
	{
	case position::cashier: return "cashier";
	case position::manager: return "manager";
	case position::specialist: return "specialist";
	}
}
void Worker::set_salary(int new_salary)
{

}

void Worker::print()
{
	cout << "name: " << get_new_name()
		<< "\nposition: " << get_new_position()
		<< "\nsalary: " << get_new_salary() << endl;
}


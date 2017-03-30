#include "stdafx.h"

Worker::Worker()
{
	new_salary = 0;
	name = "unnamed";
}

Worker::Worker(std::string name, position pos, int salary)
{
	new_name = name;
	new_salary = salary;
}

Worker::Worker(const Worker& other)
{
	if (this != &other)
	{
		new_name = other.new_name;
	}
}

Worker & Worker::operator=(const Worker & other)
{
	if (this != &other)
	{
		new_name = other.new_name;
	}
	return *this;

}

Worker::~Worker()
{
}

std::string Worker::get_name()
{
	return new_name;
}

int Worker::get_salary()
{
	return new_salary;
}

std::string Worker::get_position_by_name()
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
	std::cout << "name: " << get_name()
		<< "\nposition: " << get_position_by_name()
		<< "\nsalary: " << get_salary() << std::endl;
}


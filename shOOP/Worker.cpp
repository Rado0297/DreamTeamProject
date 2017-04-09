#include "Worker.hpp"

Worker::Worker()
{
	salary = 0;
}

Worker::Worker(string new_name, int new_salary)
{
	name = new_name;
	salary = new_salary;
}

Worker::Worker(const Worker& other)
{
	if (this != &other)
	{
		name = other.name;
		salary = other.salary;
	}
}

Worker & Worker::operator=(const Worker & other)
{
	if (this != &other)
	{
		name = other.name;
		salary = other.salary;

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
	return "";
}
void Worker::set_salary(int new_salary)
{
	salary = new_salary;
}


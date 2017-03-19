#include "Worker.hpp"

Worker::Worker() 
{
	new_salary = 0;
}

Worker::Worker(char*name, position pos, int salary) 
{
	new_name = name;
	new_salary = salary;
}

char* Worker::get_name() 
{
	return new_name;
}

int Worker::get_salary() 
{
	return new_salary;
}

const char* Worker::get_position_by_name()
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
		cout << "name: " << get_name()
		<< "\nposition: " << get_position_by_name()
		<< "\nsalary: " << get_salary()<< endl;
}


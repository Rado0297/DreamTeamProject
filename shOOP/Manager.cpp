#include "Manager.hpp"

Manager::Manager() :Worker()
{

}

Manager::Manager(string ID, string name, int salary) : Worker(name, salary)
{
	ManagerID = ID;
}

Manager::Manager(const Manager & other) : Worker(other)
{
	if (this != &other)
	{
		ManagerID = other.ManagerID;
	}
}

Manager & Manager::operator=(const Manager & other)
{
	if (this != &other)
	{
		Worker::operator=(other);
		ManagerID = other.ManagerID;
		return *this;
	}
}

string Manager::get_new_position()
{
	return "manager";
}

string Manager::get_managerID()
{
	return ManagerID;
}

void Manager::print()
{
	cout << "name: " << get_new_name()<<endl
		 << "salary: " << get_new_salary() << endl
		 << "position: " << get_new_position() << endl
		 << "managerID: " << get_managerID() << endl;
}





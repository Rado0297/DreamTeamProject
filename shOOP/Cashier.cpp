#include "Cashier.hpp"

Cashier::Cashier() :Worker()
{

}

Cashier::Cashier(string name,string new_password, int salary) : Worker(name, salary)
{
	password=new_password;
}

Cashier::Cashier(const Cashier & other) : Worker(other)
{
	if (this != &other)
	{
		password = other.password;
	}
}

Cashier & Cashier::operator=(const Cashier & other)
{
	if (this != &other)
	{
		Worker::operator=(other);
		password = other.password;
		return *this;
	}
}

string Cashier::get_new_position()
{
	return "cashier";
}

string Cashier::get_password()
{
	return password;
}

void Cashier::print()
{
	cout << "name: " << get_new_name()<<endl
		 << "salary: " << get_new_salary() << endl
		 << "position: " << get_new_position() << endl
		 << "password: " << get_password() << endl;
}

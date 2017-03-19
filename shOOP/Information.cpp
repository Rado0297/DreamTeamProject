#include "Information.hpp"

Information::Information() {}

Information::Information(char* name, char* address, char* type, char* office) 
{
	new_name = name;
	new_address=address;
	new_type = type;
	new_office = office;
}

char* Information::get_name() 
{
	return new_name;
}

char* Information::get_address() 
{
	return new_address;
}

char* Information::get_type() 
{
	return new_type;
}

char* Information::get_office() 
{
	return new_office;
}

void Information::print()
{
	cout << "name: " << get_name()
		<< "\naddress: " << get_address()
		<< "\ntype: " << get_type()
		<< "\noffice: "<< get_office()<<endl;
}
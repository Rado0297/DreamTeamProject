#include "String.hpp"

String::Ulim_String()
{
	str_size = 0;
}

String::String(char* new_str)
{
	str_size = strlen(new_str);
	str = new char[str_size + 1];
	strcpy_s(str, str_size + 1, new_str);
	
}

String::String(const String & other)
{
	if (this != &other)
	{
		str_size = other.str_size;
		str = new char[str_size + 1];
		strcpy_s(str, str_size + 1, other.str);
	}
}

String & String::operator=(const String & other)
{
	delete[] str;
	
	if (this != &other)
	{
		str_size = other.str_size;
		str = new char[str_size+1];
		strcpy_s(str, str_size + 1, other.str);
	}
	return *this;
}

String::~String()
{
	
	delete[] str;
}

long long String::size()const
{
	return str_size;
}

long long String::Capacity() const
{
	return capacity;
}

String::operator const char*() const
{
	return str;
}



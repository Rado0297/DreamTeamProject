#pragma once
#include <iostream>


using namespace std;

class String
{
public:
	String();
	String(char *);
	String(const String&);
	String& operator = (const String&);
	~String();
	long long size() const;
	long long Capacity() const;
	operator const char*()const;

private:
	long long capacity;
	long long str_size;
	char* str;
};


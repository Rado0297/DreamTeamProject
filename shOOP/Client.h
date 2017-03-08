#pragma once
#include <string>

class Client
{
	std::string name;
	// we want this ? Address address;

	// company, person ...
	int type;
	std::string EIK;
	std::string IN;
public:
	Client();
	Client(std::string _name, int _type, std::string _EIK, std::string _IN);
	void changeName(std::string new_name);
	~Client();
};


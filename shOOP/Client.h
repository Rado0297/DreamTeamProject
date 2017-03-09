#pragma once
#include <string>

class Client
{
	std::string name;
	// we want this ? Address address;

	// type - 0 = not known yet, 1 = company, 2 = person
	int type;
	std::string EIK;
	std::string IN;
	std::string serialized;
public:
	Client();
	Client(std::string _name, int _type, std::string _EIK, std::string _IN);
	void changeName(std::string new_name);
	void info();
	std::string serialize();
	Client* deserialize(std::string);
	~Client();
};


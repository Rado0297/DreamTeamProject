#include "stdafx.h"
#include "Client.h"
#include <iostream>
#include <cstdlib>


Client::Client()
{
	name = "unknown";
	type = 0;
	EIK = "0000000";
	IN = "0000000";
}


Client::~Client()
{
}

Client::Client(std::string _name, int _type, std::string _EIK, std::string _IN) : name(_name), type(_type), EIK(_EIK), IN(_IN) {};

void Client::changeName(std::string new_name)
{
	name = new_name;
}

void Client::info()
{
	std::cout << serialized;
}

std::string Client::serialize()
{
	std::string temp = "";
	temp += "client name: ";
	temp += name;
	temp += ", type: ";
	switch (type)
	{
	case 1:
		temp += "company";
		break;
	case 2:
		temp += "person";
		break;
	default:
		break;
	}
	temp += ", EIK: ";
	temp += EIK;
	temp += ", IN: ";
	temp += IN;

	serialized = temp;

	return temp;
}

Client* Client::deserialize(std::string serialized)
{
	Client *newClient = new Client();
	int i = 0;
	int len = serialized.length();
	std::string temp = "";

	// serialized expected format: ... name: sth, type: sth, EIK; sth, IN: sth
	// get to the first property
	while (serialized[i] != ':' && i < len) i++;
	i += 2;

	// read name
	if (i < len)
	{
		while (serialized[i] != ',' && i < len)
		{
			temp += serialized[i];
			i++;
		}
		newClient->name = temp;
		temp = "";
		// get to next property
		while (serialized[i] != ':' && i < len) i++;
		i += 2;
	}

	// read type
	if (i < len)
	{
		while (serialized[i] != ',' && i < len)
		{
			temp += serialized[i];
			i++;
		}
		newClient->type = std::atoll(temp.c_str());
		temp = "";
		while (serialized[i] != ':' && i < len) i++;
		i += 2;
	}

	// read EIK
	if (i < len)
	{
		while (serialized[i] != ',' && i < len)
		{
			temp += serialized[i];
			i++;
		}
		newClient->EIK = temp;
		temp = "";
		while (serialized[i] != ':' && i < len) i++;
		i += 2;
	}

	// read IN
	if (i < len)
	{
		while (serialized[i] != ',' && i < len)
		{
			temp += serialized[i];
			i++;
		}
		newClient->IN = temp;
		temp = "";
	}

	return newClient;
}

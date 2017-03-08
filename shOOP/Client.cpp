#include "stdafx.h"
#include "Client.h"


Client::Client()
{
}


Client::~Client()
{
}

Client::Client(std::string _name, int _type, std::string _EIK, std::string _IN) : name(_name), type(_type), EIK(_EIK), IN(_IN) {};

void Client::changeName(std::string new_name)
{
	name = new_name;
}
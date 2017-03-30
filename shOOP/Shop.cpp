#include "stdafx.h"
#include "Shop.h"


Shop::Shop()
{
	name = "unnamed";
	workers = std::vector<Worker>(0);
}

Shop::Shop(std::string _name, std::vector<Worker> workers)
{
	name = _name;
	workers = workers;
}
Shop::Shop(std::string _name, std::string workers_serialized)
{
	name = _name;
	// workers = deserialize workers;

}
Shop::Shop(std::string serialized)
{
	// this = deserialize(serialized)
}

std::string Shop::GetName()
{
	return name;
}

std::vector<Worker> Shop::GetWorkers() {
	return workers;
}

Shop::~Shop()
{
}

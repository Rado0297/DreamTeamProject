#include "stdafx.h"
#include "Shop.h"

#pragma region constructors

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

#pragma endregion constructors

#pragma region Accessors
std::string Shop::GetName()
{
	return name;
}

std::vector<Worker> Shop::GetWorkers() {
	return workers;
}

#pragma endregion Accessors

Shop::~Shop()
{
}

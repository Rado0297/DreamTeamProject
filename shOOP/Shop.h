#pragma once
class Shop
{
	std::string name;
	std::vector<Worker> workers;
public:
	// Default constructor
	Shop();
	
	// Constructor with objects
	Shop(std::string name, std::vector<Worker> workers);
	
	// Construct by serialized objects
	Shop(std::string name, std::string workers_serialized);// add more later;

	// Construct by serialized shop
	Shop(std::string serialized);

	// Accessors
	std::string GetName();
	std::vector<Worker> GetWorkers();

	// Mutators
	std::string ChangeName(std::string newName);

	// Destructor
	~Shop();
};


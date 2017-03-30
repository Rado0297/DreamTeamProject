#pragma once
class Shop
{
	std::string name;
	std::vector<Worker> workers;
public:
#pragma region Constructors

	// Default constructor
	Shop();
	
	// Constructor with objects
	Shop(std::string name, std::vector<Worker> workers);
	
	// Construct by serialized objects
	Shop(std::string name, std::string workers_serialized);// add more later;

	// Construct by serialized shop
	Shop(std::string serialized);

#pragma endregion Constructors

#pragma region Accessors

	std::string GetName();
	std::vector<Worker> GetWorkers();

#pragma endregion Accessors

#pragma region Mutators

	std::string ChangeName(std::string newName);

#pragma endregion Mutators

	// Destructor
	~Shop();
};


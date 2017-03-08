#pragma once
#include "Ingredients.h"

class Product : Ingredients
{
	std::string name;
	std::string barCode;
	double price;
	// DateTime expiresAt;
	// DateTime loadedAt;
	std::string type;
	Ingredients ingredients;
public:
	Product();
	~Product();
};


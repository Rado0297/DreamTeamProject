#pragma once
#include "Ingredients.h"
#include "Package.h"

class Product 
{
	std::string name;
	int  barCode;
	int	expirationTime;
	double price;
	std::string type;
	Ingredients ingredients;
	Package package;
public:
	Product(std::string _name, int _barCode, int	_expirationTime, double _price,	std::string _type, Ingredients _ingredients,Package _package);
	int getPrice();
	void setPrice(int a);
	//“ука ще има още
	~Product();
};


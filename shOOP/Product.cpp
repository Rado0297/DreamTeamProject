#include "stdafx.h"
#include "Product.h"





Product::Product(std::string _name, int _barCode, int _expirationTime, double _price, 
	std::string _type, Ingredients _ingredients, Package _package)
{
	name = _name;
	barCode = _barCode;
	expirationTime = _expirationTime;
	price = _price;
	type = _type;
	delete &ingredients;
	Ingredients ingredients (_ingredients);
	delete &package;
	Package packege(_package);
}

int Product::getPrice()
{
	return price;
}

void Product::setPrice(int a)
{
	price = a;
}

Product::~Product()
{
}

#include "stdafx.h"
#include "Product.h"

Product::Product(country origin, double buyPrice, double sellPrice, std::string name, std::string type, std::string barCode, bool isEatable)
	: origin(origin), buyPrice(buyPrice), sellPrice(sellPrice), name(name), type(type), barCode(barCode), isEatable(isEatable)
{
	//sellPrice = (double)(buyPrice * 110) / 100.0;
}

void Product::print() const
{
	std::cout << "Name of the product: " << name << "\n"
		<< "Type: " << type << "\n"
		<< "Buy price: " << buyPrice << "\n"
		<< "Sell price: " << sellPrice << "\n"
		<< "Is this product eatable: " << isEatable << "\n";
}

Product::~Product()
{
}

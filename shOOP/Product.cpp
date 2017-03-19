#include "stdafx.h"
#include "Product.h"
#include <fstream>

Product::Product(country origin, double buyPrice, double sellPrice, std::string name, std::string type, std::string barCode, bool isEatable)
	: origin(origin), buyPrice(buyPrice), sellPrice(sellPrice), name(name), type(type), barCode(barCode), isEatable(isEatable)
{
	//sellPrice = (double)(buyPrice * 110) / 100.0;
}

const char* Product::getOriginByName() const
{
	switch (origin)
	{
		case country::Germany: return "Germany";
		case country::Russia: return "Russia";
		case country::Poland: return "Poland";
		case country::England: return "England";
		case country::USA: return "USA";
		case country::Holand: return "Holand";
		case country::Japan: return "Japan";

		default:
			break;
	}
}

void Product::print() const
{
	std::cout << "Name of the product: " << name << "\n"
		<< "Origin: " << getOriginByName() << "\n"
		<< "Type: " << type << "\n"
		<< "Buy price: " << buyPrice << "\n"
		<< "Sell price: " << sellPrice << "\n"
		<< "Is this product eatable: " << isEatable << "\n";
}

void Product::add()
{	
	//
	//need more work
	//

	std::ofstream dataBase;
	dataBase.open("dataBaseForProducts.txt");
	dataBase << "{"<< name << ", " << &origin << ", " << buyPrice << ", " << type << ", " << barCode << ", " << isEatable << "}\n";

	dataBase.close();

	/*
	std::cin >> name;
	std::cin >> origin;
	std::cin >> buyPrice;
	std::cin >> type;
	std::cin >> barCode;
	std::cin >> isEatable;*/

	std::cout << "Congrats you have just added a product!" << "\n \n \n";

	sellPrice = buyPrice * 100.21;
}

Product::~Product()
{
}

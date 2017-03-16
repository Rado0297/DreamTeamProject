#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#pragma once

class Product
{
public:
	enum class country
	{
		Russia,
		Germany,
		England,
		Poland,
		USA
	};

	//constructor
	Product(country origin, double buyPrice, double sellPrice, std::string name, std::string type, std::string barCode, bool isEatable);

	//print method
	void print() const;

	//destructor
	~Product();

private:
	country origin;

	double buyPrice;
	double sellPrice;

	std::string name;
	std::string type;
	std::string barCode;

	bool isEatable;

	// DateTime expiresAt;
	// DateTime loadedAt;
};

#endif //PRODUCT_HPP
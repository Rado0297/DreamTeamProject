#include "Storage.hpp"

Storage::Storage() 
{
	number = 0;
	price = 0.0;
}

Storage::Storage(char*new_product, int new_number, double new_price) 
{
	product = new_product;
	number = new_number;
	price = new_price;
}

char* Storage::get_new_product() 
{
	return product;
}

int Storage::get_new_number() 
{
	return number;
}

double Storage::get_new_price() 
{
	return price;
}

void Storage::set_price() 
{
	if (number > 100)
	{
		double new_price = price-price*0.1;
		cout << new_price << endl;
	}
}

void Storage::print()
{
	cout << "product: " << get_new_product()
		<< "\nnumber: " << get_new_number()
		<< "\nprice: " << get_new_price() << endl;
}
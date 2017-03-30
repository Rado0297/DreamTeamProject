#include <iostream>

using namespace std;

#ifndef STORAGE_H
#define STORAGE_H

class Storage {
public:
	// Default Constructor
	Storage();

	// Overload Constructor
	Storage(char* new_product, int new_number, double new_price);

	//Accesors
	char* get_new_product();
	int get_new_number();
	double get_new_price();

	// Mutators
	void set_price();

	// Methods
	void print();

private:
	char* product;
	int number;
	double price;
};
#endif STORAGE_H
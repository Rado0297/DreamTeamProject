#include <iostream>

using namespace std;

#ifndef CASH_H
#define CASH_H

class Cash 
{
public:
	
	// Default Constructor
	Cash();

	// Overload Constructor
	Cash(double, double);

	//Accesors
	double get_new_income();
	double get_new_expenses();

	// Mutators
	double set_profit();

	// Methods
	void cashOut(int password);
	void print();

private:
	double income;
	double expenses;	
};
#endif CASH_H


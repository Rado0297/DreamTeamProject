#include "Cash.hpp"
#include "Boss.hpp"

Cash::Cash() 
{
	income = 0.0;
	expenses = 0.0;
}

Cash::Cash(double new_income, double new_expenses) 
{
	income = new_income;
	expenses = new_expenses;
}

double Cash::get_new_income() 
{
	return income;
}

double Cash::get_new_expenses()
{
	return expenses;
}

double Cash::set_profit()
{
	return income - expenses;
}

void Cash::cashOut(int password)
{
}

void Cash::print()
{
	cout << "income: " << get_new_income()
		<< "\nucn: " << get_new_expenses()
		<<"\nprofit: "<<set_profit()
		<< endl;
}

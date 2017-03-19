#include "Expenses.h"

Expenses::Expenses(double salaries, double taxes, double bills)
{
    _salaries = salaries;
    _taxes = taxes;
    _bills = bills;
}

void Expenses::read()
{
    std::cout << "salaries: ";
    std::cin << _salaries;
    std::cout << "\ntaxes: ";
    std::cin << _taxes;
    std::cout << "\nbills: ";
    std::cin << _bills;
}

void Expenses::print() const
{
    std::cout << _salaries << "\n" << _taxes << "\n" << _bills << "\n";
}

double Expenses::get_salaries() const
{
    return _salaries;
}

double Expenses::get_taxes() const
{
    return _taxes;
}

double Expenses::get_bills() const
{
    return _bills;
}

double Expenses::expenses(double salaries, double taxes, double bills) const
{
    return _salaries + _taxes + _bills;
}

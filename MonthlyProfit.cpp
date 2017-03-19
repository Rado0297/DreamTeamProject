#include "MonthlyProfit.h"

MounthyProfit::MounthlyProfit(double income, double expenses)
{
    _income = income;
    _expenses = expenses;
}

void MonthlyProfit::read()
{
    std::cout << "income: ";
    std::cin >> _income;
    std::cout << "expenses: ";
    std::cin >> _expenses;
}

void MonthlyProfit::print() const
{
    std::cout << std::setprecision(2);
    std::cout << _income << "\n" << _expenses << "/n";
}

double MonthlyProfit::get_income() const
{
    return _income;
}

double MonthlyProfit::get_expenses() const
{
    return _expenses;
}
double MonthlyProfit::calculate_monthly_profit(double income, double expenses) const
{
    return _income-_expenses;
}

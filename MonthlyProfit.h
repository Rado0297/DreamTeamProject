#ifndef MONTHLYPROFIT_H
#define MONTHLYPROFIT_H
#include <iostream>
#include <iomanip>

class MonthlyProfit
{
public:
    MonthlyProfit(double, double);
    void read();
    void print() const;
    double get_income() const;
    double get_expenses() const;
    double calculate_monthly_profit(double, double) const;
private:
    double _income;
    double _expenses;
};

#endif // MONTHLYPROFIT_H

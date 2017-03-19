#ifndef EXPENSES_H
#define EXPENSES_H
#include <iostream>

class Expnses
{
public:
    Expenses(double, double, double);
    void read();
    void print() const;
    double get_salaries() const;
    double get_taxes() const;
    double get_bills() const;
    double expenses(double, double ,double) const;
private:
    double _salaries;
    double _taxes;
    double _bills;
};

#endif // EXPENSES_H

#ifndef PROFIT_H
#define PROFIT_H
#include <iostream>

class Profit
{
public:
    Profit(long long,double,double);
    void read();
    void print() const;
    long long get_barcode() const;
    double get_purchase_price const;
    double get_selling_price() const;
    double profit() const;
private:
    long long _barcode;
    double _purchase_price, _selling_price;
};

#endif // PROFIT_H

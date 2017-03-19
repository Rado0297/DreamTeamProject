#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <iomanip>

class Product
{
public:
    void read();
    void print() const;
    bool is_better_from(Product const &) const;
    double get_price() const;
    void sort_products(int, Product* []);
private:
    char name[20];
    double price;
};

#endif // PRODUCT_H

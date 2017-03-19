#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>

class Inventory
{
public:
    Inventory(long long,int);
    void read();
    void print() const;
    long long get_barcode() const;
    int get_quantity() const;
    bool need_to_restock(long long,int);
private:
    long long _barcode;
    int _quantity;
};

#endif // INVERTORY_H

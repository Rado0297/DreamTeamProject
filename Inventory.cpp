#include "Inventory.h"

Inventory::Inventory(long long barcode,int quantity)
{
    _barcode = barcode;
    _quantity = quantity;
}

void Inventory::read()
{
    std::cout << "barcode: ";
    std::cin >> _barcode;
    std::cout << "\nquantity: ";
    std::cin >> _quantity;
}

void Inventory::print() const
{
    std::cout << _barcode << ": " << _quantity << "\n";
}

long long Inventory::get_barcode()
{
    return _barcode;
}

int Inventory::get_quantity()
{
    return _quantity;
}

bool Inventory::need_to_restock(long long barcode,int quantity)
{
    return quantity = 0;
}


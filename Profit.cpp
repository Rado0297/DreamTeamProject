#include "Profit.h"

Profit::Profit(long long barcode,double purchase_price,double selling_price):
{
    _barcode = barcode;
    _purchase_price = purchase_price;
    _selling_price = selling_price;
}

void Profit::read()
{
    std::cout << "barcode: ";
    std::cin >>_barcode;
    std::cout << "\npurchase price: ";
    std::cin >> _purchase_price;
    std::cout << "\nselling price: ";
    std::cin >> _selling_price;
}

void Profit::print() const
{
  std::cout << "barcode: " << _barcode
            << "\npurchase price: " << _purchase_price
            << "\nselling price: " << _selling_price << "\n";
}

long long Profit::get_barcode() const
{
    return _barcode;
}

double Profit::get_purchase_price const
{
    return _purchase_price;
}

double Profit::get_selling_price() const
{
    return _selling_price;
}

double Profit::profit() const
{
    return _selling_price-_purchase_price;
}

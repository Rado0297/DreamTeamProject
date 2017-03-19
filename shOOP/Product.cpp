#include "stdafx.h"
#include "Product.h"


Product::Product()
{
    name = "N/A";
    description = "N/A";
    price = -1;
    quantity = -1;

}

Product::Product(std::string name, std::string description, float price)
{
}
void Product::changePrice(float price)
{
    this->price = price;
}
void Product::viewProduct()
{
    std::cout << name << std::endl;
    std::cout << description << std::endl;
    std::cout << price << std::endl;
    std::cout << quantity << std::endl;
}
void Product::addProduct(int quantity)
{
}
void Product::removeProduct(int quantity)
{
}


Product::~Product()
{
}

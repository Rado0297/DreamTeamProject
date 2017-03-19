#pragma once

class Product
{
private:
    std::string name;
    std::string description;
    float price;
    int quantity;


public:
	Product();
    Product(std::string name, std::string description, float price);
    void changePrice(float price);
    void viewProduct();
    void addProduct(int quantity);
    void removeProduct(int quantity);

	~Product();
};

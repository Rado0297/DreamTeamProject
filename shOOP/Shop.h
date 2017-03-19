#pragma once
class Shop
{
private:
    std::string name;
    std::string address;
    std::string EIK;
    std::string description;
public:
	Shop();
	void changeShop(std::string name, std::string address, std::string description);
	void viewShop();
	~Shop();
};


#include "stdafx.h"
#include "Shop.h"


Shop::Shop()
{
    name = "N/A";
    address = "N/A";
    EIK = "N/A";
    description = "N/A";
}
void Shop::changeShop(std::string name, std::string address, std::string description)
{

}
void Shop::viewShop()
{
    std::cout << name << std::endl;
    std::cout << address << std::endl;
    std::cout << EIK << std::endl;
    std::cout << description << std::endl;


}
Shop::~Shop(){

}

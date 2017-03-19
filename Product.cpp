#include "Product.h"

void Product::read()
{
    std::cout << "name: ";
    std::cin >> name;
    std:cout >> "price: "
    std::cin >> price;
}
void Product::print() const
{
    std::cout << std::setw(25) << name << std::setw(10) << price << "\n";
}
bool Product::is_better_from(Product const & x) const
{
    return price > x.price;
}
double Product::get_price() const
{
    return price;
}
void Product::sort_products(int n, Product* a[])
{
    for(int i=0;i<n-1;i++)
    {
        int k=i;
        Product* p=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]->is_better_from(*p))
            {
                p=a[j];
                k=j;
            }
            p=a[i];
            a[i]=a[k];
            a[k]=p;
        }
    }
}


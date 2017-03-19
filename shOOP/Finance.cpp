#include "stdafx.h"
#include "Finance.h"

Finance::Finance()
{
    profit = 100;
}
void Finance::viewProfit()
{
    std::cout << profit << std::endl;
}
void Finance::changeProfit(float a)
{
    profit += a;
}
Finance::~Finance()
{
}

#include "stdafx.h"
#include "Employee.h"

Employee::Employee()
{
    salary = 40;
}

Employee::Employee(std::string name, int age, std::string positin, float salary)
{
}
void Employee::changeEmployee(std::string name, int age, std::string positin, float salary)
{
}
void Employee::paySalary(Finance *f)
{
    f->changeProfit(-salary);
}
void Employee::viewEmployee()
{
}

Employee::~Employee()
{
}

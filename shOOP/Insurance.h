#ifndef INSURANCE_HPP
#define INSURANCE_HPP

#pragma once

class Insurance
{
public:
	
	//constructor
	Insurance(std::string fullName, std::string insuranceAccount, double salary, double experinceInHours);

	//methods
	void add();

	//destructor
	~Insurance();

private:
	std::string fullName;
	std::string insuranceAccount; //Something like an IBAN for bank account
	double salary;
	double experienceInHours;

};


#endif // !INSURANCE_HPP
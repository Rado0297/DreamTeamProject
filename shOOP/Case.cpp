#include "stdafx.h"

Case::Case(double amountOfMoney, int caseID, bool isClosed, std::string workerID, std::string workerPassword, std::string bossID, std::string bossPassword)
{

}

void Case::openCase()
{
	isClosed = false;
}

void Case::closeCase()
{
	isClosed = true;
}

void Case::addProductToBill()
{
	std::vector<Product> products;

}

void Case::emptyCase()
{
	std::string ID;
	std::string password;
	std::cout << "Enter worker ID: \n";
	std::cin >> ID;
	std::cout << "Enter worker password: \n";
	std::cin >> password;

	if (ID == bossID && password == bossPassword)
		amountOfMoney = 0;
	/*
	else
	{
	std::cout << "3 attempts left:";
	}
	*/
}

double Case::getAmountOfMoney()
{
	return amountOfMoney;
}

double Case::raiseAmountOfMoney()
{
	//amountOfMoney += clientBill;
	return amountOfMoney;
}

void Case::workerAuth()
{
	std::string ID;
	std::string password;
	std::cout << "Enter worker ID: \n";
	std::cin >> ID;
	std::cout << "Enter worker password: \n";
	std::cin >> password;

	/*
	if(ID == workerID from DB && password == workerPassword with password, which matching to this ID)
	worker is authenticated and ready for work
	else
	there is a problem and some one try to steal from case with brut-force attack

	*/

	openCase();
}


//destroctor
Case::~Case()
{

}
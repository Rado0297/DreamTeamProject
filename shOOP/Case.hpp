#pragma once

class Case
{
public:
	//constructor
	Case(double amountOfMoney, int caseID, bool isClosed, std::string workerID, std::string workerPassword, std::string bossID, std::string bossPassword);

	//methods
	void openCase();
	void closeCase();

	void addProductToBill();

	//void emptyCase(std::string bossID, std::string bossPassword);
	void emptyCase();

	double getAmountOfMoney();

	double raiseAmountOfMoney();

	void workerAuth();

	//destructor
	~Case()
	{

	};
private:

	//test commit

	/*
	dynamical array for products of each client
	*/

	double amountOfMoney;
	int caseID;
	bool isClosed = true;
	std::string workerID;
	std::string workerPassword;
	std::string bossID;
	std::string bossPassword;
	std::string paymentMethod;
};
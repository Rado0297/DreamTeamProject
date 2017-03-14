#pragma once
class Worker
{
	std::string name;
	std::string egn;
	std::string username;
	std::string password; //could hash it
	std::string position;
	int salary;
	// History sales[];
public:
	Worker();

	// read from serialized string
	Worker(std::string serialized);

	Worker(std::string name, std::string egn, std::string username, std::string password, std::string postition, int salary, int profit);

	std::string GetInfo() const;

	// key = { "name", "eng", .... "sales" }
	std::string GetInfo(std::string key) const;
	
	void ChangePosition(std::string newPosition);
	bool CheckAccount(std::string username, std::string password);
	void ChangeSalary(int newAmount);
	int calculateProfit();

	void addSale(); //History newSale as obj
	// History GetHistory();

	~Worker();
};


#ifndef WORKER_HPP
#define WORKER_HPP

#pragma once

class Worker
{
public:
	//constructor
	Worker(std::string fullName, std::string ID, int EGN, double startUpSalary, std::string post);
	
	//method
	void add();

	//destructor
	~Worker();

private:
	std::string fullName;
	std::string ID;
	int EGN; //EGN checker!
	double startUpSalary;
	std::string post;
};


#endif // !WORKER_HPP
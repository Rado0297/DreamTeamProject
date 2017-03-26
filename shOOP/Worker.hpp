#include <iostream>
#include <string>

using namespace std;

#ifndef WORKER_H
#define WORKER_H

class Worker 
{
public:
	enum class position 
	{
		cashier,
		manager,
		specialist

	};
	// Default Constructor
	Worker();

	// Overload Constructor
	Worker(string name, position pos, int salary);

	//Copy Constructor
	Worker(const Worker& other);

	//Copy assignment operator
	Worker& operator=(const Worker& other);

	//Destructor
	~Worker();

	//Accesors
	string get_name();
	int get_salary();
	string get_position_by_name();

	// Mutators
	void set_salary(int new_salary);

	// Methods
	void print();

private:
	string new_name;
	position _position;
	int new_salary;
};
#endif WORKER_H

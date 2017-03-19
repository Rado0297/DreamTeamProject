#include <iostream>

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
	Worker(char* name, position pos, int salary);

	//Accesors
	char* get_name();
	int get_salary();
	const char* get_position_by_name();

	// Mutators
	void set_salary(int new_salary);

	// Methods
	void print();

private:
	char* new_name;
	position _position;
	int new_salary;
};
#endif WORKER_H

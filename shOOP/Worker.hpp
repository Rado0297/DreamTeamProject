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
	Worker(std::string name, position pos, int salary);

	//Copy Constructor
	Worker(const Worker& other);

	//Copy assignment operator
	Worker& operator=(const Worker& other);

	//Destructor
	~Worker();

	//Accesors
	std::string get_name();
	int get_salary();
	std::string get_position_by_name();

	// Mutators
	void set_salary(int new_salary);

	// Methods
	void print();

private:
	std::string new_name;
	position _position;
	int new_salary;
};
#endif WORKER_H

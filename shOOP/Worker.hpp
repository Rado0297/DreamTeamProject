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
	Worker(string new_name, position new_pos, int new_salary);

	//Copy Constructor
	Worker(const Worker& other);

	//Copy assignment operator
	Worker& operator=(const Worker& other);

	//Destructor
	~Worker();

	//Accesors
	string get_new_name();
	int get_new_salary();
	string get_new_position();

	// Mutators
	void set_salary(int new_salary);

	// Methods
	void print();

private:
	string name;
	position _position;
	int salary;
};
#endif WORKER_H

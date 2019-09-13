//Employee.h provided by Dr. Meilin Liu, and you can modify it if you want. 

#define _Employee_

#include <cstdlib>
#include <iostream>
#include <string>

class Employee{

public:
	Employee();
	Employee(int IdNum, std::string last, std::string first);
	Employee(const Employee &person);
	~Employee();
	void setFirstName(std::string first);
	void setLastName(std::string last);
	void setID(int IdNum);
	int getID();
	std::string getFirstName();
	std::string getLastName();
	friend std::ostream& operator<<(std::ostream &outs, Employee &person);
	friend std::istream& operator>>(std::istream &ins, Employee &person);
private:
	int ID;
	std::string lastname;
	std::string firstname;

	
};

bool operator==(const Employee& p1, const Employee& p2) // test if two employees are the same. 

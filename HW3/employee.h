#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include "date.h"
using namespace std;

class employee {
	string name, title;
	int id, phone, age;
	date hired;
	double salary;

public:
	employee();
	employee(string name, string title, int id, int phone, int age, date hired, double salary);
	~employee() {}
	void changeName();
	void changeId();
	void changePhone();
	void changeAge();
	void changeTitle();
	void changeSalary();
	void changeHired();
	void print();
};

#endif

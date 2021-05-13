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
	void incAge(int inc);
	void print();

	string returnName() {
		return name;
	}

	string returnTitle() {
		return title;
	}

	int returnId() {
		return id;
	}

	int returnPhone() {
		return phone;
	}

	int returnAge() {
		return age;
	}

	date returnHired() {
		return hired;
	}

	double returnSalary() {
		return salary;
	}
	
	friend bool operator==(const employee &emp1, const employee &emp2);
	friend int operator+(employee &emp1, const int add);
	friend ostream & operator<<(ostream & out, const employee &emp1);
	friend istream & operator>>(istream & in, employee &emp1);
	employee & operator++();
	employee & operator++(int);
	void operator=(const employee &emp1);
};

#endif

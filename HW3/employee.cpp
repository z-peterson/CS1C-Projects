#include "employee.h"
#include <iostream>
using namespace std;

employee::employee() {
	changeName();
	changeId();
	changePhone();
	changeAge();
	changeTitle();
	changeSalary();
	changeHired();
}

employee::employee(string name, string title, int id, int phone, int age, date hired, double salary) {
	this->name = name;
	this->title = title;
	this->id = id;
	this->phone = phone;
	this->age = age;
	this->hired = hired;
	this->salary = salary;
}

void employee::changeName() {
	cout << "Please enter name of employee: ";
       	getline(cin, name);
}

void employee::changeId() {
	cout << "Please enter ID of employee: ";
	cin >> id;
	cin.ignore(1000, '\n');
}

void employee::changePhone() {
	cout << "Please enter phone number of employee (no dashes or spaces): ";
	cin >> phone;
	cin.ignore(1000, '\n');
}

void employee::changeAge() {
	cout << "Please enter age of employee: ";
	cin >> age;
	cin.ignore(1000, '\n');
}

void employee::changeTitle() {
	cout << "Please enter title of employee: ";
	getline(cin, title);
}

void employee::changeSalary() {
	cout << "Please enter salary of employee: ";
	cin >> salary;
	cin.ignore(1000, '\n');
}

void employee::changeHired() {
	int tmonth, tday, tyear;

	do{ //while(month >= 1 && month <= 12);
		cout << "Please enter month employee started (1-12): ";
		cin >> tmonth;
		cin.ignore(1000, '\n');
	}while(tmonth < 1 || tmonth > 12);

	do{
		cout << "Please enter the day of the month employee started (1-31): ";
		cin >> tday;
		cin.ignore(1000, '\n');
	}while(tday > 31 || tday < 1);

	do{
		cout << "Please enter the year the employee was hired: ";
		cin >> tyear;
		cin.ignore(1000, '\n');
	}while(tyear <= 1920 || tyear > 3000);

	hired.changeMonth(tmonth);
	hired.changeDay(tday);
	hired.changeYear(tyear);

	if(tday > 28 && tmonth == 2 && tyear % 4 != 0) {
		cout << "Invalid day on non-leap year, please reinput hired date" << endl;
		changeHired();
	}	
}

void employee::print() {
	cout << "Employee: " << name << endl;
	cout << "ID #: " << id << endl;
	cout << "Phone #: " << phone << endl;
	cout << "Age: " << age << "Years" << endl;
	cout << "Job Title: " << title << endl;	
	cout << "Salary: $" << salary << endl;
	cout << "Hired on: " << hired.returnMonth() << "/" << hired.returnDay() 
		<< "/" << hired.returnYear() << endl;
}

#include "architect.h"
using namespace std;

architect::architect(){
	changeDept();
	changeSuper();
	changeExp();
	changeSalary();
}

architect::architect(int dept, int exp, int salary, string super) {
	deptNum = dept;
	this->exp = exp;
	this->salary = salary;
	this->super = super;
}

void architect::changeDept() {
	cout << "Please enter architect's department number: ";
	cin >> deptNum;
	cin.ignore(1000, '\n');
}

void architect::changeSuper() {
	cout << "Please enter architect supervisor's name: ";
	getline(cin, super);
}

void architect::changeExp() {
	cout << "Please enter architect's years of experience: ";
	cin >> exp;
	cin.ignore(1000,'\n');
}

void architect::changeSalary() {
	cout << "Please enter architect's salary increase: ";
	cin >> salary;
	cin.ignore(1000, '\n');
}


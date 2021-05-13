#include "programmer.h"
using namespace std;

programmer::programmer(){
	changeDept();
	changeSuper();
	changeSalary();
	changeCpp();
	changeJava();
}

programmer::programmer(int deptNum, int salary, string super, bool knowsCpp, bool knowsJava) {
	this->deptNum = deptNum;
	this->salary = salary;
	this->super = super;
	this->knowsCpp = knowsCpp;
	this->knowsJava = knowsJava;
}

void programmer::changeDept() {
	cout << "Please enter employee's department number: ";
	cin >> deptNum;
	cin.ignore(1000,'\n');
}

void programmer::changeSuper() {
	cout << "Please enter employee's supervisor name: ";
	getline(cin, super);
}

void programmer::changeSalary() {
	cout << "Pleaae enter employee's salary increase %: ";
	cin >> salary;
	cin.ignore(1000, '\n');
}

void programmer::changeCpp() {
	char input;
	
	cout << "Does this employee know C++?: (Y/N): ";
	input = getchar();

	if(toupper(input) == 'Y')
		knowsCpp = true;
	else
		knowsCpp = false;
}

void programmer::changeJava() {
	char input;

	cout << "Does this employee know java?: (Y/N): ";
	input = getchar();

	if(toupper(input) == 'Y'){
		knowsJava = true;
	}else{
		knowsJava = false;
	}
}

#include <iostream>
#include "programmer.h"
#include "architect.h"
using namespace std;

void print(programmer joe, architect sally);

int main() {
	programmer joe;
	architect sally;
	
	print(joe, sally);	
		
	return 0;	
}

void print(programmer joe, architect sally) {
	joe.print();
	cout << "Dept. #:" << joe.returnDept() << endl;
	cout << "Supervisor: " << joe.returnSuper() << endl;
	cout << "Salary increase: %" << joe.returnSalary() << endl;	
	cout << "Knows Java: " << joe.returnJava() << endl;
	cout << "Knows C++: " << joe.returnCpp() << endl << endl;

	sally.print();
	cout << "Dept. #:" << sally.returnDept() << endl;
	cout << "Years of experience: " << sally.returnExp() << endl;	
	cout << "Salary increase: %" << sally.returnSalary() << endl;
	cout << "Supervisor: " << sally.returnSuper() << endl;
}

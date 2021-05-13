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
	/*joe.print();
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
	*/

	if(sally == joe) {
	       	cout << "Engineer's phone number is the same as Architect's";
	}else{
		cout << "Engineer's phone number is different from Architect's";
	}
	
	cout << endl;

	cout << "Engineer's age is " << joe.returnAge() << endl;
	//joe = joe + 2;

	cout << "Enter a new age for Engineer: ";
	cin >> joe;
	cin.ignore(1000, '\n');

	cout << joe;

	joe++;
	cout << joe;
	
	++joe;
	cout << joe;

	cout << endl;
}

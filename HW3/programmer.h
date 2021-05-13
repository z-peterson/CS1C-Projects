#include "employee.h"
using namespace std;

class programmer : public employee {
	int deptNum, salary;
	string super;
	bool knowsCpp, knowsJava;
public:
	programmer();
	programmer(int deptNum, int salary, string super, bool knowsCpp, bool knowsJava);
	~programmer() {}
	void changeDept();
	void changeSalary();
	void changeSuper();
	void changeCpp();
	void changeJava();
	
	int returnDept() {
		return deptNum;
	}
	
	int returnSalary() {
		return salary;
	}
	
	string returnSuper(){
		return super;
	}
	
	bool returnCpp() {
		return knowsCpp;
	}
	
	bool returnJava() {
		return knowsJava;
	}

};

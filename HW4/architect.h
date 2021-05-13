#include "employee.h"
using namespace std;

class architect : public employee {
	int deptNum, salary, exp;
	string super;
public:
	architect();
	architect(int deptNum, int salary, int exp, string super);
	~architect() {}

	void changeDept();
	void changeSalary();
	void changeExp();
	void changeSuper();

	int returnDept() {
		return deptNum;
	}
	
	int returnSalary() {
		return salary;
	}

	int returnExp() {
		return exp;
	}

	string returnSuper() {
		return super;
	}	
};
		

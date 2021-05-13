/*
	Zac Peterson
	item.h
	This is the header file for the item object. This object represents an item to be sold at a store.
*/
#include <string>
using namespace std;


class item {
	string name;
	double cost;
	int quantity;

public:
	//Default Constructor
	item() { 
		name = ' ';
		cost = 0.0;
		quantity = 0;
	}

	//Alternate Constructor
	item(string name, int cost, int quantity) {
		this->name = name;
		this->cost = cost;
		this->quantity = quantity;
	}

	//Copy Constructor
	item(item &merch) {
		this->name = merch.getName();
		this->cost = merch.getCost();
		this->quantity = merch.getQuantity();
	}
	
	//Destructor
	~item(){}

	//Change Quantity Function	
	void modQuantity(int val) {
		quantity += val;
	}

	//Return Functions
	string getName() {
		return name;
	}

	double getCost() {
		return cost;
	}

	int getQuantity() {
		return quantity;
	}

	void print() {
		cout << name << " $" << cost << " #" << quantity;
	}
};

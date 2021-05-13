//	Triangle.h
//
//	Zac Peterson
//	3/10/2020
//	This file contains the triangle class and its member function declarations.
//	Triangle is an inherited object of type shape
//


#include "Shape.h"
using namespace std;

class Triangle : public Shape {
private:
	int edges[T_SIDES];
	//Note: Edges[2] MUST be hypotenuse for area calculation
public:
	//Constructors and Destructors	
	Triangle() : Shape(){
		for(int i = 0; i < T_SIDES; ++i)
			edges[i] = 0;
	}

	Triangle(int edges[]) : Shape() {
		for(int i = 0; i < T_SIDES; ++i)
			this->edges[i] = edges[i];
	}	

	~Triangle() {}

	//Getters
	int getEdge(int index) {
		return edges[index];
	}

	//Setters
	void setEdges(int edges[]) {
		for(int i = 0; i < T_SIDES; ++i)
			this->edges[i] = edges[i];
	}

	//Calculations
	void calcPerimeter() {
		int sum = 0;
		for(int i = 0; i < T_SIDES; ++i)
			sum += edges[i];
		setPerimeter(sum);
	}	

	void calcArea() {
		setArea((edges[0] * edges[1]) / 2);
	}
};

//	Rectangle.h
//
//	Zac Peterson
//	3/9/2020
//	This object represents a rectangular shape and includes its member function definitions within the header file.
//

#include "Shape.h"
using namespace std;

class Rectangle : public Shape {
private:
	int edges[R_SIDES];

public:
	Rectangle() : Shape() {
		for(int i = 0; i < R_SIDES; ++i)
			edges[i] = 0;
	}

	Rectangle(int edges[]) : Shape() {
		for(int i = 0; i < R_SIDES; ++i)
			this->edges[i] = edges[i];
	}

	~Rectangle() {}
	
	//Getters
	int getEdge(int index) { return edges[index]; }

	//Setters
	void setEdges(int edges[]) {
		for (int i = 0; i < R_SIDES; ++i)
		       this->edges[i] = edges[i];
	}	

	//Perimeter calculation
	void calcPerimeter() {
		int sum = 0;
		for(int i = 0; i < R_SIDES; ++i)
			sum += edges[i];
		setPerimeter(sum * 2);
	}

	//Area calculation
	void calcArea() {
		setArea(edges[0] * edges[1]);
	}
		
};

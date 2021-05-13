//	hw09.cpp
//
//	Zac Peterson
//	2/10/2020
//	This file contains the main function of the program and goes through the steps outlined 
//	in the homework 9 pdf file
//

#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;

//Constant declaration was moved to Shape.h
//const int R_SIDES = 2;
//const int T_SIDES = 3;

int main() {
	
	//Instantiate objects
	Rectangle r;
	Triangle t;
	
	//Arrays to set object values
	int rEdges[R_SIDES];
	int tEdges[T_SIDES];

	//User input for object values
	for(int i = 0; i < R_SIDES; ++i) {
		cout << "Please enter side #" << i+1 << " of the rectangle ";
		cin >> rEdges[i];
		cin.ignore(1000, '\n');
	}

	cout << endl;

	for(int i = 0; i < T_SIDES; ++i) {
		cout << "Please enter side #" << i+1 << " of the triangle. NOTE: Side 3 must be hypotenuse. ";
		cin >> tEdges[i];
		cin.ignore(1000, '\n');
	}

	//Assign values to objects
	r.setEdges(rEdges);
	t.setEdges(tEdges);

	//Calculate area and perimeter
	r.calcPerimeter();
	r.calcArea();

	t.calcPerimeter();
	t.calcArea();

	//Final output
	cout << endl << "The perimeter of the rectangle is " << r.getPerimeter() << endl;
	cout << "The area of the rectangle is " << r.getArea() << endl;
	cout << "The perimeter of the triangle is " << t.getPerimeter() << endl;
	cout << "The area of the triangle is " << t.getArea() << endl;

	return 0;	
}


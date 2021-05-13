//	Shape.h
//
//	Zac Peterson
//	3/10/2020
//	This file containes the shape class which contains its standard functions and virtual functions for calculating
//	various elements of its subclasses
//

#ifndef SHAPE_H
#define SHAPE_H

using namespace std;

const int R_SIDES = 2;
const int T_SIDES = 3;

class Shape {
	private:
		double area;
		int perimeter;

	public:
		//Constructors and Destructors
		Shape() {
			area = 0;
			perimeter = 0;
		}
		
		Shape(double area, int perimeter) {
			this->area = area;
			this->perimeter = perimeter;
		}

		~Shape() {}


		//Getters
		double getArea() { 
			return area;
		}

		int getPerimeter() {
			return perimeter;
		}

		//Setters
		void setArea(double area) {
			this->area = area;
		}

		void setPerimeter(int perimeter) {
			this->perimeter = perimeter;
		}

		//Virtual functions
		virtual void calcPerimeter() {}	
		virtual void calcArea() {}
};		

#endif

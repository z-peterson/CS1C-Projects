#include "date.h"
using namespace std;

date::date() {
	day = 0;
	month = 0;
	year = 0;
}

void date::changeMonth(int month) {
	this->month = month;}

void date::changeDay(int day) {
	this->day = day;
}

void date::changeYear(int year) {
	this->year = year;
}

date date::operator=(const date &temp) {
	changeMonth(temp.returnMonth());
	changeDay(temp.returnDay());
	changeYear(temp.returnYear());

	return temp;
}

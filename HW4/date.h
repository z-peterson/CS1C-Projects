#ifndef DATE_H
#define DATE_H
using namespace std;

class date {
	int month, day, year;
public:
	date();
	~date() {}
	int returnMonth() const{
		return month;
	}
	int returnDay() const{
		return day;
	}
	int returnYear() const{
		return year;
	}

	void changeMonth(int month);
	void changeDay(int day);
	void changeYear(int year);

	date operator= (const date &temp); 
};

#endif

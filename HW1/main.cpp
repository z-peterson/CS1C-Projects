#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <random>
using namespace std;

int main() {
	int rand1, rand2, rand3, sum;
	rand1 = rand2 = rand3 = sum = 0;

	//Using mersenne twister for random number generation
	random_device rd;
	uniform_int_distribution<> d(100, 999);
	mt19937 gen(rd());

	cout << "Here are three random three digit numbers: ";

	rand1 = d(gen);
	cout << rand1 << " ";

	rand2 = d(gen);
	cout << rand2 << " ";

	rand3 = d(gen);
	cout << rand3 << endl;

	sum = rand1 + rand2 + rand3;

	cout << "The sum of the digits tripled is " << sum * 3 << endl;
	cout << "That number backwards is ";
	string digits = to_string(sum * 3);

	int lcv = digits.size();
	for (int i = 0; i < lcv; ++i) {
		cout << digits.back();
		digits.pop_back();
	}

	//enum and typedef implementation example (not actually used anywhere else)
	enum colors { blue, green, red };
	typedef unsigned long ulong;

	int array[10];

	cout << endl << "Ten random numbers within an array are: ";

	for (int i = 0; i < 10; ++i) {
		array[i] = d(gen);
		
		cout << array[i] << " ";
	}

	cout << endl << "Those numbers sorted, written to a file, then read from a file are: ";
	
	//Using STL sort to sort the array using quicksort
	sort(array, array + 10);

	//File operations
	ofstream infile;
	infile.open("array.txt");

	if(infile.is_open()) {
		for (int i = 0; i < 10; ++i) {
			infile << " " << array[i];
		}
	}

	infile.close();

	ifstream outfile;
	string temp;

	outfile.open("array.txt");

	if (outfile.is_open()) {
		while (!outfile.eof()) {
			outfile >> temp;
			cout << temp << ' ';
		}
	}

	outfile.close();

	//wipe file for next run
	remove("array.txt");

	return 0;
}



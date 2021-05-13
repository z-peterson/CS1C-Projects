#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

void printAnswers();
vector<int> Lotto(int spots, int random);

int main() {
	printAnswers();

	cout << endl << "Passing lotto function values 6 and 51" << endl;
	vector<int> winners = Lotto(6, 51);
	

	for(auto i = winners.begin(); i != winners.end(); ++i) {
		cout << " " << *i;
	}

	cout << endl;

	return 0;
}

void printAnswers() {
	cout << "The standard template library is a library of header files containing various useful functions and moderated libraries for efficient and commonly used algorithms." << endl;
	cout << "One of these libraries is that for the vector, which is a class for a dynamic array containing several different functions for manipulating its data members." << endl;
	cout << "Some vector functions include push_back(), pop_back(), resize(), insert(),  and clear(), which will modify the vector's size in different ways depending on what is passed to the function." << endl;
	cout << "The Array is another class within STL which allows you to create an array of a data type and is similar to the vector in many ways. However, arrays are fixed where as the vectors are resizable. When an array is declared, it must be given a size and that size may not be changed until it goes out of scope and is redclared." << endl;
	cout << "While the resize function within the vector allocates new spaces within memory for the vector to use and manipulate, or deallocates them, the resreve functions imply allocates memory for the vector to use later." << endl;
	cout << "The begin() and end() functions within the vector allow you to access the first and last members of the vector. " << endl << endl;
}

vector<int> Lotto(int spots, int random) {
	vector<int> numbers;
	mt19937 mt_rand(time(0));
	int temp = 0;

	for(int i = spots; i > 0; --i) {
		temp = mt_rand() % random;
		numbers.push_back(temp);
	}
	
	sort(numbers.begin(),numbers.end());

	return numbers;	
}

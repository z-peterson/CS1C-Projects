/*
 * 	Zac Peterson
 * 	2/25/2020
 * 	This program reverses a substring based on two indices. This is done through a recursive function.
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string iterativeReverse(string str, int start, int end);
string recurseReverse(string str, int start, int end);

int main() {
	cout << "Starting string: ";
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cout << alphabet << endl;

	cout << "Passing reverse the string along with values 11 and 18 for indices." << endl;
	alphabet = recurseReverse(alphabet, 11, 18);
	cout << alphabet << endl;	

	cout << "Passing reverse the string along with values 5 and 23 for indices." << endl;
	alphabet = recurseReverse(alphabet, 5, 23);
	cout << alphabet << endl;	

	cout << "Realphebetizing the string." << endl;
	sort(alphabet.begin(), alphabet.end());
	cout << alphabet << endl;

	cout << "Dealphebetizing the string." << endl;
	alphabet = recurseReverse(alphabet, 0, 25);
	cout << alphabet << endl << endl;

	cout << "Here is the same program using the iterative approach:" << endl;

	cout << "Starting string: ";
	alphabet = "abcdefghijklmnopqrstuvwxyz";
	cout << alphabet << endl;

	cout << "Passing reverse the string along with values 11 and 18 for indices." << endl;
	alphabet = iterativeReverse(alphabet, 11, 18);
	cout << alphabet << endl;	

	cout << "Passing reverse the string along with values 5 and 23 for indices." << endl;
	alphabet = iterativeReverse(alphabet, 5, 23);
	cout << alphabet << endl;	

	cout << "Realphebetizing the string." << endl;
	sort(alphabet.begin(), alphabet.end());
	cout << alphabet << endl;

	cout << "Dealphebetizing the string." << endl;
	alphabet = iterativeReverse(alphabet, 0, 25);
	cout << alphabet << endl;

	cout << "When calling the iterative form of the function, there is only one instance of the function on the stack. This uses less memory but must be done inside of a loop witha  check and increment instead.";

	return 0;
}

//Recursive substring reversal function
string recurseReverse(string str, int start, int end) {	
	if(end - start > 0 ) {	
		swap(str[start], str[end]);
		str = recurseReverse(str, start + 1, end - 1);
	}

	return str;
}

//Iterative substring reversal function
string iterativeReverse(string str, int start, int end) {
	for(; end - start > 0; ++start) {
		swap(str[start], str[end]);
		--end;
	}

	return str;
}

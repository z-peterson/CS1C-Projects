/*
 	Zac Peterson
	main.cpp
	This is the main.cpp for the HW2 Project, to test the functions and objects within it
*/
#include "deck.h"
using namespace std;

int main() {
	deck d1;
	card start[DECK_SIZE];

	d1.CreateDeck();
	
	for(int i = 0; i < DECK_SIZE; ++i) {
		start[i].rank = d1.cards[i].rank;
		start[i].suit = d1.cards[i].suit;
	}

	d1.PrintDeck();
	d1.ShuffleDeck();
	d1.PrintDeck();

	int shuffles = 1;
	while(start[1].rank != d1.cards[1].rank || start[1].suit != d1.cards[1].suit){
		d1.ShuffleDeck();
		shuffles++;
	}

	d1.PrintDeck();
	cout << "It took " << shuffles << " shuffles to achieve the same deck as we started with ";

	return 0;
}
	

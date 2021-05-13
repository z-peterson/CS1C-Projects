/*
 	Zac Peterson
	deck.h
	This header file defines the deck object which consists of many card objects assorted into a deck
*/
#include "card.h"
#include <iostream>
#include <vector>

const int DECK_SIZE = 52;
enum Suit { hearts, diamonds, clubs, spades };

using namespace std;

class deck {
private:
	bool shuffled;
public:
	card cards[DECK_SIZE];

	deck();
	card ReturnCards(int i) {
		return cards[i];	
	}
	void CreateDeck();
	void ShuffleDeck();
	void PrintDeck();
};

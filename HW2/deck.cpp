/*
	Zac Peterson
	deck.cpp
	This file defines the functions within the deck object as defined in deck.h
*/

#include "deck.h"
using namespace std;

deck::deck() { //Default constructor
	CreateDeck();
	shuffled = false;
}

void deck::CreateDeck() { //Initializes deck, called by default constructor
	for(int i = 0; i < DECK_SIZE; ++i) {
		if(i < 13)
			cards[i].suit = diamonds;
		else if(i<26)
			cards[i].suit = hearts;
		else if(i<39)
			cards[i].suit = clubs;
		else
			cards[i].suit = spades;	
		cards[i].rank = i % 13;
	}

	shuffled = false;
}

void deck::PrintDeck() { //Void returning function to print each card out
	for(int i = 0; i < DECK_SIZE; ++i){
		if(!cards[i].suit)
			cout << "H";
		else if(cards[i].suit == diamonds)
			cout << "D";
		else if(cards[i].suit == clubs)
			cout << "C";
		else if(cards[i].suit == spades)
			cout << "S";

		if(cards[i].rank < 9)
			cout << cards[i].rank + 2;
		else if(cards[i].rank == 9)
			cout << "J";
		else if(cards[i].rank == 10)
			cout << "Q";
		else if(cards[i].rank == 11)
			cout << "K";
		else if(cards[i].rank == 12)
			cout << "A";
		
		cout << " ";
	}

	if(shuffled)
		cout << endl << "This deck has been shuffled";
	else
		cout << endl << "This deck has not been shuffled";

	cout << endl;

	shuffled = false;
}

void deck::ShuffleDeck() { //Performs a perfect shuffle on the deck
	card temp[DECK_SIZE];
	int j = 0;
	int k = 1;
		
	for(int i = 0; i < DECK_SIZE; ++i) {
		temp[i].suit = cards[i].suit;
		temp[i].rank = cards[i].rank;
	}
	
	for(int i = 0; i < DECK_SIZE / 2; ++i) {	
		cards[k].suit = temp[DECK_SIZE / 2 + i].suit;
	       	cards[k].rank = temp[DECK_SIZE / 2 + i].rank;
		cards[j].suit = temp[i].suit;
		cards[j].rank = temp[i].rank;
		j += 2;
		k += 2;	
	}

	shuffled = true;
}

/*
 	Zac Peterson
	Card.cpp
	This file defines the functions within the card object
*/
#include "card.h"
using namespace std;

card::card(){ //Default constructor
	rank = 0;
	suit = 'H';
}

card::card(int suit, int rank) { //copy constructor
	this->suit = suit;
	this->rank = rank;	
}

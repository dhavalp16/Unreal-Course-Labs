// Copyright A.T. Chamillard. All Rights Reserved.

#include "Random.h"
#include "Deck.h"
#include "Card.h"

#include <iostream>

using namespace exercise9;

int main()
{
    // initialize random number generator
    Random::Initialize();

    // create a new deck and tell the deck to print itself
    Deck Deck;
    //Deck.Print();

    // tell the deck to shuffle and print itself
    //Deck.Shuffle();
    //Deck.Print();

    // take the top card from the deck and print the card
    Card Card0 = Deck.TakeTopCard();
    Card0.Print();
    // take the top card from the deck and print the card
    Card Card1 = Deck.TakeTopCard();
    Card1.Print();

}
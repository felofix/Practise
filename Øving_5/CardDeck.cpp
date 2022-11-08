//
//  CardDeck.cpp
//  Øving_5
//
//  Created by Felix Aarekol Forseth on 13/07/2022.
//

#include "CardDeck.hpp"
#include "card.h"
#include <iostream>
#include <map>
#include <vector>

CardDeck::CardDeck(){
    for (int i = 0; i < 4; i++){  // Number of suits.
        for (int j = 0; j < 13; j++){  // Number of ranks.
            Card tempcard(static_cast<Suit>(i), static_cast<Rank>(j));  // Creating a card.
            cards.push_back(tempcard);  // Pushing the card into the deck.
        }
    }
}

void CardDeck::swap(int first, int second){
    Card temp = cards[first];
    cards[first] = cards[second];
    cards[second] = temp;
}

void CardDeck::print(){
    for (int i = 0; i < 52; i++){
        string card = cards[i].toString();
        cout << card << endl;
    }
}

void CardDeck::printShort(){
    for (int i = 0; i < 52; i++){
        string card = cards[i].toStringShort();
        cout << card << endl;
    }
}

void CardDeck::shuffle(){
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < 100; i++){
        swap(rand() % 52, rand() % 52);
    }
}

Card CardDeck::drawCard(){
    Card drawn = cards[0];
    cards.erase(cards.begin());
    return drawn;
}

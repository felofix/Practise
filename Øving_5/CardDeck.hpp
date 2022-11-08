//
//  CardDeck.hpp
//  Øving_5
//
//  Created by Felix Aarekol Forseth on 13/07/2022.
//

#ifndef CardDeck_hpp
#define CardDeck_hpp

#include <stdio.h>
#include "card.h"
#include <vector>

using namespace std;

class CardDeck{
private:
    vector<Card> cards;
public:
    CardDeck();
    void swap(int first, int second);
    void print();
    void printShort();
    void shuffle();
    Card drawCard();
};

#endif /* CardDeck_hpp */

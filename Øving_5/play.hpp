//
//  play.hpp
//  Øving_5
//
//  Created by Felix Aarekol Forseth on 13/07/2022.
//

#ifndef play_hpp
#define play_hpp
#include <stdio.h>
#include "card.h"
#include <vector>
#include <map>
#include "CardDeck.hpp"

using namespace std;

int givescore();
int maxcheckscore(vector<Card> cards); // Returns max-score with aces being 11.
int mincheckscore(vector<Card> cards); // Returns min-score with aces being 1.
vector<Card> hit(vector<Card> cards, Card card); // Continues the game with more cards.
void play_blackjack();  // Plays the game.
int evaluatePlayereScore(vector<Card> cards); // evaluates player score. 
void endgame(CardDeck deck, vector<Card> pcards, vector<Card> dcards); // Final game. 

#endif /* play_hpp */

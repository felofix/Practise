//
//  card.cpp
//  Øving_5
//
//  Created by Felix Aarekol Forseth on 13/07/2022.
//

#include <stdio.h>
#include <iostream>
#include <map>
#include "card.h"

string suitToString(Suit suit){
    map<Suit, string> suitmap;
    suitmap[Suit::clubs] = "Clubs";
    suitmap[Suit::diamonds] = "Diamonds";
    suitmap[Suit::hearts] = "Hearts";
    suitmap[Suit::spades] = "Spades";
    return suitmap[suit];
}

string suitToRank(Rank rank){
    map<Rank, string> rankmap;
    rankmap[Rank::two] = "Two";
    rankmap[Rank::three] = "Three";
    rankmap[Rank::four] = "Four";
    rankmap[Rank::five] = "Five";
    rankmap[Rank::six] = "Six";
    rankmap[Rank::seven] = "Seven";
    rankmap[Rank::eight] = "Eight";
    rankmap[Rank::nine] = "Nine";
    rankmap[Rank::ten] = "Ten";
    rankmap[Rank::jack] = "Jack";
    rankmap[Rank::queen] = "Queen";
    rankmap[Rank::king] = "King";
    rankmap[Rank::ace] = "Ace";
    return rankmap[rank];
}

string suit2Srank2R(Suit suit, Rank rank){
    map<Suit, string> shortsuitmap;
    shortsuitmap[Suit::clubs] = "C";
    shortsuitmap[Suit::diamonds] = "D";
    shortsuitmap[Suit::hearts] = "H";
    shortsuitmap[Suit::spades] = "S";
    
    map<Rank, string> shortrankmap;
    shortrankmap[Rank::two] = "2";
    shortrankmap[Rank::three] = "3";
    shortrankmap[Rank::four] = "4";
    shortrankmap[Rank::five] = "5";
    shortrankmap[Rank::six] = "6";
    shortrankmap[Rank::seven] = "7";
    shortrankmap[Rank::eight] = "8";
    shortrankmap[Rank::nine] = "9";
    shortrankmap[Rank::ten] = "10";
    shortrankmap[Rank::jack] = "11";
    shortrankmap[Rank::queen] = "12";
    shortrankmap[Rank::king] = "13";
    shortrankmap[Rank::ace] = "14";
    string shortstring = shortsuitmap[suit] + shortrankmap[rank];
    return shortstring;
}

Card::Card(Suit suit, Rank rank):s{suit},r{rank}{} //Member initilization.

Suit Card::getSuit(){ // Returns the suit held by that member.
    return s;
}
Rank Card::getRank(){ // Returns the rank help by that member.
    return r;
}
string Card::toString(){ // Prints out a nice string. 
    string str = suitToRank(r) + " of " + suitToString(s);
    return str;
}

string Card::toStringShort(){
    string str = suit2Srank2R(s, r);
    return str;
}


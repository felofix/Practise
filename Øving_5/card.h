//
//  card.h
//  Øving_5
//
//  Created by Felix Aarekol Forseth on 13/07/2022.
//

#ifndef card_h
#define card_h
#include <iostream>
#include <map>

using namespace std;

enum class Suit{
    clubs,
    diamonds,
    hearts,
    spades
};
enum class Rank{
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king,
    ace
};

string suitToString(Suit suit);  // Takes in a suit and returns a string of that suit.
string rankToString(Rank rank); // Takes in a rank and returns a string of that rank.
string suit2Srank2R(Suit suit, Rank rank); // Creates a short. 

class Card{
private:
    Suit s;
    Rank r;
public:
    Card(Suit suit, Rank rank); // constructor
    Suit getSuit(); // returns suit in form of Suit.
    Rank getRank(); // returns rank in form of Rank.
    string toString(); // Prints out a nice string.
    string toStringShort();     
};

#endif /* card_h */

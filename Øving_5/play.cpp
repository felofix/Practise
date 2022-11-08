//
//  play.cpp
//  Øving_5
//
//  Created by Felix Aarekol Forseth on 13/07/2022.
//

#include "play.hpp"

void endgame(CardDeck deck, vector<Card> pcards, vector<Card> dcards){
    int playerscore;
    int dealerscore = mincheckscore(dcards);
    cout << "The dealers second card was the " << dcards[1].toString() << "." << endl;
    
    if (maxcheckscore(pcards) > 21){
        playerscore = mincheckscore(pcards);
    }
    else{
        playerscore = maxcheckscore(pcards);
    }
    
    while (dealerscore <= 17){
        Card newcard = deck.drawCard();
        cout << "The dealer drew the " << newcard.toString() << endl;
        dcards.push_back(newcard);
        dealerscore = mincheckscore(dcards);
    }
    if (dealerscore > 21){
        cout << "The dealer busted with a score of " << dealerscore << ". You win! :)" << endl;
    }
    if (dealerscore == playerscore){
        cout << "You scored got the same score of " << dealerscore << ". You draw :|" << endl;
    }
    if (dealerscore > playerscore && dealerscore < 21){
        cout << "The dealer got a score of " << dealerscore << ". You had a score of " << playerscore  << ". You lose :(" << endl;
    }
    if (dealerscore < playerscore){
        cout << "The dealer got a score of " << dealerscore << ". You had a score of " << playerscore  << ". You win :)" << endl;
    }

}

int evaluatePlayereScore(vector<Card> cards){
    int min = mincheckscore(cards);
    int eval = 0;

    if (min > 21) // Lost.
    {
        eval = 1;
    }
    
    return eval;
}

vector<Card> hit(vector<Card> cards, Card card){
    cards.push_back(card);
    return cards;
}

int givescore(Card card){
    int score = 0;
    
    if ((int)card.getRank() >= 8){
        score += 10;
    }
    else{
        score += (int)card.getRank() + 2;
    }
    return score;
}

int maxcheckscore(vector<Card> cards){
    int max = 0;
    for (int i = 0; i < cards.size(); i++){
        if ((int)cards[i].getRank() < 12){
            max += givescore(cards[i]);
        }
        else{
            max += 11;
        }
    }
    return max;
}

int mincheckscore(vector<Card> cards){
    int max = 0;
    for (int i = 0; i < cards.size(); i++){
        if ((int)cards[i].getRank() < 12){
            max += givescore(cards[i]);
        }
        else{
            max += 1;
        }
    }
    return max;
}

void play_blackjack(){
    vector<Card> pcards;
    vector<Card> dcards;
    CardDeck Deck;
    Deck.shuffle();
    int options;
    bool lost = false;
    
    cout << "Welcome to blackjack!" << endl;
    
    for (int i = 0; i < 2; i++){    // Deals the intial cards.
        Card playercard = Deck.drawCard();
        pcards.push_back(playercard);
        Card dealercard = Deck.drawCard();
        dcards.push_back(dealercard);
    }
    
    cout << "You drew the " << pcards[0].toString() << " and the " << pcards[1].toString() <<"."<<endl;
    cout << "The visible deaeler card is the " << dcards[0].toString() << "." << endl;
    
    while (lost == false){
        cout << "Type 1 for score, 2 to stop or 3 for another card." << endl;
        cin>>options;
        switch (options) {
            case 1: // Score
                cout << "Your current max score is " << maxcheckscore(pcards) << " and your current min score is " << mincheckscore(pcards) << "." << endl;
                break;
            case 2: // Stop
                endgame(Deck, pcards, dcards);
                lost = true;
                break;
            case 3: // Another card
                Card newcard = Deck.drawCard();
                pcards = hit(pcards, newcard);
                int eval = evaluatePlayereScore(pcards);
                switch (eval)
                {
                    case 0:{
                        cout << "You drew the " << newcard.toString() << ". " << endl;
                        break;
                    }
                    case 1:{
                        cout << "You drew the " << newcard.toString() << " and lost. Sorry :(" << endl;
                        lost = true;
                        break;
                    }
                break;
                }
        }
    }
}



//
//  mastermind.cpp
//  Øving_4
//
//  Created by Felix Aarekol Forseth on 12/07/2022.
//

#include "mastermind.hpp"
#include "tests.hpp"
#include "utilities.hpp"

void playMastermind()
{
    constexpr int size = 4;
    int corrpos = 0;
    int tries = 0;
    int maxtries = 8;
    string code = randomizeString(size, 'A', 'F');
    cout << code << endl;
    cout << "Welcome to mastermind!" << endl;
    
    while (corrpos != size){
        if (tries == maxtries){
            cout << "I'm sorry but you have lost the game :(" << endl;
            break;
        }
        string guess = readInputToString(size, 'A', 'F');
        corrpos = checkCharactersAndPosition(code, guess);
        int corrlet = checkCharacters(code, guess);
        if (corrpos == size){
            cout << "Congratulations, you won the game :)" << endl;
            break;
        }
        else{
            cout << "You have " << corrpos << " in the correct position and " << corrlet << " with the correct letter." << endl;
            cout << "Please guess again!" << endl;
            tries ++;
            continue;
        }
    }
    cout << "The code was: " << code << endl;
}

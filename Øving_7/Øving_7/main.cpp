//
//  main.cpp
//  Øving_7
//
//  Created by Felix Aarekol Forseth on 15/07/2022.
//

#include <iostream>
#include "utilities.hpp"
#include <vector>

void testAnimal(){
    vector<Animal*> animals;
    Animal Kitty("Kitty", 21);
    Dog Matheo("Matheo", 23);
    Cat Felix("Flixi", 23);
    animals.insert(animals.begin(), &Kitty);
    animals.insert(animals.begin(), &Matheo);
    animals.insert(animals.begin(), &Felix);
    for (int i = 0; i < animals.size(); i++){
        string str = animals[i]->toString();
        cout << str << endl;
    }
}

int main(int argc, const char * argv[]) {
    testAnimal();
    return 0;
}

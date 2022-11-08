//
//  utilities.cpp
//  Øving_7
//
//  Created by Felix Aarekol Forseth on 15/07/2022.
//

#include "utilities.hpp"

Animal::Animal(string n, int a){name = n; age = a;}

string Animal::toString(){
    return ("Animal: " + name + " " + to_string(age));
}
Cat::Cat(string n, int a):Animal(n, a){}

string Cat::toString(){
    return ("Cat: " + name + " " + to_string(age));
}

Dog::Dog(string n, int a):Animal(n, a){}

string Dog::toString(){
    return ("Dog: " + name + " " + to_string(age));
}

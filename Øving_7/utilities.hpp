//
//  utilities.hpp
//  Øving_7
//
//  Created by Felix Aarekol Forseth on 15/07/2022.
//

#ifndef utilities_hpp
#define utilities_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Animal{
public:
    Animal(string n, int a);
    virtual string toString();
protected:
    string name;
    int age;
};

class Cat : public Animal {
public:
    Cat(string n, int a);
    string toString();
};

class Dog : public Animal {
public:
    Dog(string n, int a);
    string toString();
};

#endif /* utilities_hpp */

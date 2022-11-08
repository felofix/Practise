//
//  utilities.hpp
//  Øving_4
//
//  Created by Felix Aarekol Forseth on 12/07/2022.
//

#ifndef utilities_hpp
#define utilities_hpp
#include <iostream>
#include <stdio.h>

using namespace std;

int incrementByValueNumTimes(int startValue, int increment, int numTimes); // Increments with pass-by-value.
int incrementByValueNumTimesRef(int& startValue, int increment, int numTimes); // Increments with pass-by-reference.
void swapNumbers(int& a, int& b); // Swaps to numbers globally. 
vector<int> randomizeVector(vector<int>& vec, int n); // Vector randomizer.
vector<int> sortVector(vector<int>& vec); // Sorting the vector. 
int medianOfVector(vector<int> vec); // Finding the median of a vector.

struct Student{
    string name;
    string studyprogram;
    int age;
};

void printStudent(Student student); // Printing student information.
void testString();
string randomizeString(int n, char lower, char upper); // Randomizing string. 
string readInputToString(int n, char lower, char upper); // Yeah.
int countChar(string str, char c);
int checkCharactersAndPosition(string code, string& guess);
int checkCharacters(string code, string guess);

#endif /* utilities_hpp */

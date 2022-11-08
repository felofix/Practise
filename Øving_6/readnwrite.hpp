//
//  readnwrite.hpp
//  Øving_6
//
//  Created by Felix Aarekol Forseth on 15/07/2022.
//

#ifndef readnwrite_hpp
#define readnwrite_hpp

#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;


void write(string str, string destination); // Write a word in textdestination. 
void readAndWrite(); // Read and write from textfile.
void letterstatistics(string filepath); // Get a statistical overview of the characters used in the textfile. 

#endif /* readnwrite_hpp */

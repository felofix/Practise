//
//  main.cpp
//  Øving_4
//
//  Created by Felix Aarekol Forseth on 12/07/2022.
//

#include <iostream>
#include "utilities.hpp"
#include "tests.hpp"
#include "mastermind.hpp"


int main(int argc, const char * argv[]) {
    using namespace std;
    
    /* 1a)
    Den returnerer v0 = 5 fordi vi har brukt pass-by-value og ikke pass-by-reference
    for argumentet i funksjonen. 
    */
     
    /* 1c)
    testCallByValue(); // Virker. 
    */
    
    /* 1d)
    testCallByReference(); // Virker.
    */
    
    /* 1e)
    int a = 5;
    int b = 7;
    swapNumbers(a, b);
    cout<<a<<" "<<b<<endl;
    */
    
    /* 2a), 2c), 3a) and 3b)
    testVectorSorting();
    */
    
    /* 4c
    Student Felix;
    Felix.name = "Felix";
    Felix.studyprogram = "fysikk";
    Felix.age = 23;
    printStudent(Felix);
    */
    
    /* 5c)
    testString();
    */
    
    /* 5f)
    readInputToString(10, 'A', 'F');
    */
    
    /* 5h)
    testString();
    */
    
    // playMastermind();
    
    return 0;
}

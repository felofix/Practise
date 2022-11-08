//
//  main.cpp
//  Hello World
//
//  Created by Felix Aarekol Forseth on 03/07/2022.
//

#include <iostream>
#include <math.h>


double maxOfTwo(double a, double b){
    if (a>b){
        std::cout<<a<<" is greater than "<<b<<"\n";
        return a;
    }
    else{
        std::cout<<b<<" is greater than "<<a<<"\n";
        return b;
    }
}

int Fibonacci(int n){
    int a = {0};
    int b = {1};
    
    std::cout<<"Fibonacci numbers: ";
    
    for (int i = 1; i < n +1; i++){
        std::cout<<i<<" "<<b<<"\n";
        int temp = b;
        b += a;
        a = temp;
        std::cout<<"----\n";
    }
    return b;
}

int squareNumberSum(int n){
    int totalsum = 0;
    for (int i = 1; i < n; i++){
        totalsum += pow(i,2);
        std::cout<<pow(i,2)<<"\n";
    }
    return totalsum;
}

int triangleNumbersBelow(int n){
    int acc = {1};
    int num = {2};
    std::cout<<"Triangle numbers below "<<n<<": ";
    
    while (acc < n){
        std::cout<<acc<<" ";
        acc += num;num++;
    }
    return n;
}

int isPrime(int n){
    for (int j = 2;j < n; j++){
        if (n%j == 0){
            return false;
        }
    }
    return true;
}

int naivePrimeNumberSearch(int n){
    for (int number = 2; number < n; number++){
        if (isPrime(number)){
            std::cout<<number<<" is a prime\n";
        }
    }
    return n;
}

int findGreatestDivisor(int n){
    for (int divisor = n-1; divisor>0; divisor--){
        if (n%divisor == 0){
            return divisor;
        }
    }
    return n;
}

int main() {
    using namespace std;
    
    /* a) Største av to tall.
    double a;
    double b;
    cout<<"Give me two numbers Max, its time(seperated by a space): \n";
    cin>>a>>b;
    maxOfTwo(a, b);
    */
    
    /* c) Fibonacci.
    Fibonacci(20);
    */
    
    /* d) Sum av kvadrerte tall.
    squareNumberSum(10);
    */
    
    /* e) Trekanttall.
    triangleNumbersBelow(50);
    cout<<"\n";
    */
    
    /* f) Primtall 1.
    int ner;
    
    cout<<"Give a number for primechecking: ";
    cin>>ner;
    
    int binary = isPrime(ner);
    if (binary == 0){
        cout<<ner <<" is not a prime.\n";
    }
    else{
        cout<<ner <<" is a prime.\n";
    }
    */
    
    /* g) Primtall 2.
    naivePrimeNumberSearch(10);
    */
    
    /* h) Største nevner mindre enn tallet selv.
    int greatest;
    cout<<"Pick a number to find the greatest divisor for: \n";
    cin>>greatest;
    
    cout<<"The greatest divisor for "<<greatest<<" is: "<<findGreatestDivisor(greatest)<<"\n";
   */
}



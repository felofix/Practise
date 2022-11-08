//
//  main.cpp
//  New_project
//
//  Created by Felix Aarekol Forseth on 07/07/2022.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>


void inputAndPrintInteger(){
    using namespace std;
    int integer;
    cout<<"Skriv inn et tall: ";
    cin>>integer;
    cout<<"Du skrev: "<<integer<<"\n";
    
}

int inputInteger(){
    int integer;
    std::cout<<"Skriv inn et tall: ";
    std::cin>>integer;
    
    return integer;
}

void inputIntegersAndPrintSum(){
    int a = inputInteger();
    int b = inputInteger();
    std::cout<<"Summen av tallene er: "<<a + b<<"\n";
    
}

int isOdd(int n){
    if (n%2 == 0){
        return false;
    }
    else{
        return true;
    }
    return n;
}

void printHumanReadableTime(int n){
    int hours = n/3600;
    int minutes = (n - hours*3600)/60;
    int seconds = (n - hours*3600 - minutes*60);
    
    std::cout<<hours<<" timer, "<<minutes<<" minutter og "<<seconds<<" sekunder.\n";
}

void sumOfNumbers(){
    
    int N;
    int sumOfNumbers = {0};
    int temp;
    std::cout<<"Please enter the amount of numbers you would like to sum: ";
    std::cin>>N;
    
    for (int i = 1; i < N+1; i++){
        std::cout<<"Enter the "<<i<<". number to be added: ";
        std::cin>>temp;
        sumOfNumbers += temp;
    }
    std::cout<<"The sum is: "<<sumOfNumbers<<"\n";
}

void contSumOfNumbers(){
    int N = {1};
    int sumOfNumbers = {0};
    while (N != 0){
        std::cout<<"Enter a number to be summed: ";
        std::cin>>N;
        sumOfNumbers += N;
    }
    std::cout<<"The sum is: "<<sumOfNumbers<<"\n";
    
}

double inputDouble(){
    double floater;
    std::cout<<"Skriv inn et tall: ";
    std::cin>>floater;
    return floater;
}

double converter(){
    double crate = 9.75;
    std::cout<<"Konvertering fra NOK til Euro\n";
    double mny = inputDouble();
    while (mny < 0){
        std::cout<<"Vennligst skriv et tall som ikke er negativt: \n";
        mny = inputDouble();
    }
    std::cout<<std::setprecision(3)<<mny<<" kroner blir "<<mny/crate<<" euro.\n";
    return 0;
}

void printMulti(){
    int m;
    int n;
    std::cout<<"Gi en høyde og en bredde: ";
    std::cin>>m>>n;
    
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            std::cout<<i*j<<std::setw(7);
            if (j == n){
                std::cout<<"\n";
            }
        }
    }
}

double discriminant(double a, double b, double c){
    double quad = pow(b, 2) - 4*a*c;
    return quad;
}

void printRealRoots(double a, double b, double c){
    double quad = discriminant(a, b, c);
    if (quad > 0){
        double x1 = (-b+sqrt(quad))/(2*a);
        double x2 = (-b-sqrt(quad))/(2*a);
        std::cout<<"The real roots are: "<<x1<<" and "<<x2<<std::endl;
    }
    if (quad == 0){
        double x = (-b/(2*a));
        std::cout<<"The real root is: "<<x<<std::endl;
    }
    if (quad < 0){
        std::cout<<"This quadratic equation has no real roots"<<std::endl;
    }
}

void solveQuadraticEquation(){
    double a;
    double b;
    double c;
    std::cout<<"Please enter a, b and c seperated by spaces: ";
    std::cin>>a>>b>>c;
    printRealRoots(a, b, c);
}

std::vector<int> calculateSeries(int loan, int interest, int years){
    std::vector<int> l(years);
    int totalloan = loan;
    for (int i = 0; i < years; i++){
        int payment = totalloan/years + (static_cast<double>(interest)/100)*loan;
        loan -= totalloan/years;
        l[i] = payment;
    }
    return l;
}

std::vector<int> calculateAnnuity(int loan, int interest, int years){
    double c = static_cast<double>(interest)/100;
    int annunity = loan*(c/(1 - pow((1+c),-years)));
    std::vector<int> a(years);
    std::fill(a.begin(), a.end(), annunity);
    return a;
}

void writePlan(int loan, int interest, int years){
    int totalSeries = {0};  // Total series.
    int totalAnnuity = {0}; // Total annuity.
    std::vector<int> cSeries = calculateSeries(loan, interest, years); // Pulling the series vector.
    std::vector<int> cAnnuity = calculateAnnuity(loan, interest, years); // Pulling the annuity vector.
    
    for (int i = 0; i < years; i++){  // Calculating total for both loans.
        totalSeries += cSeries[i];
        totalAnnuity += cAnnuity[i];
    }
    
    for (int i = 0; i <= years + 2; i++){  // Printing everything. 
        if (i == 0){
            std::cout<<"År "<<"Annunitet "<<"Serie "<<"Differanse "<<std::setw(20)<<"\n";
        }
        if (i > 0 && i < years){
            std::cout<<i<<" "<<cAnnuity[i-1]<<cSeries[i-1]<<cAnnuity[i-1]-cSeries[i-1]<<std::setw(20)<<"\n";
        }
        if (i > 11){
            std::cout<<"Total "<<totalAnnuity<<totalSeries<<totalAnnuity-totalSeries<<std::setw(20)<<"\n";
        }
    }
}

int main(int argc, const char * argv[]) {
    using namespace std;
    
    /* 1a)
    inputAndPrintInteger(); */
    
    /* 1b)
    int integer = inputInteger();
    cout<<"Du skrev: "<<integer<<"\n"; */
    
    /* 1c)
    inputIntegersAndPrintSum(); */
    
    /* 1e)
    cout<<isOdd(6); */
    
    /* 1f)
    printHumanReadableTime(10000);
    return 0; */
    
    /* 2a)
    sumOfNumbers(); */
    
    /* 2b)
    contSumOfNumbers(); */
    
    /* 2d)
    inputDouble(); */
    
    /* 2e)
    converter(); */
    
    /* 3a)
    int c;
    cout<<"Velg mellom de tre funksjonene ved å skrive in 0-3:\n"\
        <<"0 = Avslutt\n"<<"1 = Summer to tall\n"<<"2 = Summer flere tall\n"\
        <<"3 = Konvertering fra NOK til Euro\n";
    cin>>c;
    
    while (c != 0){
        switch (c){
            case 1:
                inputIntegersAndPrintSum();
                break;
            case 2:
                sumOfNumbers();
                break;
            case 3:
                converter();
                break;
            
            default:
                cout<<"Velg et annet tall: ";
                cin>>c;
            //cout<<"Vennligst skriv et tall som svarer til en funksjon.";}
        }
        cout<<"Skriv 0 for å avslutte eller velg et nytt program.\n";
        cin>>c;
    }
    
     */
    
    /* 3b)
    printMulti();
    */
    
    /* 4a)
    double a = discriminant(1, 3, 1);
    */
    
    /* 4b)
    printRealRoots(1, -5, 6);
    */
    
    /* 4c/e)
    solveQuadraticEquation();
    */
    
    /* 5a)
    vector<int> l = calculateSeries(10000, 3, 10);
    
    for (int i = 0; i < 10; i++)
    {
        cout<<l[i]<<" "<<i<<endl;
    }
    */
    
    /* 5b)
    vector<int> a = calculateAnnuity(10000, 5, 10);
    
    for (int i = 0; i <= 10; i++)
    {
        cout<<a[i]<<endl;
    }
    */
    
    // 5c)
    //writePlan(10000, 3, 10);
    
}

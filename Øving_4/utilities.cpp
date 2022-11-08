//
//  utilities.cpp
//  Øving_4
//
//  Created by Felix Aarekol Forseth on 12/07/2022.
// 

#include "utilities.hpp"
#include <vector>

int incrementByValueNumTimes(int startValue, int increment, int numTimes)
{
    for (int i = 0; i < numTimes; i++) {
           startValue += increment;
       }
    return startValue;
}

int incrementByValueNumTimesRef(int& startValue, int increment, int numTimes)
{
    for (int i = 0; i < numTimes; i++) {
           startValue += increment;
       }
    return startValue;
}

void swapNumbers(int& a, int& b)
{
    int c = a; a = b; b = c;
}

vector<int> randomizeVector(vector<int>& vec, int n)
{
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < n; i++)
    {
        vec.push_back(rand() % 100);
    }
    return vec;
}


vector<int> sortVector(vector<int>& vec)
{
    long n = vec.size();
    int i = 1;
    while (i < n){
        int j = i;
        while (j > 0 && vec[j-1] > vec[j]){
            swapNumbers(vec[j], vec[j-1]);
            j--;
        }
        i++;
    }
    return vec;
}

int medianOfVector(vector<int> vec)
{
    double median = 0;
    long n = vec.size();
    if (n % 2 != 0){
        median = vec[n/2];
    }
    else{
        median = (vec[n/2] + vec[(n/2)-1])/static_cast<double>(2);
    }
    return median;
}

void printStudent(Student student){
    cout<<student.name<<" studerer "<<student.studyprogram<<" og er "<<student.age
        <<" år gammel."<<endl;
}

string randomizeString(int n, char lower, char upper){
    string str;
    srand(static_cast<unsigned int>(time(nullptr)));
    int range = (int)upper - (int)lower;
    
    for (int i = 0; i < n; i++){
        str += lower + rand() % range ;
    }
    return str;
}

string readInputToString(int n, char lower, char upper){
    string str;
    char temp;
    
    for (int i = 0; i < n; i++){
        cout<<"Please enter the "<< i + 1 << "st character: ";
        cin>>temp;
        if (islower(temp)){
            temp = toupper(temp);
        }
        if ((int)temp >= (int)lower && (int)temp <= (int)upper){
            str += temp;
        }
        else{
            cout<<"The character is not within the limits."<<endl;
            i--;
        }
    }
    return str;
}

int countChar(string str, char c){
    int occ = 0;
    for (int i = 0; i < str.size(); i++){
        if (str[i] == c){
            occ++;
        }
    }
    return occ;
}

int checkCharactersAndPosition(string code, string& guess){
    int corrpos = 0;
    
    for (int i = 0; i < guess.size(); i++){
        for (int j = 0; j < code.size(); j++){
            if (code[i] == guess[j] && j == i){
                corrpos ++;
                guess[i] = '*';
            }
        }
    }
    
    return corrpos;
}

int checkCharacters(string code, string guess){
    int corrlet = 0;
    
    for (int i = 0; i < guess.size(); i++){
        if (code.find(guess[i]) != string::npos){
            guess[i] = '*';
            corrlet += 1;
        }
    }
    return corrlet;
}

void testString(){
    int n = 8;
    string grades;
    grades = randomizeString(n, 'A', 'F');
    cout << grades << endl;
    vector<int> gradvec(6);
    double avg = 0;
    
    for (int i = 0; i < 6; i++){
        gradvec[i] = countChar(grades, 'A' + i);
        avg += (5-i)*gradvec[i];
    }
    cout<<"Your average is: "<<avg/n<<endl;
}

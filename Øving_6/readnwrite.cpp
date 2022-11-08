//
//  readnwrite.cpp
//  Øving_6
//
//  Created by Felix Aarekol Forseth on 15/07/2022.
//

#include "readnwrite.hpp"
#include <vector>

void write(string str, string destination){
    ofstream fw(destination, ios::out);
    fw << str << "\n";
    fw.close();
}

void readAndWrite(){
    int line = 0;
    string rfilepath;
    string wfilepath;
    cout << "Please provide a filepath to the textfile to read from: " << "\n ";
    cin>>rfilepath;
    cout << "Please provide a filepath to the textfile to write to: " << "\n " ;
    cin>>wfilepath;
    fstream file;
    string text;
    string finished;
    file.open(rfilepath, ios::in);
    if (file.is_open()){
        while(getline(file, text)){
            line ++;
            finished += to_string(line) + ". " + text + "\n";
        }
    }
    else{
        cout << "We couldnt find a file at that destination." << endl;
    }
    write(finished, wfilepath);
}


void letterstatistics(string filepath){
    vector<int> chars(26);
    fstream file;
    file.open(filepath, ios::in);
    char byte = 0;
    
    while (file.get(byte)){
        byte = tolower(byte);
        if ((int)byte >= 97 && (int)byte <= 122){
            chars[(int)byte - 97] ++;
        }
    }
    file.close();
    for (int i = 0; i < chars.size(); i ++){
        cout << (char)(i + 97) << ": " << chars[i] << setw(10);
    }
    cout << endl;
}

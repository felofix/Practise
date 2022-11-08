//
//  classcourse.cpp
//  Øving_6
//
//  Created by Felix Aarekol Forseth on 15/07/2022.
//

#include "classcourse.hpp"
#include <vector>

ostream& operator<<(ostream& os , const CourseCatalog& cc){
    for (const auto& elem : cc.Coursemap){
        os << elem.first << ": " << elem.second << endl;
    }
    return os;
}

void CourseCatalog::addCourse(string coursecode, string coursename){
    Coursemap.insert({coursecode, coursename});
}

void CourseCatalog::removeCourse(string coursecode){
    Coursemap.erase(coursecode);
}

string CourseCatalog::getCourse(string coursecode){
    return Coursemap[coursecode];
}

void CourseCatalog::writetextfile(){
    string str;
    string dest;
    for (const auto& elem : Coursemap){
        str += elem.first + ": " + elem.second + "\n";
    }
    cout << "Please choose destination for writing of courses: " << endl;
    cin>>dest;
    write(str, dest);
}

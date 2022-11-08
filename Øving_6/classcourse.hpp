//
//  classcourse.hpp
//  Øving_6
//
//  Created by Felix Aarekol Forseth on 15/07/2022.
//

#ifndef classcourse_hpp
#define classcourse_hpp
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdio.h>
#include <map>
#include "readnwrite.hpp"

using namespace std;

class CourseCatalog{
public:
    map<string, string> Coursemap;
    friend ostream& operator<<(ostream& os, const CourseCatalog& cc);
    void addCourse(string coursecode, string coursename);  // adds a course.
    void removeCourse(string coursecode); // removes a course.
    string getCourse(string coursecode); // returns coursecode.
    void writetextfile(); // Creates a text file. 
};
#endif /* classcourse_hpp */

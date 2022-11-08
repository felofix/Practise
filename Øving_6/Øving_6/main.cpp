//
//  main.cpp
//  Øving_6
//
//  Created by Felix Aarekol Forseth on 15/07/2022.
//

#include <iostream>
#include <string>
#include "readnwrite.hpp"
#include "classcourse.hpp"

int main(int argc, const char * argv[]) {
    // write("hey", "/Users/Felix/desktop/newsample.txt");
    // readAndWrite();
    // letterstatistics("/Users/Felix/desktop/sample.txt");
    
    CourseCatalog Courses;
    Courses.addCourse("TDT4110", "Informasjonsteknologi grunnkurs");
    Courses.addCourse("TDT4102", "Prosedyre- og objektorientert programmering");
    Courses.addCourse("TMA4100", "Matematikk 1");
    Courses.writetextfile();
    
    return 0;
}

#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course {
public:
    string code;
    string name;
    string timeSlot;
    
    // Constructor
    Course();
    Course(string c, string n, string t);
    
    // Display course info
    void display() const;
};  

#endif

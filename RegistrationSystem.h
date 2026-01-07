#ifndef REGISTRATIONSYSTEM_H
#define REGISTRATIONSYSTEM_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include "Course.h"
#include "Student.h"

using namespace std;

class RegistrationSystem {
private:
    vector<Course> courses;
    vector<Student> students;
    string currentUserID;
    
    // Helper methods for time conflict detection
    vector<string> extractDays(const string& slot);
    int toMinutes(const string& t);
    void extractTimes(const string& slot, int& start, int& end);
    bool overlap(const string& s1, const string& s2);
    
public:
    RegistrationSystem();
    
    // File I/O methods
    void loadCourses();
    void loadStudents();
    void loadStudentRegistrations(vector<Course>& output);
    void saveStudentRegistrations(const vector<Course>& regs);
    
    // Authentication
    bool login();
    
    // Course management
    void viewCourses();
    void viewMyCourses();
    bool hasTimeConflict(const vector<Course>& regs, const Course& newC);
    void registerCourse();
    void dropCourse();
    
    // UI
    void studentMenu();
};

#endif

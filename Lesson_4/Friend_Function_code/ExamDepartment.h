// ExamDepartment.h
#ifndef EXAMDEPARTMENT_H
#define EXAMDEPARTMENT_H

#include <iostream>
#include <string>
using namespace std;

// Forward declaration of friend function
class ExamDepartment;

// Independent function declaration
void facultyAccess(ExamDepartment &student);

// ExamDepartment class Definition
class ExamDepartment {
private:
    string studentName;
    int studentAttendance;

public:
    // Constructor Declaration to initialize student details
    ExamDepartment(string name, int attendance);

    // Declare friend function
    friend void facultyAccess(ExamDepartment &student);
};

#endif
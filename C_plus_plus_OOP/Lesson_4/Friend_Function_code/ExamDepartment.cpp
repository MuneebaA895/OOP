// ExamDepartment.cpp
// This file containes function definitions 

#include "ExamDepartment.h"

// Constructor definition
ExamDepartment::ExamDepartment(string name, int attendance) {
    studentName = name;
    studentAttendance = attendance;
}

// Friend function definition
void facultyAccess(ExamDepartment &student) {
    char choice;
    cout << "......Attendance is Accessed by Faculty......" << endl;
    cout << "Student Name: " << student.studentName << endl;
    cout << "Student Attendance: " << student.studentAttendance << endl;

    cout << "Do you want to increase student attendance to 75%? Enter Y for yes: ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        student.studentAttendance = 75;
        cout << student.studentName << "'s attendance has been increased to 75%" << endl;
    } else {
        cout << "Attendance not increased!" << endl;
    }
}
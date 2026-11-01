// ExamDepartment.h
#ifndef EXAMDEPARTMENT_H
#define EXAMDEPARTMENT_H

#include <string>
using namespace std;

// Forward declaration of Faculty class
class Faculty;

class ExamDepartment {
private:
    string studentName;
    int studentAttendance;

public:
    ExamDepartment(string name, int attendance);

    // Declare Faculty as a friend class
    friend class Faculty;
};
#endif


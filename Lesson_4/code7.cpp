// Friend Function is a member of another class Faculty
// Declaration of a function as a friend which is a member of another class
#include <iostream>
#include <string>
using namespace std;

// Forward declaration of Faculty class
class Faculty;

class ExamDepartment {
private:
    string studentName;
    int studentAttendance;

public:
    // Constructor to initialize student details
    ExamDepartment(string name, int attendance) { 
        studentName = name;
        studentAttendance = attendance;
    }

    // Declare Faculty as a friend class to allow access to private members
    friend class Faculty;
};

// Faculty class
class Faculty {
public:
     void facultyAccess(ExamDepartment &student) {
        char choice;
        cout << "......Attendance is Accessed by Faculty......" << endl;
        cout << "Student Name: " << student.studentName << endl;
        cout << "Student Attendance: " << student.studentAttendance << endl;

        cout << "Do you want to increase student attendance to 75%? Enter Y for yes: ";
        cin >> choice;
        if(choice == 'y' || choice == 'Y') {
            student.studentAttendance = 75;
            cout << student.studentName << "'s attendance has been increased to 75%" << endl;
        }
        else {
            cout << "Attendance not increased!" << endl;
        }
    }
};

int main() {
    ExamDepartment student("Ahmed", 60); 

    
     // Call the static function using the class name
    Faculty Ms_Muneeba;
    Ms_Muneeba.facultyAccess(student);
    return 0;
}


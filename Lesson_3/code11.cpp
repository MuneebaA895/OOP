#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    string name;
    string course;
    double marks;
    double gpa;
    int *rollNo;   // Pointer data member

public: // Parameterized constructor
    Student(string stu_name, string stu_course, double mar, double gp){
        name = stu_name;
        course = stu_course;
        marks = mar;
        gpa = gp;

        rollNo = new int;     // dynamic allocation
        *rollNo = 0;          // default value

        cout<<"Student class constructor called!"<<endl;
    }

    // Setter Function
    void setStudentInfo(string n, string c, double m, double g, int r){
        name = n;
        course = c;
        marks = m;
        gpa = g;
        *rollNo = r;   // assign value through pointer
    }

    // Getter Function
    string getName(){
        return name;
    }

    void DisplayInfo(){
        cout<<"Name: "<<name<<" | Course: "<<course<<" | Marks: "<<marks<<" | GPA: "<<gpa
        <<" | Roll No: "<<*rollNo << endl;
    }

    // Destructor
    ~Student(){
        delete rollNo;   // free dynamically allocated memory
        cout<<"Destructor called!"<<endl;
    }
};

int main(){
    Student *AliyaPtr = nullptr;
    Student *HanzalaPtr = nullptr;

    // Dynamically allocate objects
    AliyaPtr = new Student("Default", "Course Name", 0.0, 0.0);
    HanzalaPtr = new Student("Default", "Course Name", 0.0, 0.0);

    AliyaPtr->setStudentInfo("Aliya", "OOP", 80.0, 3.6, 101);
    HanzalaPtr->setStudentInfo("Hanzala", "OOP", 90.0, 3.9, 102);

    cout<<"Name of student: "<<AliyaPtr->getName()<<endl;
    AliyaPtr->DisplayInfo();

    cout<<"................................................."<<endl;

    cout<<"Name of student: "<<HanzalaPtr->getName()<<endl;
    HanzalaPtr->DisplayInfo();

    delete AliyaPtr;
    delete HanzalaPtr;

    return 0;
}
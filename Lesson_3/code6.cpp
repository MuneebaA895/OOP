#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
       string name;
       string courseName;
       double courseMarks;
       double gpa;

    public:
    Student(){ // Default constructor
        name = "";
        courseName = "";
        courseMarks = 0.0;
        gpa = 0.0;
    }
    void displayStudentInfo(){
        cout<<"...Student Details...."<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Course Name: "<<courseName<<endl;
        cout<<"Course Marks:  "<<courseMarks<<endl;
        cout<<"Course GPA: "<<gpa<<endl;
        cout<<".............................."<<endl;
    }
};

int main(){
    Student BS_CYS_Batch[5];

    for (int i=0; i<5; i++){
        BS_CYS_Batch[i].displayStudentInfo();
    }
    
    return 0;
    
}


#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
       string name;
       string courseName;
       double courseMarks;
       double gpa;

    public: // Parameterized Constructor
    Student(string st_name, string C_name, double st_marks, double st_gpa){ 
        name = st_name;
        courseName = C_name;
        courseMarks = st_marks;
        gpa = st_gpa;
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
    Student BS_CYS_Batch[5]={Student("Aliya","OOP", 80.0, 3.6), 
                            Student("Hanzala","OOP", 98.0, 4.0),
                            Student("Ibadullah","OOP",70.0, 3.5), 
                            Student("Sana","OOP",85.0, 3.7), 
                            Student("Manahil","OOP", 88.0, 3.8)};

    for (int i=0; i<5; i++){
        BS_CYS_Batch[i].displayStudentInfo();
    } 
    return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
       string name;
       string course;
       double gpa;

    public:
    // Overloaded Function #1
    void printInfo(){ 
        name=""; 
        course=""; 
        gpa=0.0;
        cout<<"Name: "<<name<<" | course: "<<course<<" | GPA: "<<gpa<<endl;
      }
    // Overloaded Function #2
    void printInfo(string Studentname, string stu_course, double stu_gpa){
        name= Studentname; 
        course= stu_course; 
        gpa= stu_gpa;
        cout<<"Name: "<<name<<" | course: "<<course<<" | GPA: "<<gpa<<endl;
    }
};

int main(){
    Student student1;
    // Calls the first overloaded function
    student1.printInfo(); 

    Student student2;
    // Calls the second overloaded function
    student2.printInfo("Alesha", "Computer Science", 3.5); 

    return 0;
}

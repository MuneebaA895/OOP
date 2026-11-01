#include<iostream>
#include<string>
using namespace std;

class Student{

    private:
       string studentName;
       double CourseMarks[5];

    public:
    Student(){ // Default constructor
        for(int i=0; i<5; i++){
            CourseMarks[i] = 0.0;
        }
    }

    void setMarks(){ // Setter function to set marks for 5 courses
        cout<<"Enter the marks of "<<studentName<<" in 5 courses: "<<endl;
        for(int i=0; i<5; i++){
            cout<<"Marks in course "<<i+1<<": ";
            cin>>CourseMarks[i];
        }
    }

    void displayMarks(){ // Function to display marks of the student
        cout<<"Marks of " <<studentName<<" in 5 courses: "<<endl;
        for(int i=0; i<5; i++){
            cout<<"Marks in course "<<i+1<<": "<<CourseMarks[i]<<endl;
        }
    }

    void setStudentName(string name){// Setter function to set student name
        studentName = name;
    }

    ~Student(){
        cout<<"Destructor called for "<<studentName<<endl;
    }

};

int main(){
    Student Hanzala;
    Hanzala.setStudentName("Hanzala");
    Hanzala.setMarks();
    Hanzala.displayMarks();

    cout<<"......................................."<<endl;

    Student Aliya;
    Aliya.setStudentName("Aliya");
    Aliya.setMarks();
    Aliya.displayMarks();

    return 0;
}


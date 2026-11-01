#include<iostream>
#include<string>
using namespace std;
// Base class
class Person{
    protected:
        string name, gender;
        int age;

    public:
        Person() {// Default constructor
            name = ""; gender = ""; age = 0;
            cout<<"Person default constructor called."<<endl;
        }
        // Parameterized constructor
        Person(string n, string g, int a) {
            name = n;
            gender = g;
            age = a;
            cout<<"Person parameterized constructor called."<<endl;
        }
        void displayPersonInfo(){
            cout<<"Name: "<<name<<"| Gender: "<<gender
            <<"| Age: "<<age<<endl;
        }
};

// Derived Class
class Student : public Person{
    private:
        string studentID;
        string course;

    public:
        Student() : Person() { // Default constructor
            studentID = "";
            course = "";
            cout<<"Student default constructor called."<<endl;
        }
        // Parameterized constructor
        Student(string n, string g, int a, string id, string c) 
        : Person(n, g, a) {
            studentID = id;
            course = c;
            cout<<"Student parameterized constructor called."<<endl;
        }
        void displayStudentInfo(){
            displayPersonInfo(); // Call base class method
            cout<<"Student ID: "<<studentID<<"| Course: "<<course<<endl;
        }
};

int main(){
    cout<<"Object 1 created with default constructor:"<<endl;
    Student Ahmed;
    Ahmed.displayStudentInfo();
    cout<<"..................................................." <<endl;

    cout<<"Object 2 created with parameterized constructor:"<<endl;
    Student Aliya("Aliya","Female",20,"S12345","Computer Science"); 
    Aliya.displayStudentInfo();
}






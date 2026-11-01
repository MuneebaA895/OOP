#include <iostream>
using namespace std;

class Student {
public:
    int *marks;  // pointer for dynamic memory

    // Constructor
    Student(int m) {
        marks = new int; // allocate memory
        *marks = m;
    }

    // No copy constructor defined → default (shallow copy) is used
    void display() {
        cout << "Marks: " << *marks << endl;
    }

    // Destructor
    ~Student() {
        delete marks;
    }
};

int main() {
    Student s1(85);
    // Can also write Student s2 = s1;   
    Student s2(s1);   // Shallow copy happens here

    cout<<"Address of s1.marks: "<<s1.marks<<endl;
    cout<<"Address of s2.marks: "<<s2.marks<<endl;
    
    *s2.marks = 50;   // Changing s2 also changes s1

    cout << "Student 1: ";
    s1.display();

    cout << "Student 2: ";
    s2.display();

    return 0;
}



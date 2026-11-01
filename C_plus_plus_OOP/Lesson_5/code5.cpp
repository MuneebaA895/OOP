#include <iostream>
using namespace std;

class Student {
public:
    int *marksPtr;  // pointer for dynamic memory

    // Constructor
    Student(int m) {
        marksPtr = new int; // allocate memory
        *marksPtr = m;
    }

    // No copy constructor defined → default (shallow copy) is used
    void display() {
        cout << "Marks: " << *marksPtr << endl;
    }

    // Destructor
    ~Student() {
        delete marksPtr;
    }
};

int main() {
    // Creating a Student object
    Student s1(85);

    //Accessing data member of s1
    cout<<" Address of data member s1.marksPtr which is a pointer "<<s1.marksPtr<<endl;
    cout<<" Value of data member s1.marksPtr which is a pointer "<<*s1.marksPtr<<endl;
    
    return 0;
}



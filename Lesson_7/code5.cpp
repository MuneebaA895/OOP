#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void introduce() {
        cout << "I am a person" << endl;
    }
};

// Derived class
class Student : public Person {
public:
    void introduce() {  
        // same name + same parameters → overriding
        cout << "I am a student" << endl;
    }
};

int main() {
    Student s;
    s.introduce(); // calls Student's version (overridden function)
}



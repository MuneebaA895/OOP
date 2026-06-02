// HYBRID INHERITANCE

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
    }

    void greet() {
        cout << "Hello, my name is " << name << endl;
    }
};

// Virtual Inheritance
class Student : virtual public Person {
public:
    Student(string n) : Person(n) {}

    void study() {
        cout << name << " is studying." << endl;
    }
};

class Employee : virtual public Person {
public:
    Employee(string n) : Person(n) {}

    void work() {
        cout << name << " is working." << endl;
    }
};

// Derived Class
class TA : public Student, public Employee {
public:
    TA(string n)
        : Person(n), Student(n), Employee(n) {}

    void showRole() {
        study();
        work();
    }
};

// Main Function
int main() {

    TA ta("Ahmed");

    ta.greet();          // No ambiguity
    ta.study();
    ta.work();

    cout << endl;

    ta.Person::greet();  // Also works

    return 0;
}
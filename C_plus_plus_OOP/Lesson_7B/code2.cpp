// MULTILEVEL INHERITANCE

#include <iostream>
#include <string>
using namespace std;

// Grandparent / Base class
class Person {
protected:
    string name;

public:
    // Constructor
    Person(string n) {
        name = n;
    }

    // Member function
    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};

// Child / Derived class
class Employee : public Person {
protected:
    double salary;

public:
    // Constructor
    Employee(string n, double s) : Person(n) {
        salary = s;
    }

    // Member function
    void displayEmployee() {
        displayPerson();
        cout << "Salary: " << salary << endl;
    }
};

// Grandchild class
class Manager : public Employee {
private:
    double bonus;

public:
    // Constructor
    Manager(string n, double s, double b)
        : Employee(n, s) {

        bonus = b;
    }

    // Member function
    void displayManager() {
        displayEmployee();
        cout << "Bonus: " << bonus << endl;
    }
};

int main() {

    // Creating object of Manager
    Manager m1("Ali Khan", 80000, 15000);

    cout << "----- Manager Details -----" << endl;
    m1.displayManager();

    return 0;
}
// MULTIPLE INHERITANCE

#include <iostream>
#include <string>
using namespace std;
// First Parent class
class Person {
protected:
    string name;
    int age;

public:
    Person() { // Default Constructor
        name = "Not Assigned";
        age = 0;
        cout << "Person Default Constructor Called" << endl;
    }
    Person(string n, int a) { // Parameterized Constructor
        name = n;
        age = a;
        cout << "Person Parameterized Constructor Called" << endl;
    }
    void DisplayPersonDetails() {
        cout << "----- Person Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    ~Person() { // Destructor
        cout << "Person Destructor Called" << endl;
    }
};

// Second Parent class
class Employee {
protected:
    string employeeID;
    double salary;

public: 
    Employee() {  // Default Constructor
        employeeID = "Not Assigned";
        salary = 0;
        cout << "Employee Default Constructor Called" << endl;
    }
    Employee(string id, double sal) { // Parameterized Constructor
        employeeID = id;
        salary = sal;
        cout << "Employee Parameterized Constructor Called" << endl;
    }
    void DisplayEmployeeDetails() {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
    ~Employee() {  // Destructor
        cout << "Employee Destructor Called" << endl;
    }
};

// Child / Derived class
class Manager : public Person, public Employee {
private:
    int teamSize;
    string department;

public:
    Manager() {
        teamSize = 0;
        department="not assigned";
        cout << "Manager Default Constructor Called" << endl;
    }
    Manager(string n, int a,string id, double sal,int team,
            string dep): Person(n, a),Employee(id, sal) {
        teamSize = team;
        department= dep;
        cout << "Manager Parameterized Constructor Called" << endl;
    }
    void DisplayManagerDetails() {
        DisplayPersonDetails();
        DisplayEmployeeDetails();
        cout << "\n----- Manager Details -----" << endl;
        cout <<"Department: "<<department<<" | Size: " << teamSize << endl;
    }
    ~Manager() { // Destructor
        cout << "Manager Destructor Called" << endl;
    }
};

int main() {
    Manager Ahmed;
    cout << "\n===== Display Information (Default Constructor) =====\n" << endl;
    Ahmed.DisplayManagerDetails();

    Manager Alisha("Alisha", 42,"EMP-101", 95000,5,"Engineering");
    cout << "\n===== Display Information (Parameterized Constructor) =====\n" << endl;
    Alisha.DisplayManagerDetails();
    return 0;
}





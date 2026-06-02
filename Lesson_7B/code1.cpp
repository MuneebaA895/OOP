// SINGLE INHERITANCE

#include <iostream>
#include <string>
using namespace std;

// Parent / Base class
class Person {
protected:
    string name;
    int employeeID;
    int age;
    string email;
    double salary;

public:
    // Constructor
    Person(string n, int id, int a, string e, double s) {
        name = n;
        employeeID = id;
        age = a;
        email = e;
        salary = s;
    }

    // Member functions
    void getInfo() {
        cout << "----- Person Information -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Age: " << age << endl;
        cout << "Email: " << email << endl;
        cout << "Salary: " << salary << endl;
    }

    void setEmail(string newEmail) {
        email = newEmail;
    }

    void addSalary(double amount) {
        salary += amount;
    }
};

// Child / Derived class
class Employee : public Person {
private:
    string designation;
    int phone_ext;
    string job_description;

public:
    // Constructor
    Employee(string n, int id, int a, string e, double s,string d, 
        int p, string j) : Person(n, id, a, e, s) {

        designation = d;
        phone_ext = p;
        job_description = j;
    }

    // Member functions
    void createReport() {
        cout << name << " is creating a report." << endl;
    }

    void applyLeave() {
        cout << name << " has applied for leave." << endl;
    }

    void printSalarySlip() {
        cout << "\n----- Salary Slip -----" << endl;
        cout << "Employee: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
    }

    void displayEmployeeInfo() {
        getInfo();

        cout << "\n----- Employee Details -----" << endl;
        cout << "Designation: " << designation << endl;
        cout << "Phone Extension: " << phone_ext << endl;
        cout << "Job Description: " << job_description << endl;
    }
};

int main() {

    // Creating object of derived class
    Employee emp1(
        "Sana Amir",101,30,"SanaA@gmail.com",50000,"Software Engineer",225,
        "Develops software systems"
    );

    emp1.displayEmployeeInfo();
    cout << endl;
    emp1.createReport();
    emp1.applyLeave();

    // Adding salary
    emp1.addSalary(5000);

    // Updating email
    emp1.setEmail("alikhan@company.com");
    emp1.printSalarySlip();
    return 0;
}
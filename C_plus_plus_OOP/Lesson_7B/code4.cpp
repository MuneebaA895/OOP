// HIERARCHICAL INHERITANCE

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class Doctor
class Doctor : public Person {
private:
    string specialization;

public:
    void setDoctor(string n, int a, string s) {
        setPerson(n, a);
        specialization = s;
    }

    void displayDoctor() {
        displayPerson();
        cout << "Specialization: " << specialization << endl;
    }
};

// Derived Class Patient
class Patient : public Person {
private:
    string disease;

public:
    void setPatient(string n, int a, string d) {
        setPerson(n, a);
        disease = d;
    }

    void displayPatient() {
        displayPerson();
        cout << "Disease: " << disease << endl;
    }
};

// Main Function
int main() {

    Doctor d1;
    d1.setDoctor("Ali", 45, "Cardiologist");

    Patient p1;
    p1.setPatient("Sara", 22, "Fever");

    cout << "Doctor Information:\n";
    d1.displayDoctor();

    cout << "\nPatient Information:\n";
    p1.displayPatient();

    return 0;
}
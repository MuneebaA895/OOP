#include <iostream>
using namespace std;
// Base class
class Person {
private:
    string name;
    int age;

public:
    void setPerson(string n, int a) { // Setter function
        name = n;
        age = a;
    }

    string getName() { // Getter function
        return name;
    }

    int getAge() {  // Getter function
        return age;
    }
    void introduce() {  // Base class function
        cout << "I am a person." << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int marks;

public:
    void setMarks(int m) { // Setter function for marks
        marks = m;
    }

    void showDetails() {
        // private members of the base class are not accessible in the derived class
        cout << "Name: " << getName() << endl; // inaccessible 
        cout << "Age: " << getAge() << endl;  // inaccessible
        // Displaying marks from the derived class  
        cout << "Marks: " << marks << endl;    
    }

    void study() {
        cout << "Student is studying." << endl;
    }
};

int main() {
    Student s;  // Create an object of the derived class

    s.setPerson("Ali", 18);  // base class function
    s.setMarks(90);          // derived class function

    s.introduce();  // base class function
    s.study();

    s.showDetails(); 

    return 0;
}




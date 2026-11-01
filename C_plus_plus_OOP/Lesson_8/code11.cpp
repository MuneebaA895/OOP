#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void show() {}   // Required for dynamic_cast
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {

    // Create a Dog object
    Dog* d1 = new Dog();

    // Upcasting: Dog* -> Animal*
    // Converting derived to base class
    Animal* ptr = dynamic_cast<Animal*>(d1);
    cout << "Upcasting successful" << endl;

    // Downcasting: Animal* -> Dog*
    // Converting base to derived class
    Dog* d2 = dynamic_cast<Dog*>(ptr);
    cout<<"Downcasting successful"<<endl;

    delete d1;
    return 0;
}


#include <iostream>
#include <typeinfo>
using namespace std;

class Animal {
public:
    virtual void speak() {}
};

class Dog : public Animal {};

int main() {
    // Base class pointer pointing to a derived class object
    // Creates a Dog object dynamically and stores its address in an Animal pointer
    Animal* ptr = new Dog();

    cout << "Dynamic type: "<<typeid(*ptr).name() << endl;

    delete ptr;
    return 0;
}




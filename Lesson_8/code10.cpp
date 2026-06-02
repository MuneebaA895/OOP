#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function enables RTTI (Run-Time Type Information)
    virtual void speak() {}  
};

class Dog : public Animal {};

int main() {
    Animal* ptr = new Animal();   // Base class pointer pointing to a Animal object

    // dynamic_cast checks at runtime whether ptr actually points to a Dog
    // If yes, it returns a valid Dog*; otherwise it returns nullptr
    cout << dynamic_cast<Dog*>(ptr) << endl;

    delete ptr;   // Frees the dynamically allocated Dog object
    return 0;
}

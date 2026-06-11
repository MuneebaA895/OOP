#include <iostream>
#include <typeinfo>
using namespace std;

class Animal {
public:
    virtual void speak() {}
};

class Dog : public Animal {};

int main() {
    // Creating a Dog object
    Dog Tom;

    cout << "Dynamic type: "<<typeid(Tom).name() << endl;
    return 0;
}


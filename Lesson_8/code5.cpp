#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    virtual void speak() = 0;
};

// Derived class
class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks" << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    void speak(){
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.speak();
    cat.speak();

    return 0;
}
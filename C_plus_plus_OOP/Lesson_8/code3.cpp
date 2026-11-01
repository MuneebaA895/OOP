#include <iostream>
using namespace std;

class Animal {
public:
    void speak() { cout << "Animal speaks" << endl; }
};

class Dog : public Animal {
public:
    void speak() { cout << "Dog barks" << endl; }
};

class Cat : public Animal {
public:
    void speak() { cout << "Cat meows" << endl; }
};

class Cow : public Animal {
public:
    void speak() { cout << "Cow moos" << endl; }
};

int main() {
    Animal arr[3];

    arr[0] = Dog();
    arr[1] = Cat();
    arr[2] = Cow();

    for (int i = 0; i < 3; i++) {
        arr[i].speak();
    }

    return 0;
}
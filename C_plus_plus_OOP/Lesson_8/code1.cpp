#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
    void speak() { 
        cout << "Animal speaks"; 
    }
};

class Cat : public Animal {
public:
    void speak() { 
        cout << "Cat meows "; 
    }
};

int main(){
    Cat cat;
    cat.speak();  
}



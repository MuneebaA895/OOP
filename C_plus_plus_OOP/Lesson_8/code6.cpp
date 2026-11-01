#include <iostream>
using namespace std;

class Person {
private:
    int age;

public:
    void setAge(int age) {
        this->age = age;  // 'this->age' refers to the object's member
    }

    void printAddress(){
        cout<<"Address of object is: "<<this<<endl;
    }

    void printAge() {
        cout << "Age: " << this->age << endl;
    }
};

int main() {
    Person Ayesha;
    Ayesha.setAge(25);
    Ayesha.printAddress();
    Ayesha.printAge();
}



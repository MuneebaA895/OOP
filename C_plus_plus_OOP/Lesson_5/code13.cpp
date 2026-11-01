#include <iostream>
using namespace std;

// Source Class
class ClassA {
public:
    int value;
    ClassA(int v){
        value = v; // constructor of ClassA
    } 
};

// Destination Class
class ClassB {
public:
    int data;
    // Conversion Constructor (allows conversion from ClassA to ClassB)
    ClassB(ClassA a) {  // <-- Conversion constructor
        data = a.value + 50; // simple conversion
    }
};

int main() {
    ClassA a1(10);       // Source Object (object of ClassA)
    ClassB b1 = a1;      // Conversion happens here: ClassA -> ClassB using constructor

    cout << "ClassA value: " << a1.value << endl;
    cout << "ClassB data: " << b1.data << endl;

    return 0;
}

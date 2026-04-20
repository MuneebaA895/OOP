#include<iostream>
using namespace std;
class Number {
private:
    int value;   
public:
    Number(int val) { 
        value = val; 
    }
    // 1. Overloading + operator for: Object + Object (n1 + n2)
    Number operator + (Number obj) {
        Number temp(0);   // temporary object to store result
        // adding value of current object and passed object
        temp.value = value + obj.value;
        return temp;      // return new object containing result
    }
    // 2. Overloading + operator for: Object + Integer (n1 + 5)
    Number operator + (int x) {
        Number temp(0);   // temporary object to store result
        // adding object value with integer
        temp.value = value + x;
        return temp;      // return new object containing result
    }
    void display() {
        cout << value << endl;
    }};


int main() {

    Number n1(10);   // first object with value 10
    Number n2(20);   // second object with value 20

    // Object + Object operation
    Number result1 = n1 + n2;   
    result1.display();   // Output: 30

    // Object + Integer operation
    Number result2 = n1 + 5;    
    result2.display();   // Output: 15
}



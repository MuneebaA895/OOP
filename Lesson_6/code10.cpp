#include<iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int val) { 
        value = val; 
    }
    // Overload += operator
    void operator += (int x) {
        value = value + x;
    }
    void display() {
        cout << value << endl;
    }
};

int main() {
    Number n1(10);

    n1 += 5;   // adds 5 to 10

    n1.display();  // 15
}



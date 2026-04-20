#include<iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int val) { 
        value = val; 
    }
    // Overload < operator
    bool operator < (Number obj) {
        return value < obj.value;
    }
    // Overload > operator
    bool operator > (Number obj) {
        return value > obj.value;
    }
};

int main() {
    Number n1(10);
    Number n2(10);
    if(n1 < n2){
        cout << "n1 is less than n2";
    }
    else if(n1 > n2){
        cout << "n1 is greater than n2";
    }
    else{
        cout << "Equal or Not Equal";
    }
}


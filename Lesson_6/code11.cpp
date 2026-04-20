#include<iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v = 0) {
        value = v;
    }
    // Overload cout (output stream)
    friend ostream& operator << (ostream& out, Number obj) {
        out << obj.value;
        return out;
    }
};

int main() {
    Number n1(25);
    cout << n1;   // direct object printing
}


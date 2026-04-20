#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) {
        value = val;
    }

    // Overloading == operator
    bool operator == (Number n) {
        return value == n.value;
    }
};

int main() {
    Number n1(10), n2(10), n3(20);

    if (n1 == n2) 
        // left object is current and right object is passed as argument to operator function
        // n1 is currect object and n2 is passed as argument to operator function
        // Works as n1.operator==(n2);
        cout << "n1 and n2 are equal" << endl;
    else
        cout << "n1 and n2 are not equal" << endl;

    if (n1 == n3)
        cout << "n1 and n3 are equal" << endl;
    else
        cout << "n1 and n3 are not equal" << endl;
    return 0;
}



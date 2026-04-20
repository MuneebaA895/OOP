#include <iostream>
using namespace std;

class Distance {
private:
    int meters;

public:
    // Constructor: basic type into object
    Distance(int m) {
        meters = m;
    }
    // Conversion operator: object into basic type
    operator int() {
        return meters;
    }
    void show() {
        cout << "Distance: " << meters << " meters" << endl;
    }
};

int main() {
    // Basic → Object
    Distance d1 = 10;   // calls constructor
    d1.show();

    // Object → Basic
    int x;
    x = d1;             // calls conversion operator
    cout << "Converted to int: " << x << endl;

    return 0;
}


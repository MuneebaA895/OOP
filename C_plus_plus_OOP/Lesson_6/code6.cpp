#include <iostream>
using namespace std;

class Distance {
private:
    int meters;

public:
    Distance(int m) {
        meters = m;
    }

    // Object + int
    Distance operator + (int value) {
        Distance temp(0);
        temp.meters = meters + value;
        return temp;
    }

    void display() {
        cout << "Meters: " << meters << endl;
    }
};

int main() {
    Distance d1(10);
    Distance d2 = d1 + 5;   // object + value
    d2.display(); // Output: Meters: 15
    return 0;
}


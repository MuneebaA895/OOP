#include <iostream>
using namespace std;

class Distance {
private:
    int meters;

public: 
    Distance(int m) {
        meters = m;
    }
    // Overloading the + operator to add two Distance objects
    Distance operator + (Distance d) {
        Distance temp(0);
        temp.meters = meters + d.meters;
        return temp;
    }
    void display() {
        cout << "Meters: " << meters << endl;
    }
};

int main() {
    Distance d1(10), d2(20);
    Distance d3 = d1 + d2;
    d3.display(); // Output: Meters: 30
}


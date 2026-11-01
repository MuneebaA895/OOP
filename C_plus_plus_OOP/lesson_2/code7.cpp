#include <iostream>
using namespace std;

class Coffee {
private:
    double price;
    double tax;

public:
    // Constructor with default parameters 
    Coffee(double p=50.0, double t=10.0) {
        price = p;
        tax = t;
    }

    void displayTotal() const {
        cout << "Price: Rs " << price << endl;
        cout << "Tax: Rs " << tax << endl;
        cout << "Total: Rs " << (price + tax) << endl;
    }
};

int main() {
    Coffee expresso; 
    expresso.displayTotal();
    return 0;
}


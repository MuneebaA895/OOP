#include <iostream>
using namespace std;

class Coffee {
private:
    double price;
    double tax;

public:
    // Parameterized constructor 
    Coffee(double p, double t) {
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
    double userPrice, userTax;

    cout << "Enter coffee price: Rs ";
    cin >> userPrice;
    cout << "Enter tax: Rs ";
    cin >> userTax;
    // Create object and initialize with user input
    Coffee expresso(userPrice, userTax); // Sending arguments to the constructor
    expresso.displayTotal();

    return 0;
}



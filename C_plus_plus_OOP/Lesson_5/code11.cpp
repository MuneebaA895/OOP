#include <iostream>
using namespace std;

int main() {
    float floatvar = 10.75;
    int intvar;

    // Implicit conversion (automatic)
    intvar = floatvar;
    cout << "Implicit conversion: " << intvar << endl;

    // Explicit conversion (manual)
    intvar = static_cast<int>(floatvar);
    cout << "Explicit conversion: " << intvar << endl;

    return 0;
}


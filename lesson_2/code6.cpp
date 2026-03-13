#include <iostream>
using namespace std;

class BankSession {
public:
    // Constructor
    BankSession() {
        cout << "Bank session started." << endl;
    }

    // Destructor
    ~BankSession() {
        cout << "Bank session ended." << endl;
    }
};
int main() {
    BankSession userSession;   // Constructor runs

    cout << "User is performing banking operations..." << endl;

    return 0;   // Destructor runs
}


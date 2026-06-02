// AGGREGATION 

#include <iostream>
using namespace std;

// Publications Class
class Publications {
public:
    int books;

    Publications(int b) {
        books = b;
    }
};

// Staff Class
class Staff {
public:
    int members;

    Staff(int m) {
        members = m;
    }
};

// Library Class (Aggregation)
class Library {
private:
    Publications pub;      // Library has Publications
    Staff st;              // Library has Staff

public:
    Library(int b, int m) : pub(b), st(m) {}

    void display() {
        cout << "Total Books: " << pub.books << endl;
        cout << "Total Staff: " << st.members << endl;
    }
};

int main() {

    Library lib(5000, 20);

    lib.display();

    return 0;
}
#include <iostream>
using namespace std;

class Name {
private:
    string str;

public:
    Name(string s) {
        str = s;
    }

    Name operator + (Name n) {
        Name temp("");
        temp.str = str + " " + n.str;
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    Name n1("Ali"), n2("Khan");

    Name n3 = n1 + n2;

    n3.display();
    return 0;
}



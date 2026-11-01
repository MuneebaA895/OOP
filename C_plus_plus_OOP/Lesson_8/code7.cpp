#include <iostream>
using namespace std;

class Student {
public:
    int id;

    Student(int i) {
        id = i;
    }

    void display() {
        cout << "ID: " << id<< " , Address (this): " << this << endl;
    }
};

int main() {
    Student students[3] = {Student(1), Student(2), Student(3)};

    for (int i = 0; i < 3; i++) {
        students[i].display();
    }
    return 0;
}


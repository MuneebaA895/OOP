#include "student.h"
#include <iostream>
using namespace std;

int main() {
    Student Amna;
    Amna.setAge(20);
    
    cout << "Student's age: " << Amna.getAge() << endl;
    
    return 0;
}


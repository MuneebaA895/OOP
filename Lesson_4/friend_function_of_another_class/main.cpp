#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student s1;
    Tutor t1;

    double amount;

    cout << "Enter student fee: ";
    cin >> amount;
    s1.addFee(amount);

    cout << "Enter tutor extra fee: ";
    cin >> amount;
    t1.addFee(amount, s1);

    cout << "\nFinal Student Fee: "
         << s1.getFee() << endl;

    return 0;
}


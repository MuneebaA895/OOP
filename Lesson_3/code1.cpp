#include<iostream>
using namespace std;

// Function overloading: same function name but different parameters (i.e different datatypes)

double area(int num1, int num2){  // Function 1
    return num1*num2;
}

double area(double num1, double num2){ // Function 2
    return num1*num2;
}

int  main(){
    // Calling Function 1 with integer arguments
    cout<<"Area of rectangle with integer sides: "<<area(5, 10)<<endl;

    // Calling Function 2 with double arguments
    cout<<"Area of rectangle with double sides: "<<area(5.5, 10.5)<<endl;

    return 0;
}


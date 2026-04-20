#include<iostream>
using namespace std;

int main(){

    cout<<"Compiler automatically converts to highest data type in the expression."<<endl;
    cout<<"This is called implicit type conversion or type promotion."<<endl;

    int num1=5;
    float num2=3.2;
    float num3=num1+num2; // num1 is promoted to float and then addition is performed
    cout<<"The value of num3 is: "<<num3<<endl; // Output will be 8.2    
}





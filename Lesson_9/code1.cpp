#include<iostream>
#include<string>
using namespace std;

// Overloaded Function #1
int Add(int num1, int num2){
    return num1 + num2;
}
// Overloaded Function #2
double Add(double num1, double num2){
    return num1 + num2;
}
// Overloaded Function #3
string Add(string str1, string str2){
    return str1 + str2;
}
int main(){
    cout << Add(5, 10) << endl;   // Calls the first overloaded function
    cout << Add(5.5, 10.5) << endl;  // Calls the second overloaded function
    cout << Add("Hello, ", "World!") << endl; // Calls the third overloaded function
    return 0;
}


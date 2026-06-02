#include<iostream>
#include<string>
using namespace std;

// Function Template
template <class T>
T Add(T num1, T num2){
    return num1 + num2;
}

int main(){
    // Using the function template with different data types
    cout << Add(5, 10) << endl;   
    cout << Add(5.5, 10.5) << endl; 
    cout << Add(string("Hello, "), string("World!")) << endl;
    return 0;
}





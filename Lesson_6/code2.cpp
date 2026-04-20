#include<iostream>
using namespace std;

class Counter{
private:
    int count;

public:
    Counter(){ // constructor
        count = 0;
    }

    int getCount(){
        return count;
    }

    // Postfix increment operator overloading
    void operator++(int){
        count++;
    }
};

int main(){
    Counter balloon; // Create an object of Counter class
    
    cout << "Initial count: " << balloon.getCount() << endl;

    balloon++; // Using postfix increment operator
    balloon++; // Using postfix increment operator again
    balloon++; // Using postfix increment operator again

    cout << "Count after incrementing: " << balloon.getCount() << endl;
    return 0;
}


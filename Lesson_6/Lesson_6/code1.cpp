#include<iostream>
using namespace std;

class Counter{
    private:
       int count;

    public:
       Counter(){ //constructor
        count=0;
       }
       int getCount(){
        return count;
       }
       // Prefix increment operator overloading
       void operator++(){
        count++;
       }
};
int main(){
    Counter balloon; // Create an object of Counter class
    
    cout<<"Initial count: "<<balloon.getCount()<<endl; // Output: Initial count
    ++balloon; // Using prefix increment operator
    ++balloon; // Using prefix increment operator again
    ++balloon; // Using prefix increment operator again

    // Output: Count after incrementing: 3
    cout<<"Count after incrementing: "<<balloon.getCount()<<endl; 
    return 0;
}


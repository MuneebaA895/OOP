#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }
        int area(){
            return length * breadth;
        }
        int getlength(){ //getter function
            return length;
        }
        int getwidth(){ //getter function
            return breadth;
        }
        void setWidth(int b){ //setter function
            breadth = b;
        }
        void setLength(int l){ //setter function
                length = l;
        }
};

int main(){
    // Creating an object rect1
    Rectangle rect1(5, 3);
   
    cout<<".......Creating object rect2 and assigning rect1 values to it........"<<endl;
    
    // copy constructor is called here that is provided by the compiler by default
    // This is treated as Rectangle rect2(rect1)
    Rectangle rect2=rect1; 
    
    // Displaying the areas of rect2
    cout <<"Length of rect2: " << rect2.getlength() << endl;
    cout <<"Width of rect2: " << rect2.getwidth() << endl;

    cout<<"Modifying rect1 values..."<<endl;
    // Modifying rect1 values
    rect1.setLength(10);
    rect1.setWidth(6);

    // Displaying the areas of rect1 and rect2 after modification
    cout <<"Length of rect1: " << rect1.getlength() << endl;
    cout <<"Width of rect1: " << rect1.getwidth() << endl;
    cout <<"Length of rect2: " << rect2.getlength() << endl;
    cout <<"Width of rect2: " << rect2.getwidth() << endl;

    return 0;
}

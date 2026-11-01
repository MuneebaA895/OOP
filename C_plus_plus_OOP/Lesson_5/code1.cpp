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

        int getlength(){
            return length;
        }
        int getwidth(){
            return breadth;
        }
};

int main(){
    // Creating two objects of the Rectangle class
    Rectangle rect1(5, 3);
    Rectangle rect2(10, 4);
    
    // Calculating and displaying the areas of the rectangles
    cout <<"Length of rect1: " << rect1.getlength()<<endl;
    cout<<"Width of rect1: "<<rect1.getwidth()<<endl;
    cout <<"Length of rect2: " << rect2.getlength() << endl;
    cout <<"Width of rect2: " << rect2.getwidth() << endl;

    cout<<".......Assigning rect1 to rect2........"<<endl;
    rect2 = rect1; // This will copy the data member values of rect1 to rect2

    // Displaying the areas of the rectangles after assignment
    cout <<"Length of rect1: " << rect1.getlength() << endl;
    cout <<"Width of rect1: " << rect1.getwidth() << endl;
    cout <<"Length of rect2: " << rect2.getlength() << endl;
    cout <<"Width of rect2: " << rect2.getwidth() << endl;
    
    return 0;
}

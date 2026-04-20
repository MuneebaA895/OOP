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
        // Creating user defined copy constructor
        Rectangle(Rectangle &old_rectangle){
            length = old_rectangle.length;
            breadth = old_rectangle.breadth;
            cout <<"Copy constructor called!"<<endl;
        }   
        void setWidth(int b){ //setter function
            breadth = b;
        }
        void setLength(int l){ //setter function
                length = l;
        }
        void DisplayValues(){
            cout <<"Length: " << length << endl;
            cout <<"Breadth: " << breadth << endl;
        }
};

int main(){
    // Creating an object rectangle1
    Rectangle rectangle1(10, 2);
    // Creating rectangle2 object 
    Rectangle rectangle2(rectangle1); 
    
    cout <<"Values of rectangle1: "<<endl;
    rectangle1.DisplayValues();
    cout <<"Values of rectangle2: "<<endl;
    rectangle2.DisplayValues();

    cout<<"Updating values of rectangle1"<<endl;
    rectangle1.setLength(5);
    rectangle1.setWidth(6);

    cout <<"Values of rectangle1: "<<endl;
    rectangle1.DisplayValues(); 
    cout <<"Values of rectangle2: "<<endl;
    rectangle2.DisplayValues();  
    return 0;
}


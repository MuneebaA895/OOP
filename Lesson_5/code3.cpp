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
    // copy constructor is called here that is provided by the compiler by default
    // This is treated as Rectangle rectangle2=rectangle1;
    Rectangle rectangle2(rectangle1); 
    // Displaying values
    cout <<"Values of rectangle1: "<< endl;
    rectangle1.DisplayValues();
    cout <<"Values of rectangle2: "<< endl;
    rectangle2.DisplayValues();

    cout<<"Modifying rect1 values..."<<endl;
    // Modifying rect1 values
    rectangle1.setLength(5);
    rectangle1.setWidth(6);

    // Displaying the areas of rectangle11 and rectangle2 after modification
    cout <<"Values of rectanglle1: "<< endl;
    rectangle1.DisplayValues();
    cout <<"Values of rectanglle2: "<< endl;
    rectangle2.DisplayValues();
    return 0;
}



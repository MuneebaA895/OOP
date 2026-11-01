#include<iostream>
using namespace std;

class Rectangle{
private:
   double width;
   double length;

public:
    void setWidth(double w) {
        width = w;
    }
    void setLength(double l){
        length = l;
    }
    double getWidth() const{
        return width;
    }
    double getLength() const{
        return length;
    }
    double getArea() const{
        return width * length;
    }
};


int main(){
    Rectangle Kitchen;    // Define an object of the Rectangle class
    double w;             // Local variable for width
    double l;             // Local variable for length

    // Get the rectangle's width and length from the user.
    cout << "......This program will calculate the area of a rectangle.......\n";
    cout << "What is the width? ";
    cin >> w;

    cout << "What is the length? ";
    cin >> l;

    // Store the width and length of the rectangle in the Kitchen object.
    Kitchen.setWidth(w);
    Kitchen.setLength(l);

    // Display the rectangle's data.
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << Kitchen.getWidth() << endl;
    cout << "Length: " << Kitchen.getLength() << endl;
    cout << "Area: " << Kitchen.getArea() << endl;

    return 0;
}







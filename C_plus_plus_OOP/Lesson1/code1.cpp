#include <iostream>
#include<string>
using namespace std;

// Class Definition
class Vehicle {
    public:
    // Member Variables 
    string type;
    string model;
    string colour;
    int speed;
    string fuelType;

    // Member Functions
    void Start()
    {
        cout<<type<<" is starting..........."<<endl;
    }
    void Stop()
    {
        cout<<type<<" is stopping..........."<<endl;
    }
    void TurnLeft()
    {
        cout<<type<<" is turning left..........."<<endl;
    }
    void TurnRight()
    {
        cout<<type<<" is turning right..........."<<endl;
    }
    void DisplayProperties()
    {
        cout<<"Vehicle Type: "<<type<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Colour: "<<colour<<endl;
        cout<<"Speed: "<<speed<<" km/h"<<endl;
        cout<<"Fuel Type: "<<fuelType<<endl;
    }
};

int main() { 
    // Create an object of the Vehicle class
    Vehicle Car;

    // Assign values to the object's member variables
    Car.type = "Car";
    Car.model = "Toyota";
    Car.colour = "Red";
    Car.speed = 120;
    Car.fuelType = "Petrol";

    // Call object's member functions 
    Car.DisplayProperties();
    Car.Start();
    Car.TurnLeft();
    Car.TurnRight();
    Car.Stop();

    return 0;
}

    

#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    protected:
    string vehicleType;

    public:
    Vehicle(){ //Default Constructor
        vehicleType="Unknown";
        cout<<"Default vehicle constructor called"<<endl;
    }
    Vehicle(string type){
        vehicleType=type;
        cout<<"Parameterized vehicle constructor is called"<<endl;
    }
};

class Car: public Vehicle{
    private:
    string carID;

    public:
    Car(): Vehicle(){
        carID=100;
        cout<<"Default car constructor called"<<endl;
    }
    Car(string t,string id): Vehicle(t){
        carID=id;
        cout<<"Parameterized car constructor is called"<<endl;
    }

    void displayCarInfo(){
        cout<<"Displaying Car Info"<<endl;
        cout<<"............................"<<endl;
        cout<<"Car Type:"<<vehicleType<<endl;
        cout<<"Car Id: "<<carID<<endl;
        cout<<"............................"<<endl;
    }
};

int main(){
    Car BMW("BMW","ZX146");
    BMW.displayCarInfo();
}
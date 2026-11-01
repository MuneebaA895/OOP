#include<iostream>
#include<string>
using namespace std;

class CoffeeShop{
private:
string shopName;
string shopLocation;
string managerName;

public:
CoffeeShop(){
    shopName=" ";
    shopLocation=" ";
    managerName=" ";
}
~CoffeeShop(){
    cout<<"Destructor called"<<endl;
}
void setCoffeeDetails(string n, string l, string m){
    shopName=n;
    shopLocation=l;
    managerName=m;
}
void display(){
    cout<<"......Shop Details......."<<endl;
    cout<<"Shop Name: "<<shopName<<endl;
    cout<<"Shop Location: "<<shopLocation<<endl;
    cout<<"Manager Name: "<<managerName<<endl;
}
};

class BeverageCounter: public CoffeeShop{
private:
 string status;

public:
BeverageCounter(){
    status="null";
}

void setBeverageStatus(string s){
  status=s;
}
void display(){
    CoffeeShop::display();
    cout<<"Status: "<<status<<endl;
}
};
int main(){
    BeverageCounter Expresso;
    Expresso.setCoffeeDetails("Best Coffee", "Antarctica", "Skipper");
    Expresso.setBeverageStatus("available");
    Expresso.display();
}
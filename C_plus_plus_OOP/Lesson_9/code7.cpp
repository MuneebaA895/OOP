#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Product
{
private:
    int productID;
    string name;
    double price;

public:
    Product(int id, string n, double p)
    {
        productID = id;
        name = n;
        price = p;
    }
    void display()
    {
        cout<<"......................"<<endl;
        cout<<"=====DISPLAYING PRODUCTS====="<<endl;
        cout <<"ID: "<<productID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Price: Rs" <<price << endl;
    }
};

int main()
{
    // Creating 3 Objects of Product
    Product Mobile(1,"Mobile",50000);
    Product Laptop(2,"Laptop",100000);
    Product USB(3, "USB", 2000);

    // Creating a Vector called MyVector
    // MyVector is a vector of product class
    vector<Product>MyProductVector;

    cout<<"............................"<<endl;
    cout<<"Vector Member Function 1: push_back()"<<endl;
    MyProductVector.push_back(Mobile);
    MyProductVector.push_back(Laptop);
    MyProductVector.push_back(USB);
    cout<<"MyProductVector created of size: "<<MyProductVector.size()<<endl;

    cout<<"==========================="<<endl;
    cout<<"Vector Member Function 2: size()"<<endl;
    cout<<"Size of MyProductVector: "<<MyProductVector.size()<<endl;

    cout<<"==========================="<<endl;
    cout<<"Vector Member Function 3: front() and back()"<<endl;
    cout<<"Selecting the first object in the vector";
    cout<<" and calling the display function"<<endl;
    MyProductVector.front().display();

    cout<<"\nSelecting the last object in the vector";
    cout<<" and calling the display function"<<endl;
    MyProductVector.back().display();


    cout<<"==========================="<<endl;
    cout<<"Vector Member Function 4: insert(it, value)"<<endl;
    cout<<"Inserting a new object LED screen at index 1"<<endl;
    Product LED(4, "LED", 80000);

    // insert(iterator, value)
    // The first argument must be an iterator, not an index.
    // begin() returns an iterator pointing to the first element.
    // To insert at index 0, use begin().
     // To insert at index n, use begin() + n.
    MyProductVector.insert(MyProductVector.begin()+1,LED);
    cout<<"Size of MyProduct vector after inserting 1 object: ";
    cout<<MyProductVector.size()<<endl;

    cout<<"....Displaying after inserting LED object"<<endl;
    for(int i=0; i<MyProductVector.size(); i++){
        MyProductVector[i].display();
    }

    cout<<"==========================="<<endl;
    cout<<"Vector Member Function 5: at"<<endl;
    cout<<"Displaying Laptop object at index 2"<<endl;
    MyProductVector.at(2).display();
    
    cout<<"==========================="<<endl;
    cout<<"Vector Member Function 6: swap"<<endl;
    // Creating a new empty vector and swapping it

    vector<Product>MyVector2;
    MyProductVector.swap(MyVector2);
    cout<<"....Displaying MyVector2....."<<endl;
    for(int i=0; i<MyVector2.size(); i++){
        MyVector2[i].display();
    }

    cout<<"==========================="<<endl;
    cout<<"Vector Member Function 7: pop()"<<endl;
    MyVector2.pop_back();
    cout<<"After pop_back size of the vector: "<<MyVector2.size()<<endl;

    cout<<"==========================="<<endl;
    cout<<"Vector Member Function 8: empty()"<<endl;
    if (MyVector2.empty()){
        cout<<"MyVect2 is empty."<<endl;
    }
    else
    {
        cout<<"MyVect2 is not empty."<<endl;
    }
    
    cout<<"==========================="<<endl;
    cout<<"Vector Member Function 9: clear()"<<endl;
    MyVector2.clear();
    cout<<"Is Myvect2 noe empty? "<<MyVector2.empty()<<endl;

}


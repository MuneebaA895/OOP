#include<iostream>
#include<string>
using namespace std;

class InventoryItem{
    private:
       string ItemDescription;
       int ItemQuantity;
       double ItemPrice;

    public: // First Constructor
       InventoryItem(): InventoryItem("Laptop", 20, 50000.0){ 
         cout<<"First Constructor Called!"<<endl;     
       }
         // Second Constructor
       InventoryItem(string descrip, int quantity, double price){ 
                 ItemDescription = descrip;
                 ItemQuantity = quantity;
                 ItemPrice = price;
                 cout<<"Second Constructor Called!"<<endl;
         }

        void DisplayItemInfo(){
            cout << "Item Description: " << ItemDescription << endl;
            cout << "Item Quantity: " << ItemQuantity << endl;
            cout << "Item Price: Rs" << ItemPrice << endl;
        }
};

int main(){
    // Constructor 1 called because no arguments are passed
    InventoryItem item1;
    item1.DisplayItemInfo();
    cout<<".................................."<<endl;

    // Constructor 3 called because three arguments are passed
    InventoryItem item3("Smartwatch", 50, 5000.0);
    item3.DisplayItemInfo();

    return 0;
}

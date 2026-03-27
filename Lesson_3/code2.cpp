#include<iostream>
#include<string>
using namespace std;

class InventoryItem{
    private:
       string ItemDescription;
       int ItemQuantity;
       double ItemPrice;

    public:
       InventoryItem(){ // Constructor #1
              ItemDescription = "";
              ItemQuantity = 0;
              ItemPrice = 0.0;
       }
       InventoryItem(string descrip){ // Constructor #2
                ItemDescription = descrip;
                ItemQuantity = 0;
                ItemPrice = 0.0;
       }
       InventoryItem(string descrip, int quantity, double price){ // Constructor #3
                 ItemDescription = descrip;
                 ItemQuantity = quantity;
                 ItemPrice = price;
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

    // Constructor 2 called because one argument is passed
    InventoryItem item2("Laptop");
    item2.DisplayItemInfo();

    // Constructor 3 called because three arguments are passed
    InventoryItem item3("Smartwatch", 50, 5000.0);
    item3.DisplayItemInfo();

    return 0;
}


#include<iostream>
#include<string>
using namespace std;

class Book{
    protected:
    string bookName;
    int price;
    int quantity;

    public:
    void setBookDetails(string n, int p, int q){
       bookName=n;
       price=p;
       quantity=q;
    }
    void displayCalculateCost(){
        cout<<"Total Cost:"<<(price*quantity)<<endl;
    }
};
class DiscountedBook: public Book{
private:
double discount_percentage;

public:
void setDiscount(double d){
discount_percentage=d;
}
void displayCalculateCost(){
    if (discount_percentage>0){
     cout<<"Total cost: "<<((price*quantity)-(price*quantity*discount_percentage)/100);
    }
    else{
        Book::displayCalculateCost();
    }
}
};
int main(){
    string bookname;
    double price, quantity, discount;
    cout<<"Enter book name:"<<endl;
    cin>>bookname;
    cout<<"Enter price: "<<endl;
    cin>>price;
    cout<<"Quantity: "<<endl;
    cin>>quantity;
    cout<<"Enter discount , if no discount enter 0: "<<endl;
    cin>>discount;

    DiscountedBook OOP;
    OOP.setBookDetails(bookname, price, quantity);
    OOP.setDiscount(discount);
    OOP.displayCalculateCost();
}
#include <iostream>
using namespace std;
class Book {
private:
    int pages;
    double price;
public:
    // Constructor initializes the book
    Book(int, double);

    // Function to display book details
    void display() const {
        cout << "Pages: " << pages << endl;
        cout << "Price: $" << price << endl;
    }
};
 Book::Book(int bookpages=300, double bookprice=29.9) {
     pages=bookpages;
     price=bookprice;
    }
int main() {
    Book myBook; 
    myBook.display();          // Display the book's details
    return 0;}


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
 Book::Book(int bookpages, double bookprice) {
     pages=bookpages;
     price=bookprice;
    }
int main() {
    Book myBook(300, 29.99);  // Constructor runs automatically with parameters
    myBook.display();          // Display the book's details
    return 0;}


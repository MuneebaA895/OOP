#include <iostream>
using namespace std;
class Book {
private:
    int pages;
    double price;
public:
    // Constructor initializes the book
    Book();

    // Function to display book details
    void display() const {
        cout << "Pages: " << pages << endl;
        cout << "Price: $" << price << endl;
    }
};
 Book::Book(): pages(300), price(29.99) {
     // Constructor body can be empty since we're using an initializer list 
        
    }
int main() {
    Book myBook;       // Constructor runs automatically
    myBook.display();  // Display the book's details
    return 0;}



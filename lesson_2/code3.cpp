#include<iostream>
#include<string>
using namespace std;

class User {

   private:
    string userName;
   
   public:
     User(){ // Initialize username automatically
        userName = "Default User";
        cout<<"Welcome "<<userName<<endl;
        cout<<"Constructor called.\n";
     }
};

int main() {
    cout<<"Constructor not called yet.\n";
    User user1; // Create an object user1 and call the constructor
    cout<< "Program ended.\n";
    return 0;
}


#include<iostream>
#include<string>
using namespace std;

class User {

   private:
    string userName;
   
   public:
     User(); // Constructor declaration
};

User::User(){ // Constructor definition
    userName = "Default User";
    cout<<"Welcome "<<userName<<endl;
}
int main() {
    User user1; // Create an object of the User class
    cout<< "You can now use the system.\n";
    return 0;
}



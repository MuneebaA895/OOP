#include<iostream>
#include<string>
using namespace std;
class Budget{
    private:
      static double corpBudget; // Static data member
      double departmentBudget;

    public:
       Budget(){
        departmentBudget=0.0; 
       }
       void AddBudget(double amount){
           departmentBudget+=amount; 
           corpBudget+=amount; 
       }
       double getDepartBudget(){
            return departmentBudget;
       }
       static double getCorpBudget(){ //Static member function
            return corpBudget;
       }     
};
// Definition of static member variable corpBudget
double Budget::corpBudget = 0.0;

int main(){
    // We can access static member function  without creating object 
    cout<<"Overall Corp Budget: "<<Budget::getCorpBudget()<<endl;

    Budget Sales;
    Budget Accounts;
    Budget HR;

    Sales.AddBudget(100);
    cout<<"........................................."<<endl;
    cout<<"Overall Corp Budget: "<<Budget::getCorpBudget()<<endl; 
    return 0;
}


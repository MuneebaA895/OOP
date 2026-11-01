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
           departmentBudget+=amount; //runing sum of invividual objects
           corpBudget+=amount; //running sum of all objects
       }
       double getDepartBudget(){
            return departmentBudget;
       }
       double getCorpBudget(){
            return corpBudget;
       }
};
// Definition of static member variable corpBudget
double Budget::corpBudget = 0.0;

int main(){

    Budget Sales;
    Budget Accounts;
    Budget HR;

    Sales.AddBudget(100);
    Accounts.AddBudget(200);
    HR.AddBudget(300);
    Sales.AddBudget(400);

    cout<<"Sales Budget: "<<Sales.getDepartBudget()<<endl;
    cout<<"Accounts Budget: "<<Accounts.getDepartBudget()<<endl;
    cout<<"HR Budget: "<<HR.getDepartBudget()<<endl;

    cout<<"........................................."<<endl;
    cout<<"Overall Corp Budget: "<<HR.getCorpBudget()<<endl;
    cout<<"Overall Corp Budget: "<<Accounts.getCorpBudget()<<endl;
    cout<<"Overall Corp Budget: "<<Sales.getCorpBudget()<<endl;
    return 0;
}


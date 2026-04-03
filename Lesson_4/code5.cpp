#include<iostream>
#include<string>
using namespace std;

class Budget{
    private:
      double departmentBudget;

    public:
        // public static data member
        static double corpBudget; 

       Budget(){ //Constructor
        departmentBudget=0.0;
        
       }
       void AddBudget(double amount){
           departmentBudget+=amount; 
           corpBudget+=amount; 
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
    // We can access static data member without object 
    cout<<"Overall Corp Budget: "<<Budget::corpBudget<<endl;
    return 0;
}


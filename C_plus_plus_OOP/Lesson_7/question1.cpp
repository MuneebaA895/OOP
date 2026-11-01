#include<iostream>
#include<string>
using namespace std;

class Employee{  // Base Class
    private:
    string name;
    int employeeID;
    int salary;

    public:
    void setEmployee(string n,int id, int s){
        name=n;
        employeeID=id;
        salary=s;
    }
    void displayEmployee(){
        cout<<"....Displaying Employee's Info...."<<endl;
        cout<<"Employee's Name: "<<name<<endl;
        cout<<"EmployeeID: "<<employeeID<<"| salary: "<<salary<<endl;
    }
};
// Derived Class
class Manager: public Employee{
    private: 
    int bonus;

    public:
    void set_bonus_from_Manager(int b){
        bonus=b;
    }
    int getBonus_From_manager(){
       return bonus;
    }
};

int main(){
   Manager Ms_Muneeba;
   Ms_Muneeba.setEmployee("Aliya",102,50000);
   Ms_Muneeba.set_bonus_from_Manager(5000);
   cout<<"............................."<<endl;
   Ms_Muneeba.displayEmployee();
   cout<<"Ms Muneeba's employee was given bonus: "<<Ms_Muneeba.getBonus_From_manager()<<endl;
   cout<<"............................"<<endl;
}
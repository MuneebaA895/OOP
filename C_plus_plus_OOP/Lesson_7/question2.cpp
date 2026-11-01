#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
      string PersonName;
    protected:
      int PersonAge;
    public:
      int PersonID;
};

class Teacher: public Person{
 public:
 void displayTeacher(){
    cout<<"Person Name:"<<PersonName<<endl; //inaccessible
    cout<<"Person age: "<<PersonAge<<endl; // protected
    cout<<"Person ID: "<<PersonID<<endl; // public
}

};

class Student: protected Person{
  public:
  void displayStudent(){
    cout<<"Person Name:"<<PersonName<<endl; //inaccessible
    cout<<"Person age: "<<PersonAge<<endl; // becomes protected
    cout<<"Person ID: "<<PersonID<<endl; // becomes protected
  }
};

class Staff: private Person{
  public:
  void displayStaff(){
    cout<<"Person Name:"<<PersonName<<endl; //inaccessible
    cout<<"Person age: "<<PersonAge<<endl; // becomes private
    cout<<"Person ID: "<<PersonID<<endl; // becomes private
  }
};

int main(){
    Teacher Ms_Ramsha;
    Student Aliya;
    Staff Mehrunissa;

    Ms_Ramsha.PersonName; // Private member cannot be accessed in the main
    Ms_Ramsha.PersonAge; //  Protected member cannot be accessed in the main
    Ms_Ramsha.PersonID;  //  Public member is accesssible

    Aliya.PersonName; // inaccessible
    Aliya.PersonAge; // Protected member cannot be accessed in the main
    Aliya.PersonID;  // Protected member cannot be accessed in the main

    Mehrunissa.PersonName; // inaccessible
    Mehrunissa.PersonAge; // Private member cannot be accessed in the main
    Mehrunissa.PersonID;  // Private member cannot be accessed in the main
}


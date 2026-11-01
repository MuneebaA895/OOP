#include<iostream>
#include<string>
using namespace std;

class Tree{
    private:
      string TreeName;
      string TreeLocation;
      static int countTrees; // Static data member

    public: 
      Tree(string n, string l){ 
        TreeName=n;
        TreeLocation=l;
        
      }
      int AddTrees(){
        countTrees++; 
        return countTrees;
      }
};
// Definition of static data member outside the class
int Tree::countTrees=0;

int main(){
    Tree oakTree("Oak", "Islamabad");
    Tree neemTree("Neem", "Karachi");
    Tree pineTree("Pine", "Hyderabad");  
    cout<<oakTree.AddTrees();
    cout<<endl;
    cout<<neemTree.AddTrees();
    cout<<endl;
    cout<<pineTree.AddTrees(); 
    cout<<endl;
}

    
    
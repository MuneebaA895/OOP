#include<iostream>
#include<string>
using namespace std;

class Tree{
    private:
      string TreeName;
      string TreeLocation;
      int countTrees;

    public: 
      Tree(string n, string l){ 
        TreeName=n;
        TreeLocation=l;
        countTrees=0;
      }
      int AddTrees(){//This function will count trees
        countTrees++; // countTrees=countTrees+1
        return countTrees;
      }
};
int main(){
    Tree oakTree("Oak", "Islamabad");
    Tree neemTree("Neem", "Karachi");
    Tree pineTree("Pine", "Hyderabad");

    cout<<"After adding 1 tree the number of Oak Trees: "<<oakTree.AddTrees();
    cout<<endl;
    cout<<"After adding 1 tree the number of Neem Trees: "<<neemTree.AddTrees();
    cout<<endl;
    cout<<"After adding 1 tree the number of Neem Pine: "<<pineTree.AddTrees(); 
    cout<<endl;
}



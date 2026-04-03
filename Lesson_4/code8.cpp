#include<iostream>
#include<string>
using namespace std;

class Tree{
    private:
      string TreeName;
      string TreeLocation;
      

    public: 
      static int countTrees; // Static data member is public

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
    // Accessing static data member without creating an object
    cout<<"Number of Trees: "<<Tree::countTrees<<endl;
}

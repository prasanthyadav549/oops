/*
*  Dynamic polymorphism comes into existence when use the inheritence
  Dynamic polymorphism--> overriding a method using the inheritence

*  static polymorphism--> the number of inputs or the type of inputs  ot the 
   outputs will vary

*/
#include <bits/stdc++.h>


using namespace std;

class ArrayList{
    /*
   private:
    vector<int> arr;

    */
   protected:
     vector<int> arr; // useCase is to make it inheritable and still protecting it 
      // form the outside the class

public:
    ArrayList() {
       arr={-1,-3,4};
    }
    vector<int> getArray() {return arr;}
      virtual void add(int x) {arr.push_back(x);}
         void print() {
        cout<<"Inside the ArrayList: "<<endl;
         for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
            }
            cout<<endl;
    }
    int size() {return arr.size();}

};
////////////////////////////////////////////////////////////////
/*
 creating our own ArrayList which stores only the non-negative elements
 
*/
class NonNegativeArrayList : public ArrayList{

    public:
     NonNegativeArrayList(vector<int> elements) {
          for(int i=0; i<elements.size(); i++) {
           add(elements[i]); // this add method adds all the elements but we want to make 
           // sure that we only need to add the non-negative elements
           // to achieve this we need to override this add method
          }
     }
    //  NonNegativeArrayList(){};

    // overriding the add method 
    void add(int x);   // only declaring the method defintion is written outside the class
      
} ;
// defining any method outside the class 
// syntax--> returntype classname :: method name
 void NonNegativeArrayList :: add(int x) {
          if(x<0) return;
          arr.push_back(x);
 }

////////////////////////////////////////////////////////////////
void print(ArrayList arr) {
    // the object of the NonNegativeArrayList is the object of the ArrayList
    //the Derived class objects are the objects of the Base class
       arr.print();
}
// this calls the add() method of the ArrayList even though i pass the object
// of the NonNegativeArrayList. 
//But the requirement is that at runtime it should call the add() method
// of the NonNegativeArrayList
void addOutside(ArrayList &arr,int x) {
      arr.add(x);
      arr.print();
    // we want the program to determine the object type and call the overriden method
    // compiler will only look ArrayList method as it is the input type
    // But we want to look at the NonNegativeArrayList methods when the program is run
    // so to make sure that the NonNegativeArrayList add method is called we 
    // need to make the add method of the ArrayList as th
    
}
int main() {
    /*
      ArrayList myArray;
     cout<<myArray.size()<<endl;
     myArray.add(1);
     myArray.add(2);
     cout<<myArray.size()<<endl;
     auto v=myArray.getArray(); // copy of the array is written
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        }

    */
    vector<int> temp={1,-1,3,-5}; 
  //  NonNegativeArrayList arrayList(temp);
   
  //   addOutside(arrayList,-1);
  //   arrayList.print();


    ArrayList* p= new ArrayList();
        p->add(-3);
        p->print();

      return 0;
}

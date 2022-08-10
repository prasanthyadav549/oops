/*
*  Dynamic polymorphism comes into existence when use the inheritence
  Dynamic polymorphism--> overriding a method using the inheritence

*  static polymorphism--> the number of inputs or the type of inputs  ot the 
   outputs will vary

*/
#include <bits/stdc++.h>


using namespace std;

class ArrayList{
   private:
    vector<int> arr;
public:
    ArrayList() {
        arr={};  
    }
    vector<int> getArray() {return arr;}
    void add(int x) {arr.push_back(x);}
    void print() {
         for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
            }
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
           // to achieve this wwe need to override this add method
          }
     }
    //  NonNegativeArrayList(){};

    // overriding the add method 
    void add(int x);   // only declaring the method defintion is written outside the class
      
} ;

////////////////////////////////////////////////////////////////
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
   NonNegativeArrayList arrayList(temp);
   cout<<arrayList.size()<<endl;


      return 0;
}
#include <bits/stdc++.h>

/*

encapsulation example
  bank account
  we don't want user to change the  bank account balance
    * to avoid the changes
    * to avoid the unwanted errors
    * Protected access specifier can be used for inheritence the child classes 
          inherits the protected access specifier. But the protected access specifier is not
           accessible outside the class;
    *  using the access specifier in inheritence
      class Base{

      };

      class Child: public Base{

      }

      using public portected of the base will remain as the protected ,public will be public

       class Child : protected Base{

       }
       using the protected,public of the base will inherit as the protected,protected of 
         the base will be the protected`

         class Child : private Base{


*/

using namespace std;

class A{
  int x;
   public:
  A(int a) {
    this->x = a;
  }
  A() {
      this->x = 0;
  }
};

class B: public A{
     int y;

     public:
     B(int a) : A(a) {
       this->y = a;
     }
     void print() {
       cout<<(this->y)<<endl;
     }

};

int main(){
     B b(4);
     b.print();


   return 0;
}

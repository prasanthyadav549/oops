/*

   --> Abstraction - hiding the  implementation of the methods of the class


      Example-  Consider a Bank employee  The calculation of Balance of the Employee is not known the Employee
        so we make it as a private method
              class Employee {
                   
                   int balance;
                     int CalculateBalance(int bankAccount){
                         Actual logic to calculate the balance 
                     }

                    public: 

                      int getBalance(int bankAccount){
                               CalculateBalance(bankAccount);
                        }        
                     
              }











/*
*  to implement the abstract class in java we use the aabstract keyword
   but in c++ we don't have abstract keyword so we need to use the pure virtual function
*   A class having atleast one pure virtual funtion is a abstract class
*   Abstract classes are only for the purpose of the inheritence

 */

#include <bits/stdc++.h>



using namespace std;


   class smartphone{
         public:
         virtual void take_selfie()=0;  // this is the pure virtual function
         virtual void make_call()=0; // this is the pure virtual function

         // All the child classes that inherits from this class need to implement all the 
         // pure virtual functions
   };

   class Android : public smartphone{
      public:
       void take_selfie() {   // need to implement the virtual function it is 
         // mandatory to implement this virtual otherwise it will give error 
         cout<<"selfie was taken with the medium quality";
          
       }
       void make_call() {   // need to implement the virtual function it is
       cout<<"call was taken with the medium quality";
       }


   };

   class Iphone : public smartphone{
      public:
       void take_selfie() {
          cout<<"selfie was taken with the high quality";
       }
        void make_call() {   // need to implement the virtual function it is
       cout<<"call was taken with the High quality"<<endl;
       }

   };


   int main() {
       smartphone *phone=new Android();
     phone->take_selfie();
       return 0;
   }



   /*
   Abstract method  - Every inheriting class should implement this method.

   */
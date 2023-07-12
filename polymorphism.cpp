/*
* interview defination : generally ploy means many and morph means forms.i.e the ability of a functon or object to have multiple forms in different contexts.
*  Dynamic polymorphism comes into existence when use the inheritence
  Dynamic polymorphism--> overriding a method using the inheritence

*  static polymorphism--> the number of inputs or the type of inputs  ot the 
   outputs will vary

*/
#include <bits/stdc++.h>


using namespace std;

// class ArrayList{
//     /*
//    private:
//     vector<int> arr;

//     */
//    protected:
//      vector<int> arr; // useCase is to make it inheritable and still protecting it 
//       // form the outside the class

// public:
//     ArrayList() {
//        arr={-1,-3,4};
//     }
//     vector<int> getArray() {return arr;}
//       virtual void add(int x) {arr.push_back(x);}
//          void print() {
//         cout<<"Inside the ArrayList: "<<endl;
//          for(int i=0;i<arr.size();i++){
//             cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//     }
//     int size() {return arr.size();}

// };
// ////////////////////////////////////////////////////////////////
// /*
//  creating our own ArrayList which stores only the non-negative elements
 
// */
// class NonNegativeArrayList : public ArrayList{

//     public:
//      NonNegativeArrayList(vector<int> elements) {
//           for(int i=0; i<elements.size(); i++) {
//            add(elements[i]); // this add method adds all the elements but we want to make 
//            // sure that we only need to add the non-negative elements
//            // to achieve this we need to override this add method
//           }
//      }
//     //  NonNegativeArrayList(){};

//     // overriding the add method 
//     void add(int x);   // only declaring the method defintion is written outside the class
      
// } ;
// // defining any method outside the class 
// // syntax--> returntype classname :: method name
//  void NonNegativeArrayList :: add(int x) {
//           if(x<0) return;
//           arr.push_back(x);
//  }

// ////////////////////////////////////////////////////////////////
// void print(ArrayList arr) {
//     // the object of the NonNegativeArrayList is the object of the ArrayList
//     //the Derived class objects are the objects of the Base class
//        arr.print();
// }
// // this calls the add() method of the ArrayList even though i pass the object
// // of the NonNegativeArrayList. 
// //But the requirement is that at runtime it should call the add() method
// // of the NonNegativeArrayList
// void addOutside(ArrayList &arr,int x) {
//       arr.add(x);
//       arr.print();
//     // we want the program to determine the object type and call the overriden method
//     // compiler will only look ArrayList method as it is the input type
//     // But we want to look at the NonNegativeArrayList methods when the program is run
//     // so to make sure that the NonNegativeArrayList add method is called we 
//     // need to make the add method of the ArrayList as th
    
// }
// int main() {
//     /*
//       ArrayList myArray;
//      cout<<myArray.size()<<endl;
//      myArray.add(1);
//      myArray.add(2);
//      cout<<myArray.size()<<endl;
//      auto v=myArray.getArray(); // copy of the array is written
//      for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//         }

//     */
//     vector<int> temp={1,-1,3,-5}; 
//   //  NonNegativeArrayList arrayList(temp);
   
//   //   addOutside(arrayList,-1);
//   //   arrayList.print();


//     ArrayList* p= new ArrayList();
//         p->add(-3);
//         p->print();

//       return 0;
// }



/**
 *   interview perspective same for alll the interviews prepare the same 
 *   
 *    polymorphsim can be acheived by two ways 
 *       1--> commpile time polymorphsim
 *       2--> run time polymorphsim
 * 
 *  compile time polymorphsim: ctp can be achieved by operator overloading or function overloading.
 * 
 *      function overloading: when we have different functions with same 
 *            the compiler decides the function based on the 
 *               1--> number of parameters passed 
 *               2--> types of parameters passed
 * 
 *      example 
 *          class Add {
 *              int x;
 *         public:
 *               Add(int x1) : x(x1){}
 *           
 *         void add(int y) {
 *             cout<<(x+y)<<endl;
 *        }
 *        
 *  void add(double y,double z) {
 *        cout<<(x+y)<<endl;} 
 * 
 *      }
 * 
 * 
 * Operator overloading : When an operator is updated to be used for user-defined data types (objects etc.), 
 *                        this is known as operator overloading. To use operator overloading, at least one 
 *                         operand must be a user-defined data type.
 * 
 * 
 * #include<iostream>

using namespace std;

class Count {
    int x;
    public:
        //  Constructor
        Count(int X = 0) {
            this -> x = X;
        }
    // Overloading the ++ operator.
    Count operator++() {
        Count c;

        c.x = ++x;

        return c;
    }
    // Print value of x.
    void print() {
        cout << x << endl;
    }

};

int main() {
    Count c1(42);

    cout << "Before using ++ operator: ";
    c1.print();

    Count c2 = ++c1;
    cout << "After using ++ operator: ";
    c2.print();

    return 0;
    }


    RunTime Polymorphsim: Runtime polymorphism occurs when functions are resolved at runtime
                          rather than compile time when a call to an overridden method is resolved
                           dynamically at runtime rather than compile time. It's also known as late binding 
                           or dynamic binding. 
           * Runtime polymorphism is achieved using a combination of function overriding and virtual functions

#include <bits/stdc++.h>

using namespace std;

 class Polygon {

       
       public:
       int height;
       int width;
       void set_values(int h,int w) {
            height = h;
            width = w;
       }
       int area() {
           return 0;
       }
   };

   class Rectangle : public Polygon {

       public:
       int area() {
           return height * width;
       }
    };


    class Triangle : public Polygon {

      public:
       int area() {
           return (height * width)/2;
       }
    };



int main() {
    Polygon p;
    Rectangle r;
    Triangle t;
    Polygon *poly1 = &p;
    Polygon *poly2 = &r;
    Polygon *poly3 = &t;
    poly1->set_values(5,5);
    poly2->set_values(5,5);
    poly3->set_values(5,5);
    cout<<poly1->area()<<endl;
    cout<<poly2->area()<<endl;
    cout<<poly3->area()<<endl;

      
      return 0;

}

the output we get as 
0 
0 
0 

since the pointer poly1 and poly2 are of type polygon class the compiler calls the area method
in the polygon class even it is storing the reference of the rectangle and Triangle class

to solve this problem we the help of virtual keyword 
Virtual Functions: In c++ virtual functions are the base class functions that are 
                   redefined and overriden in the derived classes.

  
#include <iostream>

using namespace std;

class Polygon {
    protected: int height,
    width;
    public: void set_values(int x, int y) {
        width = x;
        height = y;
    }
    virtual int area() {
        return 0;
    }
};

class Rectangle: public Polygon {
    public: int area() {
        return width * height;
    }
};

class Triangle: public Polygon {
    public: int area() {
        return (width * height / 2);

    }
};

int main() {
    Rectangle rect;
    Triangle trgl;
    Polygon poly;

    Polygon * ppoly1 = & rect;
    Polygon * ppoly2 = & trgl;
    Polygon * ppoly3 = & poly;

    ppoly1 -> set_values(10, 20);
    ppoly2 -> set_values(10, 20);
    ppoly3 -> set_values(10, 20);

    cout << "Area of Rectangle is: " << ppoly1 -> area() << '\n';
    cout << "Area of Triangle is: " << ppoly2 -> area() << '\n';
    cout << "Area of Polygon is: " << ppoly3 -> area() << '\n';
    return 0;
}

Try it yourself  
Output:

Area of Rectangle is: 200
Area of Triangle is: 100
Area of Polygon is: 0



Here by declaring hte method with virtual tells the compiler to take the decisions at runtime .
 * 
 * 
 */








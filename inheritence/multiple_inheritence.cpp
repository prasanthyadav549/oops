/**
 * consider a teacher class
 * consider a student class
 * now there is TA--> whose is teacher as well as a student inherits both
 * 
 */
#include<bits/stdc++.h>

using namespace std;
class Teacher {

    string subject;
    int fees;

    public:
        Teacher(string s, int f) {
            subject = s;
            fees = f;
        }

      void teach_subject() {
          cout<<"teaching"<<endl;
      }
};


class Student {
       string college:
         
         public:
            Student(string c) {
                college = c;
            }
}

class Ta : public Teacher,public Student {

        int time;
}


int main() {
       
      return 0;
}
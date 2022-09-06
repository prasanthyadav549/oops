#include <bits/stdc++.h>



using namespace std;
class pizzaService {
      
};

class Pizza{
    private:
    string pizzaName;
    int cost;
    public:
    Pizza(string name, int price): pizzaName(name), cost(price){}
    void setPizza(string name, int price) {
        pizzaName= name,cost=price;
    }
    
};

class sauce {
      private: 
      string name;
      public:
     sauce(string Name) :name(Name){}
     void setSauce(string Name) {
          name= Name;
     }
     string getSauce() {return name;}

};

class user {
      int id;
      string name;

};



int main() {


    return 0;
}
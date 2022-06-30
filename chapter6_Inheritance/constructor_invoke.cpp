#include <iostream>
using namespace std;
// base class
class Parent{
int x;

public :
Parent() {
cout<<"Inside base class parameterized constructor "<<endl;
// 277 - 313 Assignment form of inheritance 
}

~Parent() {
cout<<"Inside base class destructor "<<endl;
}
};

class child : public Parent{
 public :
 child(){
     cout<<"Inside derived class constructor"<<endl;
 }
 ~child(){
     cout<<"Inside derived class destructor"<<endl;
 }
};


int main()
{
    child obj1;
return 0;

}

#include <iostream>
using namespace std;

class Base{
    public :
 void print(){
     cout<<"Base Function"<<endl;
 }
};
class Derived : public Base
{
    public :
 void print(){
     cout<<"Derived Function"<<endl;

    //  method 1 invokation with member function from derived class 
    Base :: print();
 }
};


int main()
{
    Derived d1,d2;
    d1.print();
// method 2 to invoke base function from object
    d2.Base :: print();
return 0;
}
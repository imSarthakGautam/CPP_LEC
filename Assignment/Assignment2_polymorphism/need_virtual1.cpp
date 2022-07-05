// need_virtual1.cpp
// neecessity of a virtual function

#include<iostream>
using namespace std;

class Animal{
    public:
        void display(){ //not virtual void diasplay
            cout<<"\n from base class animal";
        }
};

class Cow: public Animal{
    public:
        void display(){
            cout<<"\n from derived class Cow";
        }
};

class Dog: public Animal{
    public:
        void display(){
            cout<<"\n from derived class Dog";
        }
};

int main(){
    Animal *panm; //pointer to base class
    Animal anm;
    Cow cw;
    Dog dg;

    panm=&anm;
    panm->display();

    panm=&cw;
    panm->display();

    panm=&dg;
    panm->display();

    return 0;
}

/* here we haven't made usee of virtual function 
Terminal :

 from base class animal
 from base class animal
 from base class animal

 meanwhile when we use virtual function 
 terminal :
 
 from base class animal
 from derived class Cow
 from derived class Dog
 */

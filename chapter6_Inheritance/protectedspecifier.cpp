
#include<iostream>
using namespace std;

class Parent{
    //declaring a protected data member.
    protected:
        string id_protected;
};

class Child : public Parent{
    public:
        void setId(string id){
            id_protected = id;
        }
        void display(){
        //membe function Child(Derived class) accessing the protected data
            cout<<"is_protected is: "<<id_protected<<endl;
        }
};

int main(){
    Child obj1;
    obj1.setId("LEC077BCT019");
    obj1.display();
    return 0;
}

#include <iostream>
using namespace std;
class A  {
       public :
    void displaya(){
         cout <<"A"<<endl;
    }
};
class B : public virtual A {
    public :
    void displayb(){
        // A::display();
 cout <<"B"<<endl;
    }
};
class C : public virtual A {
       public :
    void displayc(){
        // A::display();
        cout<<"C"<<endl;
    }
};
class D : public B,public C{
   public :
    void displayd(){
        // A::display();
        cout<<"D"<<endl;
    }
};
int main()
{
    A a1;
    B b1;
    C c1;
    D d1;
    
    d1.displaya();
    d1.displayb();
    d1.displayc();
    d1.displayd();

     b1.displaya();
    c1.displaya();
   

return 0;
}

#include <iostream>
using namespace std; 

class binary {
    private :
    int a,b;

public :
    binary ()
    {
        int a=0;
        int b=0;
    
    }

     binary ( int x, int y)
    {
     a=x;
        b=y;
     
    }
    binary operator +( binary bin)
    {
        binary temp;
        // Calling object is passed implicitly and second iobject is passed through argument
        cout << "The value of bin insidwe overloading fnction :"<< temp.a<<endl;
        cout << "The value of bin insidwe overloading fnction :"<< temp.b<<endl;

        cout << "The value of bin insidwe overloading fnction :"<< bin.a<<endl;
        cout << "The value of bin insidwe overloading fnction :"<< bin.b<<endl;
        temp.a= a+ bin.a;
        temp.b= b+ bin.b;
        return temp;
    }

    void display();
    
};
void binary :: display(){

        cout<<"Value a "<<a<<endl;
        cout<<"Value b "<<b<<endl;
}
int main()
{
    binary b1,b2,b3;
    b1 = binary(10,20);
    b1 = binary(30,40);
    b3=b1+b2;
    // displaying object 1
    b1.display();
     // displaying object 2
    b2.display();
       // displaying object 3
    b3.display();

return 0;
}

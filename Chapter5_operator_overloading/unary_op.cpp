#include <iostream>
using namespace std;

class unary {
private :
int a;
int b;
int c;

public :
void getdata( int X, int Y, int Z){
    a=X;
    b=Y;
    c=Z;
}
void operator -(){
a=-a;
b=-b;
c=-c;
}
void display (){
    cout <<"Value of a is "<<a<<endl;
    cout <<"Value of b is "<<b<<endl;
    cout <<"Value of c is "<<c<<endl;


}

};

int main()
{
    unary obj;
    obj.display(-10,20,30);

    // calling overloaded operator
    -obj;
    obj.display();

return 0;
}
// operator overlaoding, functioion riding invocation order of constructor and destructors.

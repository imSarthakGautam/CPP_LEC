#include <iostream>
using namespace std;

class unaryFriend{
    private :
    int a=10, b=20,c=30;

    public :
    void show() {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    

    void friend operator -(unaryFriend& u1);
};
    void operator -(unaryFriend& u1)
    { 
u1.a = -u1.a;
u1.b = -u1.b;
u1.c = -u1.c;

 cout<<u1.a;
 cout<<u1.b;
 cout<<u1.c<<endl;

    };


int main()
{
    unaryFriend f1;
    f1.show();

    // After operator overloading
    -f1;
    f1.show();

return 0;
}
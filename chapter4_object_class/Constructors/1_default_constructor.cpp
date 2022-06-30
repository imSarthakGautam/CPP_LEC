// WAP to demonstate default constructors
#include <iostream>
using namespace std;

class construct 
{
    public :
    int a,b;
    construct()//default constructors.
    {
        cout<<"Constructor is called :";
        a=10, b=20;
}

void display()
{
    cout<<"The name is Sarthak Gautam";
}
};

int main()
{
    construct c;
c.display();

return 0;
}

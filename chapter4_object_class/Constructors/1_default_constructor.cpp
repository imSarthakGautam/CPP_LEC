// WAP to demonstate default constructors
#include <iostream>
using namespace std;

class construct 
{
    public :
    int a,b;
    construct ()//default constructors.
    {
        cout<<"Constructor is called :";
        a=10, b=20;
}
};

int main()
{
    construct c;

return 0;
}

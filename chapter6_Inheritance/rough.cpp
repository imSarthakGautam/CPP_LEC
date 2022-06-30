#include <iostream>
using namespace std;

class A {
    public :
    int x;
    int y;
    int addn;

    void add()
    {
        addn = x+y;
        cout<<"Add="<<addn;
    }
};

int main()
{
A a1,a2,a3;
a3=a1+a2; //Err. no operator "+" matches these operands

return 0;
}

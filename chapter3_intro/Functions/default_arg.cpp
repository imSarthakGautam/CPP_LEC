//WAP to study nature of default arguments in a function & function overloading ft.C++

#include <iostream>
using namespace std;

int sum(int x, int y, int z)
{
return (x+y+z);
}

int sum ( int a=1, int b=2)
{
    return (a+b);
}


int main()
{
     cout<< sum (3,4)<<endl;
     cout<< sum(5,6,7);
    
}
/*
C++ lets you specify more than one function of the same name in the same scope.
These functions are called overloaded functions, or overloads.
Overloaded functions enable you to supply different semantics for a function, depending on the types and number of its arguments.
*/

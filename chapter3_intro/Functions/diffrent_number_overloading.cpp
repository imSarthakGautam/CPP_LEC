#include <iostream>
using namespace std;

int sum( int a, double c)
{
return (a+c);
}

int sum( int a, double b, double c)
{
return (a+b+c);
}

int main()
{
cout<<sum(1,5)<< endl;
cout<<sum(2,5.5)<< endl;
cout<<sum(2,3.5,5.5);

}

/* When a function is called, compiler must figure out which function is to be invoked
It compares types and numbers of actual arguments to types and numbers of formal arguments
Then the best matched function is invoked.
*/

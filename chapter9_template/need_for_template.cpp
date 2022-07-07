// program showing need for template
//  here find_max() is used for 4 diffrent data types, 4 times despite ligic being same
// here redundant code can be eliminated by writing generic function that takes data types as arguments
// Here generic function is "template"


#include <iostream>
using namespace std;

int find_max( int a, int b)
{
    int result;
    if (a>b)
     result=a;
     else

     result =b;
     return result;
}

int find_max( float a, float b)
{
    int result;
    if (a>b)
     result=a;
     else
     result= b;
     return result;
}


int find_max( double a, double b)
{
    int result;
    if (a>b)
     result=a;
     else
     result= b;
     return result;
}

int find_max( char a, char b)
{
    int result;
    if (a>b)
     result=a;
     else
     result= b;
     return result;
}


int main()
{
    int i1=15, i2= 20;
    cout<<" Greater is "<< find_max(i1,i2)<<endl;
    float f1= 40000.05, f2= 3800.6;
    cout<<" Greater is "<< find_max(f1,f2)<<endl;
    double d1 = 32.98, d2= 56.6;
    cout<<" Greater is "<< find_max(d1,d2)<<endl;
    char c1='a', c2='A';
    cout<<" Greater is "<< find_max(c1,c2)<<endl;

return 0;
}

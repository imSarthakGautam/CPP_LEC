// Finding greater using template 
#include <iostream>

using namespace std;
template < class T> 
T find_max(T a, T b)
{
      int result;
    if (a>b)
     result=a;
     else

     result =b;
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

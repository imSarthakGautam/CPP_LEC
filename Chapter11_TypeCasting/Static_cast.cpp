#include <iostream>
using namespace std;
int main()
{
    int i;
    char c;
    c='A';
    float f= 3.1254f;
    i=f;

 cout<<"value of char is : "<<c<<endl;
    cout<<"value of float is : "<<f<<endl;
    cout<<"value of converted integer us  is : "<<i<<endl;

    i= static_cast<int>(f);
    cout<<"value of integer  is : "<<i<<endl;

i=c;

    i= static_cast<int>(c);
    cout<<"value of integer  is : "<<i<<endl;

return 0;
}
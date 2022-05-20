#include <iostream>
using namespace std;
void normal( int a)
{
    a= 20;
    cout<<"Value of A inside a function is : "<< a <<endl;
}
void reference( int &b)
{
    b=30;
    cout<< "Value of b indide function is : "<< b<< endl;
}

int main (){
    int a=5;
    int b=10;

    normal(a);
    reference(b);

    cout<< "Value of a in main function is : "<<a<<endl;
    cout<< "Value of b in main function is : "<<b<<endl;


}
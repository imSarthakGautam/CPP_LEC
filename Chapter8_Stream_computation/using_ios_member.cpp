//  c++ helps you to format I/O operations like determining the number of digits to be displayed after the decison
// specifying number base.etc
#include <iostream>
using namespace std;

// width function defines width of next value to be displayed in the output of console

void IOS_width(){
    cout <<"---------------\n";
    cout <<"Implementing ios :: width\n";

    char c= 'A';

    // Adjusting width will be 5
    cout.width(5);
    cout<<c<<"\n";

    int temp = 10;
    cout.width(11);
    cout <<temp;
    cout<<"\n---------\n";

}
void IOS_precision()
{
    cout <<"---------------\n";
    cout <<"Implementing ios :: precision\n\n";
    cout <<"Implementing ios :: width\n";

// makes cout print float with a fixed number of decimals.

      cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout<<3.1422;
    cout<<"\n-------------------------------------\n";
}



void IOS_fill(){
    cout<<"\n-------------------------------------\n";
    cout<<"Implemention ios::fill\n\n";
    char ch='a';

    cout.fill('*');

    cout.width(10);
    cout<<ch<<"\n";

    int i=1;

    cout.width(5);
    cout<<1;
    cout<<"\n--------------------------------------\n";
}
int main()
{
      IOS_width();
    IOS_precision();
    IOS_fill();
return 0;
}
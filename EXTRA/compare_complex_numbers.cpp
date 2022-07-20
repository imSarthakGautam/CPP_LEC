/*
WAP to compare the magnitude of a complex number by overloading <, > and ==
*/

#include <iostream>
#include <math.h>
using namespace std;

enum Bool { FALSE, TRUE }; // Bool data type stores only 2 values.
/*
Enum, also known as enumeration, is a user-defined data type that enables you to build a new data type
 with a specified range of potential values.
 The variable can select one value from the set of possibilities

 Example :
 enum direction {East, West, North, South}dir;
*/

class Complex
{
    private :
int r;
int i;

public:

void input()
{
cout << "Enter real and imaginary part" << endl;
cin >> r >> i;
}

void display()
{
cout << r << "+" << i << "i" << endl;
}

Bool operator < (Complex C)
{
float m1 = sqrt(r*r + i*i);
float m2 = sqrt(C.r*C.r + C.i*C.i);
return (m1 < m2 ? TRUE : FALSE);
}


Bool operator > (Complex C)
{
float m1 = sqrt(r*r + i*i);
float m2 = sqrt(C.r*C.r + C.i*C.i);
return (m1 > m2 ? TRUE : FALSE);
}

Bool operator == (Complex C)
{
float m1 = sqrt(r*r + i*i);
float m2 = sqrt(C.r*C.r + C.i*C.i);
return (m1 == m2 ? TRUE : FALSE);
}

};

int main()
{
Complex c1, c2;
c1.input();
c2.input();

if(c1<c2)
cout << "1st complex number is less than 2nd complex number" << endl;

else if(c1>c2)
cout << "1st complex number is greater than 2nd complex number" << endl;

else if(c1==c2)
cout << "1st complex number is equal to 2nd complex number" << endl;

c1.display();
c2.display();

return 0;
}
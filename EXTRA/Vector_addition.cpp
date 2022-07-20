/*
WAP to create a vector class to perform vector addition and return resultant
vector in main. use OOP concept
*/

#include <iostream>
using namespace std;

class Vector
{
int i, j, k;

public:

void input()
{
cout << "Enter a vector: " << endl;
cout << "i: "; cin >> i ;
cout << "j: "; cin >> j;
cout << "k: "; cin >> k;
}

Vector add(Vector v1, Vector v2)
{
Vector t;
t.i = v1.i + v2.i;
t.j = v1.j + v2.j;
t.k = v1.k + v2.k;
return t;
}

void display()
{
cout << "Vector sum = " << i << "i+" << j << "j+" << k << "k" <<endl;
}
};


int main()
{
Vector v1, v2, v3;
v1.input();
v2.input();
v3 = v1.add(v1,v2);
v3.display();

return 0;
}
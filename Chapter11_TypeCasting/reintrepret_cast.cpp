#include <iostream>
using namespace std;
int main()
{
    int i=100; 
    cout<<"Value of adress of i is "<<&i<<endl;
    int *p;

    int ivar;
    double dvar;
    int *pivar;
    double *pdvar;
    void *pvoid;

    pivar = reinterpret_cast<int*>(&dvar);
//   pivar = reintrepret_cast<int *>(&dvar); invalid type conversion : here double variable cannot be converted to integer pointer
    pivar = reinterpret_cast<int*>(ivar);//integer to integer pointer casting is okay

return 0;
}
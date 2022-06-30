#include <iostream>
using namespace std;

int main()
{
    // declaring an integer pointer
    int *pointInt;

    // declaring a float pointer
    float* pointFloat;

// dynamically allocate memory
pointInt = new int;
pointFloat = new float;


cout <<" Adress of pointInt is "<<pointInt<<endl;
cout <<" Adress of pointFloat is "<<pointFloat<<endl;

// assigning the value to memeory
*pointInt = 45;
*pointFloat = 65;

cout <<" Value of pointInt is "<<*pointInt<<endl;
cout <<" Value of pointFloat is "<<*pointFloat<<endl;

// deallocating the memory
delete pointInt;
delete pointFloat;

return 0;
}
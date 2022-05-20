// Implicit type conversion, This is done automatically by the compiler

#include <iostream>
using namespace std;

int main()
{
    //  assigning an int value to PTHREAD_NORMAL_MUTEX_INITIALIZER
    int num_int =9;
char char_test;
double num_double;



//  impicit conversion
//  assigning int value to a double variable

num_double = num_int;
char_test = num_int;

cout<< "num_int = " << num_int <<endl;
cout<< "num_double = " << num_double <<endl;
cout<< "char_test = " << char_test <<endl;

return 0;
}

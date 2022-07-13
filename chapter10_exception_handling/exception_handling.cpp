// An example of exception

#include<iostream>
using namespace std;

int main(){
    int a,b,x;
    cout<<"Enter the values of a and b: "<<endl;
    cin>>a>>b;
    x = a/(a-b); //Exception has occured.
    cout<<"The value of x is : "<<x<<endl;
    return 0;
}

/*
Exception Handling in C++ is a process to handle runtime errors.
 We perform exception handling so the normal flow of the application can be maintained even after runtime errors.


In C++, exception is an event or object which is thrown at runtime.
 All exceptions are derived from std::exception class. It is a runtime error which can be handled.
  If we don't handle the exception, it prints exception message and terminates the program.
*/

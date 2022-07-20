#include<iostream>
// #include <cstdio>
using namespace std;

int main(){
    char c,str[25];
    cout<<"Enter a character: ";
    cin.get(c);

    cout<<"Enter a string: ";
    cin.get(str,5);
    //gets(str);

    cout<<"\nThe entered character is: ";
    cout.put(c);

    cout<<"The entered string is: ";
    cout<<str;
    //puts(str);

    return 0;
}

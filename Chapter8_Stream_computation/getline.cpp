// getline.cpp
// example of function getline()

#include <iostream>
using namespace std;

const int MAX=50;
char str1[MAX];
char str2[MAX];

int main()
{
cout << "enter a string terminated by newline :"<<endl;
cin.getline(str1,MAX);
cout << "enter a multiline string terminated by $ :"<<endl;
cin.getline(str2,MAX, '$');
cout<<"String you entered are:"<<endl;
cout << "String1 : "<<str1<<endl;
cout<<"String2:"<<str2<<endl;

return 0;
}
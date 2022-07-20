// c program to demonstrate cin.get()

#include <iostream>
using namespace std;
int main()
{
    char name [100];
     cin.get(name, 20); // PRINTS UNTILL 20 CHARS
    // cin>>name; // PRINTS UNTIL WHITESOACE IS RECORDED
    cout<<name;

return 0;
}
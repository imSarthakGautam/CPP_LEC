#include <iostream>
using namespace std;
class Animal {
public :
void eat (){
    cout<<"Eating.";
}
};
class Dog : public Animal
{
public :
void bark (){
    cout<<"\nbarking.";
}
};
int main()
{
    Dog d1;
    d1.bark();
    d1.eat();
return 0;
}
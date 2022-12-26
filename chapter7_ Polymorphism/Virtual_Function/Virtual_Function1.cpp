// Pure Virtual Function

#include <iostream>
using namespace std;

class Animal
{
    public :
    
    
    virtual void move()=0; // Pure Virtual Function i.e. one that has no body
    virtual void eat();
    
};

class Dog : public Animal{
    void move() 
    {
        cout << "Dog runs"<<endl;
    }

     void eat() 
    {
        cout << "Dog eats"<<endl;
    }
};


int main()
{
    Animal *an;

    /*
     Animal an;
     Err. cannot declare variable 'an' to be of abstract type 'Animal'
     object of abstract class type "Animal" is not allowed:
    */

    Dog d1;  
    an= &d1; // storing memory location of derived class in a pointer variable
    an -> move();
    an -> eat();

return 0;
}

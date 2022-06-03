#include <iostream>
using namespace std;

class helloworld{
    public :
    // Constructor
    helloworld()
    {
        cout<<"Constructor is called"<<endl;
    }
     // Destructor
    ~helloworld()
    {
        cout<<"Destructor is called"<<endl;
    }
// Member function
void display(){
      cout<<"Hello World"<<endl;
}
};
int main()
{
    // Object created
    helloworld obj;
    // Member function called
    obj.display();
return 0;
}
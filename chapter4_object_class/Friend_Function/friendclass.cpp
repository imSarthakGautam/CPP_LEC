#include <iostream>
using namespace std;

class myclass1{
    friend class myclass2;
    private :
    int x;

    public :
    myclass1(int a)
    {
        x=a;
    }
};

class myclass2{

    public :
    myclass2(myclass1 obj){
       cout<<" the value of x is "<<obj.x<<endl;
    }
};
int main()
{
    myclass1 obj1(5);
    //creating an object of myClass1 and passing the value of "a" as 5
    myclass2 obj2(obj1);
    //creating an object of myClass2 and passing the object of myClass1 as parameter

return 0;
    
}

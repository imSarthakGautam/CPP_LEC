#include <iostream>
using namespace std;

class base
{
protected:
    int a;

public:
    base()
    {
        cout << "Constructor of base is invoked " << endl;
    }

    virtual void display()
    {
        cout << "I'm inside base class" << endl;
    }

    virtual ~base()
    // Here base class's destructor is made virtual 
    // so deleting base class object pointrd by it's pointer invokes base class's destructor
    {
        cout << "Destructor of base is invoked " << endl;
    }
};

class derived : public base
{

public:
    derived()
    {
        cout << "Constructor of derived class is invoked " << endl;
    }

    void display()
    {
        cout << "I'm inside derived class" << endl;
    }
    ~derived()
    {
        cout << "Destructor of derived class  is invoked " << endl;
    }
};

int main()
{
    base *b1;
    b1 = new base;
    b1->display();

    delete b1; // calls base class destructor

    b1 = new derived;
    b1->display();
    delete b1; // calls destructor of base and derived class.

    return 0;
}

/* UNLESS
 virtual ~base()

here destructor of derived class isn't called, i.e Non virtual destructor results in undefined behaviour
*/

// NO object

#include <iostream>
using namespace std;
Class Nameless
{
    public :
    Nameless(){
        cout<<"Constructor is called"<<endl;
    }

    ~Nameless(){
        cout<<"Constructor is called"<<endl;
    }

};
int main()
{
    Nameless();
return 0;
}

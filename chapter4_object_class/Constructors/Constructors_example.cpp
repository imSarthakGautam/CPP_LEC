#include <iostream>
using namespace std;

class counter
{
    private :
    int count;

    public :
    counter() //constructor, has same name name as class name
    {
        count = 0; // constructor initailaizes value of count to 0
    }

    void inc_count() {count ++;}
        int ret_count() {     return count;  }
    };

int main()
{
    counter c1, c2; // count is initaialized to 0 automatically 
    cout<<"\n c1="<<c1.ret_count(); // c1=0
        cout<<"\n c2="<<c2.ret_count(); // c2=0

        c1.inc_count();
        c2.inc_count();
        c2.inc_count();

           cout<<"\n c1="<<c1.ret_count(); // c1=1
        cout<<"\n c2="<<c2.ret_count(); // c2=2

}


    
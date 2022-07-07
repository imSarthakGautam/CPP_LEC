#include <iostream>
using namespace std;

// syntax : template< class template_type, ...>
//          return_type function_name(parameter-List)

template <class T1, class T2>
void testfunc(T1 a, T2 b)
{
    cout <<a<<" "<<b<<endl;
}


int main()
{
    int inum =5;
    float fnum = 7.5;
    testfunc(inum, fnum);
    // Equivalent to testfunc <int, float>(inum, fnum)

    testfunc(20, "Let's make this world a better place");
    // Equivalent to testfunc <int, string>(inum, char)

return 0;
    
}

//  program to demosnstrare parameterized manipulator
#include <iostream>
#include <cstdlib>
using namespace std;

class TestManipulator
{
    private:
    int n;

    public :
    TestManipulator( int num) : n(num){}
    friend ostream& operator <<(ostream&, TestManipulator);
};

 ostream& operator <<(ostream& os, TestManipulator obj);
 {
    for( int i=0; i<obj.n; ++i){
    os <<'\t';
    os <<flush;
return os;
 }
 }

 TestManipulator(n)
 {
  return TestManipulator(n);
  }

int main()
{
int a=1, b=2, c=3, d=4;

cout<<a << tb(1)<< b << tb(2) << tb(3) <<d  <<endl;

return 0;
}
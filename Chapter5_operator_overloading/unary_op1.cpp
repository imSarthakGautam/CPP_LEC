// After overloading an operator it can be applied to an object in the same way  as it is applied to the basic types


#include <iostream>
using namespace std;

class count {
    private :
    int value;

 public :

  count (){
value = 5;
  }

  void operator ++(int){
value ++;
  }

  void operator ++(){
  ++value;
  }

  void display (){
    cout <<"count is "<<value <<endl;
  }
};
int main()
{
    
    count c;
    ++c;
    c.display();
    
    c++;
    c.display();
    
return 0;
}
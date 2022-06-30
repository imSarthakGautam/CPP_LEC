#include <iostream>
using namespace std;

class rough{
    public :
    int a =1;
    };

    int main(){
        rough r;
        cout <<"Primitive type increment"<< r.a++ <<endl;
        cout<<" User defined type increment"<<r++; //error: ++ operator doesn't match these operands because the datatype is not primitive
    return 0;
    }

// Error deetected : no operator "++" matches these operands &
// no 'operator++(int)' declared for postfix '++' [-fpermissive]

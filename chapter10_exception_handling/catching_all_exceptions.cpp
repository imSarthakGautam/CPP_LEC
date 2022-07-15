#include <iostream>
using namespace std;
class Array{
    private :
    int arr[10];

    public :
    class LOWRANGE{};
    class HIGHRANGE{};

int &operator[](int i){
    if (i<0){
        throw LOWRANGE();
    }

     else if (i<0){
        throw HIGHRANGE();
    }
return arr[i];
}

};
int main()
{
    Array a1;
    int index;

    try {
        cout<<"Enter Array index : ";
        cin>>index;
        a1[index];
        cout<<"index"<<index<<"is within range";
    }

    catch(...){
        cout<<"Exceptions out of range";
    }
return 0;
    
}

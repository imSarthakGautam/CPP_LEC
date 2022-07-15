/*
In C++, we use 3 keywords to perform exception handling:
try
catch
throw
*/

#include<iostream>
using namespace std;

int main()
{
    float x = -1;
    cout<<"Before try \n";
    cout<<"---------- \n";
    try{
        cout<<"Inside try \n";
        if (x<0)
        {
            throw x;
            cout<<"After throw \n"; // usually objects are thrown in OOP
        }
        
    }
    catch(int x){
        cout<<"Exception caught. Int type \n";
        // handle int exceptions here
    }
    catch(float x){
        cout<<"Exception caught. Float type \n";
        // handle float exceptions here
    }
    
    cout<<"After catch \n";
    return 0;
}
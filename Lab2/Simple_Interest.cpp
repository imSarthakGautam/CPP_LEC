/*
1.	WAP in c++ to calculate simple interest from given principle time and rate. Set the rate to 15% as default argument when rate is not provided.
[Hint: function prototype float interest(float principle, int time, float rate=0.15)]
*/

#include <iostream>
using namespace std;

class SimpleInterest
{



   public:
        float principle,time,rate;
float interest;


        
 

        void calcInterest(float principle, float rate, float time){
            float interest = (principle*rate*time);
            cout<<"The simple interest is: "<<interest<<endl;
        }
      
       
};

int main(){

float principle,rate,time;
    cout<<"Enter Principle of your transaction"<<endl;
        cin>>principle;

                cout<<"Enter time of your transaction"<<endl;
        cin>>time;

        /* HINT
         int x=-1
        cin.sync()
         cin>>noskipws>>x;
if(x==-1)
{
    // no number was entered, the user just pressed enter
}
else
{
    // the user entered a number
}*/

        cout<<"Enter rate of your transaction Limit (0-1)"<<endl;
        cin.sync();
        cin>>noskipws>>rate;
    
    if(rate==rate)
{
    SimpleInterest tr1;
    tr1.calcInterest(principle,rate=0.15,time);
}
else
{
    // the user entered a number
    SimpleInterest tr1;
    tr1.calcInterest(principle,rate,time);
}
}
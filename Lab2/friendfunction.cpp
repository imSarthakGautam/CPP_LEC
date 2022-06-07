/*
6.	WAP to add 2 private data of two different classes.
[hint: use friend function] 
*/

#include<iostream>
using namespace std;

class sum{
    friend class sum2;
    private:
        float n1,n2,calcsum;
    public:
        void getdata(){
            cout<<"Enter the value of num1: "<<endl;
            cin>>num1;
            cout<<"Enter the value of num2: "<<endl;
            cin>>num2;
        }
};

float mean(Mean m1){
    m1.calculatedmean = (m1.num1+m1.num2)/2;
    return m1.calculatedmean;
}

int main(){
    Mean m1;
    m1.getdata();
    float ans = mean(m1);
    cout<<"The mean is : "<<ans<<endl;
}
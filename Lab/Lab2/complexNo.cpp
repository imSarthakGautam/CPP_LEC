/* 4.	WAP to add two complex numbers passing object as an argument
 and returning resultant complex number.
*/

#include<iostream>
using namespace std;


class complex{
    private:
        double real,img;
    public:
        void number(){
            cout<<"\nEnter the real part of complex number: ";
            cin>>real;
            cout<<" Now enter imaginary part: ";
            cin>>img;
        }
        double realsum(complex c1, complex c2){
            double rSum = c1.real+c2.real;
            return rSum;
        }
        double imgsum(complex c1, complex c2){
            double iSum = c1.img+c2.img;
            return iSum;
        }
};

int main(){
    complex num1,num2,cmplx;
    //input :
    num1.number();
    num2.number();
    //calculation :
    cout<<"The sum is: "<<cmplx.realsum(num1,num2)<<" + i"<<cmplx.imgsum(num1,num2);
}
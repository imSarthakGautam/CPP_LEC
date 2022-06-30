// WAP to compute the area of a traingle

#include<iostream>
#include <cmath> //for sqrt()
using namespace std;

int main(){
    float length1, length2, length3, speri, area;
    cout<<"The length of 1st side is : "<<endl;
    cin>>length1;
    cout<<"The length of 2nd side is : "<<endl;
    cin>>length2;
    cout<<"The length of 3rd side is : "<<endl;
    cin>>length3;
    speri = (length1+length2+length3)/2;
    area = sqrt(speri*(speri-length1)*(speri-length2)*(speri-length3));
    cout<<"The area of your triangle is : "<<area<<endl;
    
}

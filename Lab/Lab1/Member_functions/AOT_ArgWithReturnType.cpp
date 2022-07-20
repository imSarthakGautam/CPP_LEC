/*  WAP to calculate area of a traingle using user defined function 
(i) With arguements and return type */

#include<iostream>
#include<cmath>
using namespace std;

class area {
    public:

float calcArea(float speri , float length1, float length2, float length3) //Arguments
{
    float area = sqrt(speri*(speri-length1)*(speri-length2)*(speri-length3));
    return area; //Return Area
}
};

int main(){
    area a1;
    float speri , length1, length2, length3, area;
     cout<<"The length of 1st side is : "<<endl;
    cin>>length1;
    cout<<"The length of 2nd side is : "<<endl;
    cin>>length2;
    cout<<"The length of 3rd side is : "<<endl;
    cin>>length3;
    speri = (length1+length2+length3)/2;
    cout<<"The area of the triangle is: "<<a1.calcArea(speri , length1, length2, length3)<<endl;
}
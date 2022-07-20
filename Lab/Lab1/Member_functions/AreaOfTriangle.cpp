// WAP to compute the area of a traingle

#include<iostream>
#include <cmath> //for sqrt()
using namespace std;
class area{
    private :
     float length1, length2, length3, speri, area;
 public :

  void input(){

    float length1, length2, length3, speri, area;
    cout<<"The length of 1st side is : "<<endl;
    cin>>length1;
    cout<<"The length of 2nd side is : "<<endl;
    cin>>length2;
    cout<<"The length of 3rd side is : "<<endl;
    cin>>length3;
}
    
    void calcArea (){
    speri = (length1+length2+length3)/2;

    area = sqrt(speri*(speri-length1)*(speri-length2)*(speri-length3));
    cout<<"The area of your triangle is : "<<area<<endl;
}};
int main(){
    area a1;
    a1.input();
    a1.calcArea();
}
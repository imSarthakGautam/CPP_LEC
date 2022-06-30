//WAP to calculate area of triangle.

#include <iostream>

using namespace std;

int main(){
    int height ,base;
    float area;
    cout<<"Enter the height of triangle: ";
    cin>>height;
    cout<<"Enter the base of triangle: ";
    cin>>base;  
    area = 0.5*base*height;
    cout<<"The area of the given triangle is : "<< area;
    return 0;
    
}

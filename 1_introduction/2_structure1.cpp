
//q. WAP to read the record of student's name, address and roll number in C++. Also display them using structure

#include <iostream>

using namespace std;

struct student
{
    char name[10];
    char address[15];
    char roll[15];
}student;


int main(){
    cout<<"Enter your name: ";
    cin>>student.name;
    cout<<"Enter your address: ";
    cin>>student.address;
    cout<<"Enter your Roll No : ";
    cin>>student.roll;
    cout<<"Name: "<<student.name;
    cout<<"\n Address: "<<student.address;
    cout<<"\n Roll No: "<<student.roll;
    
    return 0;
}


/*
2.	WAP to define the class in c++ as shown in the class diagram
Student

name
roll
address 
percentage

input()
display()

-input(): to input initial values 
-display(): to display the record of students who passed 
NB: 45% is pass percentage

*/

#include <iostream>
using namespace std;

class student{
    private:
        string name,roll,address;
        float percent;
    public:
        void input(){
            cout<<"\nEnter the name of student : ";
            cin>>name;
            cout<<"Enter the roll no of student : ";
            cin>>roll;
            cout<<"Enter the address of student : ";
            cin>>address;
            cout<<"Enter the percentage of student : ";
            cin>>percent;
            cout<<"\n";

        }

        void display(){
             cout<<"----STUDENT'S PROFILE---- "<<endl;
            cout<<"Student's Name = "<<name<<endl;
            cout<<"Student's Roll No = "<<roll<<endl;
            cout<<"Student's Address = "<<address<<endl;
            if (percent>45){
                cout<<"Student's Result = Pass"<<endl;
            }
            else{
                 cout<<"Student's Result = Fail"<<endl;
            }
        }
};

int main(){
    student stdnt1;
    stdnt1.input();
    stdnt1.display();
}

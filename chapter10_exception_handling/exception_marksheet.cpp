//  Wap to read name roll no and marks that catches multiple exception using exception class 
// if roll no is negative and  marks is greater than full marks.

#include <iostream>
using namespace std;


   
class Student
{
    public :

    string name;
    int roll;
    int marks;
     class rollerr{}; //exception classes
     class markserr{};
      

    void set(){
        cout<<"Enter Name ";
        cin>>name;
         cout<<"Enter ROll no ";
        cin>>roll;

        if (roll<0){
                throw rollerr();
            }
            

        cout<<"Enter marks";
        cin>>marks;

          if (marks>100){
                throw markserr();
            }
            

    }
      void display()
      {
        cout<<"---STUDENTS DETAILS---"<<endl;
        cout<<" Name : "<<name<<endl;
         cout<<" Roll no :"<<roll<<endl;
         cout<<" Marks : "<<marks<<endl;
    }
/*
    Student(){

        /
    
            if (roll<0){
                throw rollerr();
            }
        
            if (marks>100){
                throw markserr();
            }
        
    }
    */


};

int main()
{
    Student s;
    
    try 
    {
    s.set();
    s.display();
    }


catch(Student:: rollerr){
   cout<<"ERR: Roll no is negative";
}

catch(Student:: markserr)
{
    cout<<"ERR: MARKS GREATER THAN 100";
    }

return 0;
}
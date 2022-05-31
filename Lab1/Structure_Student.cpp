 /*WAP to read the record of a student(name, address, roll) 
 & display the record using structures.
*/

 #include<iostream>
using namespace std;

struct student
{
    string name;
    string roll;
    string address;
};

int main(){
    student stdnt;
    cout<<"---Enter the details of Student here----: "<<endl;
    cout<<"\nName of Student: ";
    cin>>stdnt.name;
    cout<<"Student's Roll no : ";
    cin>>stdnt.roll;
    cout<<"Student's Address: ";
    cin>>stdnt.address;
    cout<<"\n";
    
    cout<<"----STUDENT'S PROFILE---- "<<endl;
    cout<<"Student's Name = "<<stdnt.name<<endl;
    cout<<"Student's Roll No = "<<stdnt.roll<<endl;
    cout<<"Student's Address = "<<stdnt.address<<endl;
     cout<<"\n";

    return 0;
}
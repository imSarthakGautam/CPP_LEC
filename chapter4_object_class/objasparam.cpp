
#include <iostream>
using namespace std;

class student{
    public:
    int marks;

    student( int m)
    {
        marks = m;
    }
};

int displayavg( student n, student m)
{
int avg = (n.marks +m.marks)/2;
cout<<"the average marks is"<<avg<<endl;
}


int main()
{
student n(50),m(60);
displayavg(n,m);
return 0;
} 

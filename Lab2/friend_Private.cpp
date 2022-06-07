/*
6.	WAP to add 2 private data of two different classes.
[hint: use friend function] 
*/

#include<iostream>
using namespace std;

class c2;
class c1
{
    friend float add(c1,c2);

    private:
    double value1;

    public:
    void getData()
    {
        cout<<"Enter 1st value :";
        cin>>value1;
    }
};

class c2
{
    friend float add(c1,c2);
    private:
    double value2;

    public:
    void getData()
    {
        cout<<"Enter 2nd value :";
        cin>>value2;
    }
};

float add(c1 d1,c2 d2)
{
    float add;
    add= d1.value1 + d2.value2;
    return add;
}

int main()
{
    c1 d1;
    c2 d2;
    d1.getData();
    d2.getData();
    cout<<"The added value is "<<add(d1,d2);
    return 0;
}
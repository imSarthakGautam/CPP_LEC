#include <iostream>
using namespace std;

class Account 
{
    public:
    float salary=50000;
};

class Programmer : public Account
{
    public:
    float bonus=15000;
};
int main()
{
    Programmer p1;
    cout<<"The salary is "<<p1.salary<<endl;
    cout<<"The bonus is "<<p1.bonus<<endl;
    cout<<"The earning is "<<p1.salary +p1.bonus<<endl;


return 0;
}

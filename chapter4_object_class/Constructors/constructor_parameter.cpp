#include<iostream>
using namespace std;

class construct{
    private:
        int a,b;
    public:
        construct(int x,int y) //constructor with parameter
        {
            a=x;
            b=y;
        }

        int calcsum(){
            return a+b;
        }
};

int main(){
    construct alpha(7,7);
    cout<<"The sum of given parameters is : "<<alpha.calcsum()<<endl;
}
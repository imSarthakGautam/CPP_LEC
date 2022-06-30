#include<iostream>
using namespace std;

class count{
    private:
        int value;
    public:
        count(){
            value = -5;
        }

        void operator ++(int){
            ++value;
        }

        void display(){
            cout<<"The value of 'value' is: "<<value<<endl;
        }
};

int main(){
    count c;
    c.display();
    c++;
    c.display();

    return 0;
}
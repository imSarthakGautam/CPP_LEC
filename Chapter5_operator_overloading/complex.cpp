#include <iostream>
using namespace std;

class complex {

    private :
    int real;
    int img;

    public :
    complex(){
        real =0;
        img= 0;
    }

void input()
{
cout <<"ENter real part"<<endl;
cin>>real;
cout <<"ENter imaginary part"<<endl;
cin>>img;

}

complex operator +(complex c2){
    complex temp;
    temp.real = real + c2.real;
    temp.img = img + c2.img;

    return temp;
}

void display(){
    cout << " the output is "<< real <<" + i"<<img<<endl;

}

};

int main()
{
    complex c1, c2, result;
    c1.input();
    c2.input();
    result = c2+c1;
    result.display();

return 0;
}

//  Assignment : overload unary operator with non member function 
//  overload binary opertaor with non member function

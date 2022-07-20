// types of polymorphism : Function overloading and operator overloading
#include <iostream>
using namespace std;

class complex {

    private :
    float real;
    float img;

    public :
    

void input(int rl, int im)
{
real=rl;
img=im;

}

void input(int rl) // Function overloading
{
real=rl;

}

complex add(complex c1, complex c2){
    complex temp;
    temp.real = c1.real + c2.real; // Type 1 use of "+"" operator
    temp.img = c1.img + c2.img;
    return temp;
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

void display(complex c){
    cout << " the output is "<< c.real <<" + i"<<c.img<<endl;

}
};

int main()
{
    complex c1, c2, c3,c4;
    c1.input(1,2);
    c2.input(3);
    c3.add(c1, c2);
    c4.display(c3.add(c1,c2));
    //c4=c3.add(c1,c2);
    //c4.display(c3);
    cout<<"by operator overloading"<<endl;
    complex result;
    result = c2+c1; // Type 2 use of "+ operator" : on user defined data type i.e operator overloading
   result.display();

return 0;
}



#include <iostream>
using namespace std;

class Shape
{
    protected :
    int width,length;

    public :
    Shape(int a=0, int b=0)
    {
        width = a;
        length = b;
    }

void virtual Area()
{
cout<<"The area of given shape is : "<<endl;

}
};

class Triangle : public Shape
{
    public :
    Triangle (int a, int b)
{
    width = a;
    length = b;
}

void Area()
{
cout<<"The area of given triangle is : "<< (width*length)/2 <<endl;
}
};

class Rectangle : public Shape
{
    public :
    Rectangle (int a, int b)
{
    width = a;
    length = b;
}

void Area()
{
cout<<"The area of given rectangle is : "<< (width*length) <<endl;
}
};






int main()
{

    Shape *s;  //base class's pointer
    Shape sh(20,30);
    Triangle tr(10,15);
    Rectangle rt(15,20);

    s=&sh;
    s-> Area();

    s=&tr;
    s-> Area();

    s=&rt;
    s-> Area();


return 0;
}
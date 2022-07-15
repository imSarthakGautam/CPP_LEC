/*
5. Create a base class called shape. Use this class to store two double type values that could be
used to compute the area of figures. Derive two specific classes called triangle and rectangle
from the base shape. Add to the base class, a member function get_data() to initialize base class
data members and another member function display_area() to compute and display the area of
figures. Make display_area() as virtual function and redefine this function in the derived class to
suit their requirements.
*/

#include <iostream>
using namespace std;

class Shape
{
protected:
    double width, length;

public:
    void get_data()
    {
        width = 0;
        length = 0;
    }

    void virtual display_area()
    {
        cout << "The area of shape ..... " << endl;
    }
};

class Triangle : public Shape
{
public:
    Triangle(int a, int b)
    {
        width = a;
        length = b;
    }

    void display_area()
    {
        cout << "Area of triangle is " << (0.5 * width * length) << endl;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int a, int b)
    {
        width = a;
        length = b;
    }

    void display_area()    
    {
        cout << "Area of rectangle is " << (width * length) << endl;
        
    }
};

int main()
{
    Shape sh;
    sh.get_data();
    Triangle t(5, 10);
    Rectangle r(10, 20);

    t.display_area();
    r.display_area();

    return 0;
}

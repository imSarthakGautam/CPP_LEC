// WAP TO calculate area of floor, 4 walls and volume of a room

#include <iostream>
using namespace std;

class room{
    public:
    int length;
    int breadth;
    int height;

    // double calcArea();
    // double calcVolume();



 double calcArea()
 {
return (length*breadth);
 }

 double calcVolume()
 {
return (length*breadth*height);
 }



double calcArea4walls()
{
return (length+breadth)*2*height;
}
};




int main ()
{
    room room1,room2;
    room1.length= 25;
    room1.breadth =15;
    room1.height = 20;

    room1.calcArea();
    room1.calcVolume();
    room1.calcArea4walls();

    cout<<"Area of floor or cieling of room is :"<<room1.calcArea()<<endl;
    cout<<"Volume of room is :"<<room1.calcVolume()<<endl;
    cout<<"Volume of room is :"<<room1.calcArea4walls()<<endl;
}

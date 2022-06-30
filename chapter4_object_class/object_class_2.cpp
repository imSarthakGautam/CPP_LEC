// PRIVATE-PUBLIC ERROR !!! WAP TO calculate area and volume of a room

#include <iostream>
using namespace std;



class room {

    public :

    int length;
    int breadth;
    int height;

    // double calcArea();
    // double calcVolume();

public :
void setvalues ( int len, int bdth, int hth)
{
length=len;
breadth=bdth;
height=hth;
}

 double calcArea()
 {
return (length*breadth);
 }

double calcVolume()
{
return(length*breadth*height);
}
};


int main ()
{
    room room1,room2;

    room1.setvalues(25,15,20);
    
    room1.calcArea();
    room1.calcVolume();

    cout<<"Area of room is :"<<room1.calcArea()<<endl;
    cout<<"Volume of room is :"<<room1.calcVolume()<<endl;
}

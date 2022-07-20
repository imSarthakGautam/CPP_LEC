/*
Program to find distance between two points represented in feet and inches using OOP
concept
*/

#include <iostream>
using namespace std;

class Distance
{
private:
int feet, inches;

public:
void input()
{
cout<<"Enter the distance of point in feet : ";
cin >> feet;

cout<<"Enter the distance of point in inches : ";
cin >> inches;
}

void calculate(Distance, Distance);
void output()
{
cout << feet <<" ft \n" << inches << " inch(es)" << endl;
}
};


void Distance::calculate(Distance d1, Distance d2)
{
d1.inches = d1.feet * 12 + d1.inches;
d2.inches = d2.feet * 12 + d2.inches;
inches = (d1.inches>d2.inches ? (d1.inches-d2.inches):(d2.inches-d1.inches));
feet = inches / 12;
inches %= 12;
}
/*
void Distance::calculate(Distance d1, Distance d2){
int a = d1.feet * 12 + d1.inches;
int b = d2.feet * 12 + d2.inches;
int c = (a>b ? (a-b):(b-a));
inches = c % 12;
feet = c / 12;
}
*/
int main()
{
Distance dist1, dist2, dist_diff;
dist1.input();
dist2.input();
dist_diff.calculate(dist1, dist2);
cout << "The difference in distance is: ";
dist_diff.output();
return 0;
}
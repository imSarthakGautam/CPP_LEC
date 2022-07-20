/*   5.	WAP to create a class Sample with 2 float data members and member functions void getdata()
 to input the values and one friend function float mean(Sample) to calculate and return mean value.
Sample
value1
value2
getdata()
mean(Sample)

*/ 


#include<iostream>
using namespace std;

class Sample
{
    friend float mean(Sample);
    private:
    double value1;
    double value2;

    public:
    void getData()
    {
        cout<<"Enter 1st value :";
        cin>>value1;
        cout<<"Enter 2nd value :";
        cin>>value2;
    }
};

float mean (Sample a)
{
    float mean;
    mean=(a.value1+a.value2)/2;
    return mean;
}

int main()
{
    Sample a1;
    a1.getData();
    cout<<"The mean value is "<<mean(a1);
    return 0;
}

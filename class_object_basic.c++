#include<iostream>
using namespace std;
class car{
    public:
    int carno;
    string carname;
    int mileage;
    void display()
    {
        cout<<" car name is "<<carname<<endl;
        cout<<" car number  is "<<carno<<endl;
        cout<<" mileage  is "<<mileage<<endl;
    }
};
int main()
{
    car c1,c2;
    c1.carname="BMW";
    c1.mileage=20;
    c1.carno=12345;
    c2.carname="volkwagon";
    c2.mileage=50;
    c2.carno=145623;
    c1.display();
    c2.display();
}

#include<iostream>
using namespace std;
class Example{
    public :
    int a;
    int add(Example E)
    {
        this->a=a+E.a;
        return a;
    }
};
int main()
{
    Example e1,e2;
    e1.a=10;
    e2.a=15;
    cout<<e1.add(e2);
    cout<<e1.a;

}
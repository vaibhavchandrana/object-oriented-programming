#include<iostream>
using namespace std;
class Example{
    public :
    int a;
    Example add(Example E)
    {
        Example f;
        f.a=a+E.a;
        return f;
    }
};
int main()
{
    Example e1,e2,e3;
    e1.a=10;
    e2.a=15;
    e3=e1.add(e2);
    cout<<e3.a;

}
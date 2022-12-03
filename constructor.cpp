#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    Student()  //default
    {
        name="vaibhav";
        roll =1223;
    }
    Student(string name,int r)  //user defined
    {
        this->name=name;
        roll=r;
    }
    Student(const Student & s )  // copy constructor
    {
        this->name=s.name;
        roll=s.roll;
    }
    void display()
    {
        cout<<name <<" and "<<roll;
    }
};
int main()
{
    Student s1;
    s1.display();
    Student s2("vfg",12);
    s2.display();
    Student s3(s2); //copy
    Student s4=s2;  //copy
    s3.display();
    s4.display();
}
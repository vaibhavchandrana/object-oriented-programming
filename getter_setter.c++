#include<iostream>
using namespace std;
class Student{
    string name;
    int roll;
    int phoneno;
    string course;
    string city;
    public:
    void setName(string name,string city,int roll,int phone)
    {
        bool flag=false;
        for(int i=0;i<name.size();i++)
        {
            if(name[i]<='z' && name[i]>='a')
            {
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag)
        {
        this->name=name;
        this->city=city;
        this->phoneno=phone;
        this->roll=roll;
        }
        else{
            cout<<"wrong input";
        }
    }
    void getName()
    {
        cout<<name<<endl;
        cout<<phoneno<<endl;
        cout<<city<<endl;
        cout<<roll<<endl;
    }
};
int main()
{
   Student s1;
   //s1.name="hello"; because it is private
   s1.setName("vaiibhavrana","amroha",901274,2013);
   s1.getName();
}
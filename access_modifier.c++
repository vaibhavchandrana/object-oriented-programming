#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    private:
    int rollno;
    protected:
    string course;
    int sem;
    void display()
    {
        cout<<"NAme is "<<name<<endl;
        cout<<"roll no is "<<rollno<<endl;
        cout<<"Course is "<<course<<endl;
        cout<<"Sem is "<<sem<<endl;
    }
};
int main()
{
    Student s1;
    s1.name="vaibhav";
    //s1.rollno=59;
    //s1.course="Btech";
    //s1.sem=7;
    //s1.display();
}
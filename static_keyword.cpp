#include<iostream>
using namespace std;
class Student{
    string name;
    int roll;
    public:
    static string university;
    static void setCourse(string c)
    {
    
        university=c;
       
    }
      void setDetail(string name,int roll)
      {
         this->name=name;
         this->roll=roll;
      }
      void getDetails()
      {
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<university<<endl;
    }
};
string Student::university="graphic era";  
int main()
{
  Student s1,s2,s3;
   s1.setDetail("vaibhav",1212);
   s2.setDetail("piyul",1112);
   s3.setDetail("mukul",1234);
   Student::setCourse("upes");
   cout<<s1.university;
   s1.getDetails();
   s2.getDetails();
   s3.getDetails();
}
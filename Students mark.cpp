#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    char name[20];
    int marks[6];
    float mark;
    float total_Mark();
public:
    void input_Marks();
    void displaymarks();
};
void student::input_Marks()
{
    cout<<"Enter the name:" ;
    cin>>name;
    for(int j=0; j<=5; j++)
    {
        if(j==0)
        {
            cout<<"Enter Mid term Marks:" ;
        }
        if(j==1)
        {
            cout<<"Enter Semester Final Marks:";
        }
        if(j==2)
        {
            cout<<"Enter Assignment Marks:";
        }
        if(j==3)
        {
            cout<<"Enter Class test Marks:";
        }
        if(j==4)
        {
            cout<<"Enter Quiz test Marks:";
        }
        if(j==5)
        {
            cout<<"Enter the marks for Attendance:";
        }
        cin>>marks[j];
    }
}
float student::total_Mark()
{
    int mark=0;
    for(int i=0; i<=5; i++)
    {
        mark=mark+marks[i];
    }
    return mark;
}
void student::displaymarks()
{
    cout<<"Do you want to give him/her Bonus Mark? Enter Y Or N"<<endl;
    char ch;
    cin>>ch;
    if(ch=='Y' ||ch=='y')
    {
        cout<<"Please enter,how much marks do you want to give?:";
        int b;
        cin>>b;
        cout<<name<<"'s Total mark With Bonus:"<<total_Mark()+b<<endl;
    }
    else
    {
        cout<<name<<"'s Total mark:"<<total_Mark()<<endl;

        }}




            int main(){
            student s1,s2,s3,s4,s5;
            s1.input_Marks();
            s1.displaymarks();
            s2.input_Marks();
            s2.displaymarks();

            return 0;
        }

#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    private:
    char name[30],branch[50];
    int age[50],sem;
    public:
    void getdata();
    void putdata();
};
void student::getdata()
{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Age:";
    cin>>age[50];
    cout<<"Enter Branch:";
    cin>>branch[5];
    cout<<"Enter Sem.:";
    cin>>sem;
}
void student:: putdata()
{
	cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Branch:"<<branch<<endl;
    cout<<"Sem.:"<<sem<<endl;
}
int main()
{
    student obj[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Details of Student"<<i+1<<endl;
        obj[i].getdata();
    }
    cout<<"Details of student"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"student"<<i+1<<endl;
        obj[i].putdata();
    }
    return 0;
}

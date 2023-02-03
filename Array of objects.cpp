#include<iostream>
#include<conio.h>
using namespace std;
class details
{
    private:
    char name[30];
    int age;
    public:
    void getdata();
    void putdata();
};
void details::getdata()
{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Age:";
    cin>>age;
}
void details :: putdata()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
}
int main()
{
    details obj[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Details of Manager"<<i+1<<endl;
        obj[i].getdata();
    }
    cout<<"Details of Employee"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Manager"<<i+1<<endl;
        obj[i].putdata();
    }
    return 0;
}

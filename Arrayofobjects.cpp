#include<bits/stdc++.h>
using namespace std;
class employe
{
	private:
	int age;
	char name;
	public:
	void getdata(int x,char y);
	void putdata();
};
void employe::getdata(int x,char y)
{
	age=x;
	name=y;
}
void employe::putdata(void)
{
    for(int i=0;i<3;i++)
    {
        cout<<"Details of Employe"<<endl;
        cout<<"Manager"i;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
}
int main()
{
    int a[3];
    char b[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter Details of manager"<<"i"<<endl;
        cout<<"Enter Name:"
        cin>>a[i];
        cout<<"Enter age:"
        cin>>b[i];
        employe.getdata(int x,char y)
        employe.putdata(void)
    }
     return 0;
}
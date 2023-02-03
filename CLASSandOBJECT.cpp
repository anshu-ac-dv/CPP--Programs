
#include<iostream>
#include<conio.h>
using namespace std;
class person
{
	private:
	char name[30];
	int age;
	public:
	void getdata(void);
	void putdata(void);
};
void person :: getdata(void)
{
	cout<<"Enter name:"<<endl;
	cin>>name;
	cout<<"Enter age:"<<endl;
	cin>>age;
}
void person :: putdata(void)
{
	cout<<"Name:"<<name<<endl;
	cout<<"Age:"<<age;
}
int main()
{
	person p;
	p.getdata();
	p.putdata();
	return 0;
}

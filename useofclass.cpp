#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
	void getdata(void);
	void putdata(void);
};
void person::getdata(void)
{
	cout<<"Enter name:"<<endl;
	cin>>name;
	cout<<"Enter Age:"<<endl;
	cin>>age;
}
void person::putdata(void)
{
	cout<<"NAME:"<<name<<endl;
	cout<<"AGE:"<<age<<endl;
}
int main()
{
	person p;
	p.getdata();
	p.putdata();
	return 0;
}

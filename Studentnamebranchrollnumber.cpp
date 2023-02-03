#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
	int roll_number;
	char name,branch;
	public:
	void getdata(int x,char y,char z);
	void putdata();
};
void student::getdata(int x,char y,char z)
{
	roll_number=x;
	name=y;
	branch=z;
}
void student::putdata(void)
{
	cout<<"Name of student:"<<name<<endl;
	cout<<"Roll number:"<<roll_number<<endl;
	cout<<"Branch:"<<branch<<endl;
}
int main()
{
	student details;
	int a;
	char b,c;
	cout<<"Enter student name:"<<endl;
	cin>>a;
	cout<<"Enter student roll number:"<<endl;
	cin>>b;
	cout<<"Enter name of branch:"<<endl;
	cin>>c;
	details.getdata(a,b,c);
	details.putdata();
	return 0;
}

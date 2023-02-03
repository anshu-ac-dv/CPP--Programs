#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
	public:
		void get_no();
		void put_no();
};
void student::get_no()
{
	int a;
	cout<<"Enter roll no:";
	cin>>a;
	roll_no=a;
}
void student::put_no()
{
	cout<<"Roll number:"<<roll_no<<endl;
}
class test: public student
{
	protected:
		float sub1;
		float sub2;
	public:
		void get_marks();
		void put_marks();
};
void test::get_marks()
{
	float x,y;
	cout<<"Enter the marks of subject 1:";
	cin>>x;
	sub1=x;
	cout<<"Enter the marks of subject 2:";
	cin>>y;
	sub2=y;
}
void test::put_marks()
{
	cout<<"Marks in sub1="<<sub1<<endl;
	cout<<"Marks in sub2="<<sub2<<endl;
}
class result: public test
{
	float total;
	public:
		void display();
};
void result::display()
{
	total=sub1+sub2;
	put_no();
	put_marks();
	cout<<"Total="<<total<<endl;
}
int main()
{
	result student1;
	student1.get_no();
	student1.get_marks();
	student1.display();
	return 0;
}

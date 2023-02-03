#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
	public:
		void get_no(int);
		void put_no();
};
void student::get_no(int a)
{
	
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
		void get_marks(float,float);
		void put_marks();
};
void test::get_marks(float x,float y)
{
	
	sub1=x;
	
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
	int a,x,y;
	result student1;
	cout<<"Enter roll no:";
	cin>>a;
	student1.get_no(a);
	cout<<"Enter the marks of subject 1:";
	cin>>x;
	cout<<"Enter the marks of subject 2:";
	cin>>y;
	student1.get_marks(x,y);
	student1.display();
	return 0;
}

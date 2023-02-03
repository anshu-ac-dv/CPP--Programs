#include<iostream>
using namespace std;
class student
{
	private:
		int marks;
		int age;
	public:
		void input(int marks, int age);
		void output();
};
void student :: input(int marks,int age)
{
	this-> marks=marks;
	this-> age=age;
}
void student :: output()
{
	cout<<"Roll of stdent:"<<marks<<endl;
	cout<<"Marks of Student:"<<age<<endl;
}
int main()
{
	student obj;
	int m;
	int n;
	cout<<"Enter Roll: "<<endl;
	cin>>m;
	cout<<"Enter marks:"<<endl;
	cin>>n;
	obj.input(m,n);
	obj.output();
	return 0;
}

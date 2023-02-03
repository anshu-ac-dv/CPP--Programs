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
void student :: input(int m,int n)
{
	marks=m;
	age=n;
}
void student :: output()
{
	cout<<"MArks of stdent:"<<marks<<endl;
	cout<<"Age of Student:"<<age<<endl;
}
int main()
{
	student obj;
	int m;
	int n;
	cout<<"Enter Name: "<<endl;
	cin>>m;
	cout<<"Enter marks:"<<endl;
	cin>>n;
	obj.input(m,n);
	obj.output();
	return 0;
}

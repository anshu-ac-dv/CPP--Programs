#include<iostream>
using namespace std;
class student
{
	private:
		char name[20];
		int age;
	public:
		void getdata(char name[20], int age);
		void putdata();
};
void student :: input(char m[20],int n)
{
	name[20]=m[20];
	age=n;
}
void student :: output()
{
	cout<<"Name of STudent:"<<name<<endl;
	cout<<"Age of Student:"<<age<<endl;
}
int main()
{
	student obj;
	obj.input(Anshu,18);
	obj.output();
	getch();
	return 0;
}

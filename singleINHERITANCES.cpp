#include<iostream>
using namespace std;
class B
{
	private:
		int a;
	public:
		int b;
		void set_ab();
		void get_a();
		void show_a();
};
class D : public B
{
	private:
		int c;
	public:
		mul();
		void display();
};
void B :: set_ab()
{
	a=5;
	b=10;
}
void B :: get_a();
{
	return a;
}
void B :: show_a()
{
	cout<<"a="<<a<<endl;
}
void D :: mul()
{
	c=b*get_a();
}
void D :: display()
{
	cout<<"a="<<get_a()<<end;
	cout<<"b="<<b<<endl;
	cout<<"a*b="<<mul()<<endl;
}
int main()
{
	D d;
	d.set_ab();
	d.mul();
	d.show_a();
	d.display();
}

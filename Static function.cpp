#include<iostream>
#include<conio.h>
using namespace std;
class test
{
	private:
	static int code;
	static int count;
	public:
	void setcode(int a);
	void showcode(void);
	static void showcount(void);
};
void test::setcode(int a)
{
	code=a;
}
void test::showcode(void)
{
	cout<<"Number:"<<code<<endl;
}
void test::showcount()
{
	cout<<"COUNT="<<count;
	cout<<"COUNT="<<code;	
}
int test::count;
int main()
{
	test obj;
	int a,x;
	cout<<"Enter any number:";
	cin>>x;
	obj.setcode(x);
	obj.showcode();
	test::showcount();
	return 0;
}


#include<iostream>
#include<conio.h>
using namespace std;
class cse
{
	private:
	static int number;
	int number1;
	public:
	void getnumber(int a);
	void putnumber();
};
void cse::getnumber(int a)
{
		number=a;
		number1++;
}
void cse::putnumber()
{
	cout<<"Number:"<<number<<endl;
	cout<<"Number1:"<<number1<<endl;
}
int cse::number;
int main()
{
	cse obj;
	int a,x;
	cout<<"Enter any number:";
	cin>>x;
	obj.getnumber(x);
	obj.putnumber();
	return 0;
}

#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
	public:
		void getdata(int a, int b);
		void putdata();
		void operator-();
};
void A :: getdata(int a, int b)
{
	x=a;
	y=b;
}
void A :: putdata()
{
	cout<<"X="<<x<<endl;
	cout<<"Y="<<y<<endl;
}
void A :: operator-()
{
	x=-x;
	y=-y;
}
int main()
{
	A obj;
	obj.getdata(6,5);
	obj.putdata();
	-obj;
	obj.putdata();
	return 0;
}


#include<iostream>
using namespace std;
class A
{
	private:
		int r,h;
	public:
		void area(int a);
		void area(int x,int y);
};
void A :: area(int a)
{
	r=a;
	int area_circle;
	area_circle=3.14*r*r;
	cout<<"Area of circle:"<<area_circle<<endl;
}
void A :: area(int x, int y)
{
	r=x;
	h=y;
	int area_cylender;
	area_cylender=2*3.14*r*h;
	cout<<"Area of Cylender:"<<area_cylender<<endl;
}
int main()
{
 	A obj2;
	obj2.area(5);
	obj2.area(5,7);
	return 0;
}

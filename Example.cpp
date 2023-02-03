#include<iostream>
using namespace std;
class subject
{
	private:
	int x;	
	public:
	void getdata(int a);
	void putdata(void);
};
void :: getdata(int a)
{
	x=a;
}
void :: putdata(void);
{
	cout"Value="<<x;
}
int main()
{
	subject obj1;
	obj1=10;
	
}

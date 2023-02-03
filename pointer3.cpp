#include<iostream>
using namespace std;
int main()
{
	int a=20,*p=&a;
	cout<<a<<endl;
	cout<<*p<<endl;
	cout<<p<<endl;
	cout<<&a<<endl;
	cout<<*p+a<<endl;
	cout<<&p<<endl;
	cout<<p+a<<endl;
	return 0;
}

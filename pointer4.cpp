#include<iostream>
using namespace std;
int main()
{
	int a,*p1,**p2;
	p1=&a;
	*p2=&p1;
	cout<<"Enter the value of a="<<endl;
	cin>>a;
	cout<<&p1<<endl;
	cout<<&p2<<endl;
	cout<<"After incrementing the address value:"<<endl;
	p1+=2;
	p2+=2;
	cout<<p1<<endl;
	cout<<p2<<endl;
	return 0;
}

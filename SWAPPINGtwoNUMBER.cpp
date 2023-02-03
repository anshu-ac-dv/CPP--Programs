#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	cout<<"Before swapping"<<endl;
	cout<<"first number="<<a<<endl;
	cout<<"Second number="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
	cout"After  swapping"<<endl;
	cout<<"First nummber="<<a<<endl;
	cout<<"Second nummber="<<b;
	return 0;
}

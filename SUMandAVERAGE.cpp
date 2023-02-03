#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float number1,number2,sum,avg;
	cout<<"Enter first number:";
	cin>>number1;
	cout<<"Enter second number:";
	cin>>number2;
	sum=number1+number2;
	avg=sum/2;
	cout<<"Sum="<<sum<<endl;
	cout<<"Average="<<avg<<endl;
	return 0;
}

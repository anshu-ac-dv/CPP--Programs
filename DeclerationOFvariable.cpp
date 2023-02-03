#include<iostream>
using namespace std;
int main()
{
	float x;
	float sum=0;
	int i;
	cout<<"Enter any integer value:";
	for(i=0;i<5;i++)
	{
		cin>>x;
		sum=sum+x;
	}
	float average;
	average=sum/(i-1);
	cout<<"Avegare="<<average;
	return 0;
}

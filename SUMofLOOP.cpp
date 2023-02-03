#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,i;
	cout<<"Enter positive number to add all number:";
	cin>>n;
	for(i=1;i>=n;i++)
	{
		sum=i+sum;
	}
	cout<<"Sum="<<sum;
	return 0;
}

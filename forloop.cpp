// Input Five Numbers Using for loop in c++
#include<iostream>
using namespace std;
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the five number:"<<endl;
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<"You Entered Value is"<<endl<<a[i]<<endl;
	}
	return 0;
}

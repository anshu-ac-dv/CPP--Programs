#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int student[10];
	int num,i;
	cout<<"Enter array  numbers:"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>student[i];
	}
	cout<<"Enter number which is search"<<endl;
	cin>>num;
	for(i=0;i<10;i++)
	{
		if(num==student[i])
		{
			cout<<"Number is present"<<endl;
			break;
		}
			else if(i==9)
		{
			cout<<"Number is not present"<<endl;
		}
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,t;
	float r,x,y;
	cout<<"Enter amount:";
	cin>>p;
	cout<<"Enter rate:";
	cin>>r;
	cout<<"Enter time(in year):";
	cin>>t;
	x=(p*r*t)/100;
	cout<<"Simple interest="<<x<<endl;
	y=p*(pow((1+r/100),t));
	cout<<"Compound interest="<<y<<endl;
	return 0;
}

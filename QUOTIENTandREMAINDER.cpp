#include<iostream>
using namespace std;
int main()
{
	int divident, divisor,q,d;
	cout<<"Enter Dividend:";
	cin>>divident;
	cout<<"ENter Divisor:";
	cin>>divisor;
	q=divident/divisor;
	d=(divident)%(divisor);
	cout<<"Quotient:"<<q<<endl;
	cout<<"Remainder:"<<d;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
class addition
{
	int p,q,r,s;
	void input (void)
	{
		cout<<"Enter three numbers:";
		cin>>p>>q>>r;
	}
	void show (void)
	{
		cout<<"Sum="<<add()<<endl;
	}
	int add (void)
	{
		s=p+q+r;
		return (s);
	}
};
int main()
{
	addition x;
	x.add;
	x.input();
	x.show();
	return 0;
}

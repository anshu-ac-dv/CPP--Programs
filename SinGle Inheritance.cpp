

#include<iostream>
using namespace std;
class employe
{
	public:
		float salary=50000;
};
class programmer : public employe
{
	public:
		float bonus=5000;
};
int main()
{
	programmer p;
	cout<<"Salary="<<p.salary<<endl;
	cout<<"Bonous="<<p.bonus<<endl;
	return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;
class time
{
	private:
	int hours;
	int minutes;
	public:
	void gettime(int h,int m);
	void puttime();
	void sum(time,time);
};
void time :: gettime (int h, int m)
{
	hours=h;
	minutes=m;
}
void time :: puttime()
{
	cout<<hours<<"hours,"<<minutes<<"Minutes"<<endl;
}
void time :: sum(time x,time y)
{
	
	minutes=x.minutes+y.minutes;
	hours=minutes/60;
	minutes=minutes%60;
	hours=hours+x.hours+y.hours;
}
int main()
{
	time t1,t2,t3;
	t1.gettime(3,40);
	t2.gettime(2,30);
	t1.puttime();
	t2.puttime();
	t3.sum(t1,t2);
	t3.puttime();
	return 0;
}

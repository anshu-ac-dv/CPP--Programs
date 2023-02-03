#include<iostream>
#include<conio.h>
using namespace std;
class item
{
     private:
	 int number;
	 float price;
	 public:
	 void getdata(int x, float y);
	 void putdata(void);	 	
};
void item::getdata(int x, float y)
{
	number=x;
	price=y;
}
void item::putdata()
{
	cout<<"Enter Item Number1:"<<number<<endl;
	cout<<"Enter Item Price1:"<<price<<endl;
	cout<<"Enter Item Number2:"<<number<<endl;
	cout<<"Enter Item Price2:"<<price<<endl;
}
int main()
{
	item obj1,obj2;
    int a,c;
	float b,d;
	cout<<"Enter item number:";
	cin>>a;
	cout<<"Enter item price";
	cin>>b;
	cout<<"Enter item number:";
	cin>>c;
	cout<<"Enter item price";
	cin>>d;
	obj1.getdata(a,b);
	obj1.putdata();	
	return 0;
}

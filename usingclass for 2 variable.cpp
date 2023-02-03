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
void item::putdata(void)
{
	
		cout<<"Item Number:"<<number<<endl;
		cout<<"Item Price:"<<price<<endl;

}
int main()
{
	item obj[2];
	int a;
	float b;
	for(int i=0;i<2;i++)
    {
		cout<<"Enter number for item"<<i+1<<":";
		cin>>a;
		cout<<"Enter price for item"<<i+1<<":";
		cin>>b;
		obj[i].getdata(a,b);
	}
	for(int j=0;j<2;j++)
	{
	    cout<<"Details for item"<<j+1<<endl;
		obj[j].putdata();	 
	}
	return 0;
}


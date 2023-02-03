#include<iostream>
#include<conio.h>
using namespace std;
class basej
{
 	  public:
	   void display()
	   {
	   	    cout<<"Display Base"<<endl;
	   }
	   void show()
	   {
	   	    cout<<"Show Base"<<endl;
       }	
};
class derived : public base
{
	public:
	   void display()
	   {
	   		cout<<"Display Derived"<<endl;
	   }
	   void show()
	   {
            cout<<"Show Derived"<<endl;
	   }
};
int main()
{
	base b;
	derived d;
	base *bptr;
	bptr=&b;
	//derived *dptr;
	bptr->display();
	bptr->show();
	bptr->display();
	bptr->show();
	return 0;
}

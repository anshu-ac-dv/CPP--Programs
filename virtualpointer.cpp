#include<iostream>
#include<conio.h>
using namespace std;
class base
{
 	  public:
	   void display()
	   {
	   	    cout<<"Display Base"<<endl;
	   }
	   virtual void show()
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
	   virtual void show()
	   {
            cout<<"Show Deriverd"<<endl;
	   }
};
int main()
{
   	base b;
	derived d;
	base *bptr;
	bptr=&b;
	derived *dptr;
	dptr=&d;
	bptr->display();
	bptr->show();
	dptr->display();
	dptr->show();
	return 0;
}

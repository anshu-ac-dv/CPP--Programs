#include<iostream>
using namespace std;
class complex
{
	float x;
	float y;
	public:
		complex(){
		}
		complex(float real, float img)
		{
			x=real;
			y=img;
		}
		complex operator+(complex);
		void display(void);
		
};
complex complex :: operator +(complex c)
{
	complex temp;
	temp.x = x + c.x ;
	temp.y = y + c.y;
	return(temp);
	
}
void complex :: display (void)
{
	cout<<x<<"+j"<<y<<"\n";
	
}
int main()
{
	complex c1(2,4), c2(3,6), c3;
	//c1=comple(2.5 ,3.5);
	//c2=complex(1.6,2.7);
	c3=c1.operator+(c2);
	
	cout<<"C1=";c1.display();
	cout<<"C2=";c2.display();
	cout<<"C3=";c3.display();
	return 0;
}

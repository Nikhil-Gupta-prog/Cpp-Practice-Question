#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a,b;
	public:
		A(int=1,int=2);    //parameterized constructor with default value 
		void display();    //normal
};

A::A(int x,int y)
{
	a=x;
	b=y;
}
void A :: display()
{
	cout<<"a="<<a<<"b="<<b;
}
int main()
{
	A a1;        //cons a=1,b=2
	A a2(8);    	 //param cons a=8,b=2(default)
	A a3(9,10);       //param cons a=9,b=10
	a1.display();
   // a2.display();
//	a3.display();
	return 0;
}

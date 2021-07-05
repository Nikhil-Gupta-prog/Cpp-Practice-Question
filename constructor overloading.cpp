#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a,b;
	public:
		A();                    //default
		A(int,int);             //parameterized constructor
		void display();         //normal
};

A::A()                       //default constructor
{
	a=1;
	b=2;
}

A::A(int x,int y)            //parameterized constructor
{
	a=x;
	b=y;
}

void A::display()           //normal
{
	cout<<"a="<<a<<"b="<<b;
 } 
 
 int main()
 {
 	A a1;
 	A a2(5,7);
 	A a3(10,12);
 	
 	a1.display();    //  default cons a=1,b=2
 	a2.display();    //  parameterized cons  a=5,b=7
 	a3.display();    //  parameterized cons  a=10,b=12
 	
 	return 0;
 	
 }

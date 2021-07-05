#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a,b;
	 public:
	 	A(int,int);           //parameterized constructor
	 	void display();       
};

A::A(int x,int y)          //parameterized constructor
{
	a=x;
	b=y;
}
 
 void A::display()
 {
 	cout<<"a="<<a<<"b="<<b;
 }
 
 int main()
 {
 	A a(5,7); 
	// A  a=A(5,7);  
 	a.display();
 	return 0;
 }

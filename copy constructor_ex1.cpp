#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a,b;
	 public:
	 	A(int,int);     
	 	A(A &);            //copy constructor
	 	void display();
};

A::A(int x,int y)
{
	a=x;
	b=y;
}

A::A(A &p)         //copy constructor  // reference of object
{
	a=p.a;
	b=p.b;
}

void A::display()
{
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<"\t";
}

int main()
{
	int x,y;
	cout<<"enter the value"<<endl;
	cin>>x>>y;
	A a(x,y);             //parameterized cons
	A b(a);               //copy cons
	
	a.display();
	b.display();
	return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"constructor of class A"<<endl;
		}
		void f()
		{
			cout<<"function f() in class A"<<endl;
		}
		virtual ~A()=0;
};

A::~A()
{
	cout<<"Destructor of class A"<<endl;
}

class B : public A
{
	public:
		B()
		{
			cout<<"constructor of class B"<<endl;
		}
		~B()
		{
			cout<<"destructor of class B"<<endl;
		}
};

int main()
{
	A *aptr;
	aptr=new B;
	delete aptr;
}

#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout<<"constructor of Base"<<endl;
		}
		~Base()
		{
			cout<<"destructor of base"<<endl;
		}
		 void g()
	 {
	 	
	 	cout<<"function g in base class"<<endl;
	 }
		virtual void f()=0;
};

class Derived : public Base
{
	public:
	 void f()
	 {
	 	cout<<"pure virtual function"<<endl;
	 }	
	 void g()
	 {
	 	Base::g();
	 	cout<<"function g in derived class"<<endl;
	 }
};

int main()
{
   Base *bptr;
   Derived d;
   bptr=&d;
   bptr->g();
}

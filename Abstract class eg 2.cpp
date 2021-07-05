#include<iostream>
#include<conio.h>

using namespace std;
class A
{
	public:
		virtual void f()=0;
		virtual void g()=0;
};

class B :public A
{
	public:
		void f()
		{
			cout<<"pure virtual fun f()"<<endl;
		}
};

class C : public B
{
	public:
		void g()
		{
			cout<<"pure virtual fun g()"<<endl;
		}
};

int main()
{
	C c;
	c.f();
	c.g();
	return 0;
}

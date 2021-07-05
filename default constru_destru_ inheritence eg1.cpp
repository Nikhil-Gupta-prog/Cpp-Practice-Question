#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"constructor of base class\n";
		}
		~Base()
		{
			cout<<"destructor of base class\n";
		}
};
                                                    //doubt
class derived : public Base
{
	public:
		derived()
		{
			cout<<"constructor is called\n";
		}
		~derived()
		{
			cout<<"destructor is called\n";
		}
};

int main()
{
	derived d;
	Base b;
	return 0;
}

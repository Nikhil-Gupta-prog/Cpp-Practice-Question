#include<iostream>
using namespace std;
class A
{
	int a;
	public:		
		A()        //default constructor
	{
		a=10;
		cout<<"a="<<a;
	}
};
int main()
{
	A a;
	return 0;
}

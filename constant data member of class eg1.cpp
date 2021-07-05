#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	const int n;
	 public:
	 	A(int b):n(b){}
	 	
	 	void display()
	 	{
	 		cout<<n;
		 }
};

int main()
{
	A a(5);
	a.display();
	return 0;
}

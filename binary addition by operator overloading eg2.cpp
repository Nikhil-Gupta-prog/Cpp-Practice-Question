#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	int a;
	public:
		void input();
		void display();
		demo operator +(demo d);
};

   void demo::input()
   {
   	cout<<"enter the value of a\t";
   	cin>>a;
   }
   void demo::display()
   {
   	cout<<"sum="<<a;
   }
   demo demo ::operator +(demo d)
   {
   	demo x;
   	x.a=a+d.a;
   	return x;
   }
int main()
{
	demo d1,d2,d3,d4;
	d1.input();
	d2.input();
	d3.input();
	d4=d1+d2+d3;
	d4.display();
	return 0;
}

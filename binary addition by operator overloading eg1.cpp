#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	int a;
	public:
		void input();
		void operator +(demo);     //overloaded
};

   void demo::input()
   {
	cout<<"enter value of a\t";
	cin>>a;
   }
   
  void demo :: operator+(demo d)
  {
	int sum;
	sum=a+d.a;
	cout<<"sum="<<sum;
  }
  int main()
  {
  	demo d1,d2;
  	d1.input();
  	d2.input();
  	d1+d2;                // call operator +()fun same as d1.operator(d2); 
  	return 0;
  }

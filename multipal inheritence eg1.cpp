#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int x;
	 public:
	 	A()
	 	{
	 		cout<<"A is default constructor"<<endl;
	 		x=0;
		}
		A(int x1)
		{
		cout<<"\n\nA is  one parameter constructor"<<endl;
	 		x=x1;	
		}
		void getdata()
		{
			cout<<"enter a no.\t";
			cin>>x;
		}
		void display()
		{
			cout<<x<<endl;
		}
};
class B
{
	int y;
	  public:
	  	B()
	  	{
	  	 cout<<"B is default constructor"<<endl;
		   y=0;	
		}
		B(int y1)
		{
			cout<<"B is one parameter constructor"<<endl;
			y=y1;
		}
		void getdata()
		{
			cout<<"Enter a no.\t";
			cin>>y;
		}
		void display()
		{
			cout<<y<<endl;
		}
};
class C:public A,public B
{
	int z;
	 public:
	 	C():A(),B()       //this order does not decide constructor calling order
	 	{
	 		cout<<"C is default constructor"<<endl;
	 		z=0;
		}
		C(int x1,int y1,int z1):A(x1),B(y1)
		{
			cout<<"C is multipal constructor"<<endl;
			z=z1;
		}
		void getdata()
		{
			A::getdata();
			B::getdata();
			cout<<"Enter a no\t";
			cin>>z;
		}
		void display()
		{
			A::display();
			B::display();
			cout<<z<<endl;
		}
};
	int main()
	{
		C c1;
		c1.getdata();
		c1.display();
		C c2(5,6,7);
		c2.display();
		return 0;
    } 


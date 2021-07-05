#include<iostream>
#include<conio.h>
using namespace std;
class second;
class first
{
	int a;
	friend void add(first,second);
	 public:
	 	void input()
	 	{
	 		cout<<"enter value of a";
	 		cin>>a;
		 }
};

class second 
{
	int b;
	friend void add(first,second);
	  public:
	  	void input()
	  	{
	  		cout<<"enter value of b";
	  		cin>>b;
		}
};

void add(first f1,second s1)
{
	f1.input();
	s1.input();
	int sum=f1.a+s1.b;
	cout<<sum;
}


int main()
{
	first f;
	second s;
	add(f,s);
}

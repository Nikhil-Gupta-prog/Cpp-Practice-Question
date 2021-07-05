#include<iostream>
#include<conio.h>
using namespace std;
class first
{
	int a;
	friend void add();
};
class second
{
	int b;
	friend void add();
};
void add()
{
	first f;
	second s;
	cout<<"enter a\n";
	cin>>f.a;                     // a is private of class first 
	cout<<"enter b\n";
	cin>>s.b;                    // b is private of class second
	int sum=f.a+s.b;
	cout<<sum;
}
  int main()
  {
  	add();
  	return 0;
  }



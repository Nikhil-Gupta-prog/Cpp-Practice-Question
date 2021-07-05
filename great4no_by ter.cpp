#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter the value of a,b,c&d\n";
	cin>>a>>b>>c>>d;
	(a>b)?(a>c)?(a>d)?cout<<"greater is a="<<a:cout<<"greater is d="<<d:\
	(c>d)?cout<<"greater is c="<<c:cout<<"greater is d="<<d:\
	(b>c)?(b>d)?cout<<"greater is b="<<b:cout<<"greater is d="<<d:\
	(c>d)?cout<<"greater is c="<<c:cout<<"greater is d="<<d;
	return 0;
}

#include<iostream>
using namespace std;

template<typename T1,class T2>
T2 div(T1 x,T2 y)
{
	T2 c;
	c=x/y;
	return c;
}

int main()
{
	cout<<div(5,2)<<endl;
	cout<<div(5.0,2.0)<<endl;
	cout<<div<int,float>(5,2)<<endl;
	return 0;
}


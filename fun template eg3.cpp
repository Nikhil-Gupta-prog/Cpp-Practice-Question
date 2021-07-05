#include<iostream>
using namespace std;

template <typename T>
T mod(T x,T y)
{
	T c;
	cout<<"In template fun"<<endl;
	c=x%y;
	return c;
}

int mod (float x,float y)
{
	int c;
	cout<<"In non template fun"<<endl;
	c=int(x)%int(y);
	return c;
}

int main()
{
	cout<<mod(5,2)<<endl;
	cout<<mod(750001,500001)<<endl;
	cout<<mod(5.0f,2.0f)<<endl;
//	cout<<mod(5.0,2.0)<<endl;
	return 0;
}

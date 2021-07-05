#include<iostream>
using namespace std;

int fact(int n);
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;
	cout<<"fact"<<n<<"="<<fact(n);
	return 0;
}
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
	return 1;
}

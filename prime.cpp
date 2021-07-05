#include<iostream>
using namespace std;
int main()
{
	int i,n,f=1;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f=0;
			break;
		}
	}
		if(f==1)
		cout<<"prime no."<<'\n';
		else
		cout<<"not prime no."<<endl;
	return 0;
}

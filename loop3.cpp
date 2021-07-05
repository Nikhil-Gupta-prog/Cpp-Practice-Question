/* *
   ***
   *****
   *******
   ********* */
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

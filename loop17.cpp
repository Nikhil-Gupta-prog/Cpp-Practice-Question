    /*       *
            ***
           *****
          *******
		   *****
		    ***
		     *        */
#include<iostream>
using namespace std;
int main()
{
		int i,j,n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for( i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)         //for(int k=n-1;k>=i;k--)
		{
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(i=n;i>=1;i--)
	{
		for(j=i;j<=n-1;j++)       //for(int k=i;k<=n-1;k++)
		{
			cout<<" ";
		}
		for(j=2*i-1;j>=1;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;

}

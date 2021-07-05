   /*   *
       ***
      *****
     *******
    *********   */
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=n-1;j>=i;j--)         //for(int k=n-1;k>=i;k--)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

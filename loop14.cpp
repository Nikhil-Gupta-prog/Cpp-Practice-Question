   /*        1
            12
           123
          1234
         12345   */
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=n-i;j>=1;j--)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}


/*    A
      AB
      ABC
      ABCD
      ABCDE   */           
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;

	for(char i=1;i<=n;i++)
	{
		for(char j=65;j<=65+i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}

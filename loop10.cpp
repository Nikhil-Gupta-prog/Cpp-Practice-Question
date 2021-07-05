/*   1
     10
     101
     1010
     10101
     101010   */
#include<iostream>
using namespace std;
int main()
{
	int n,k=1;                                     //ERROR
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
        
		for(int j=1;j<=i;j++)
		{
			cout<<k;
			k != k;
		}
		
		cout<<endl;
    }
    return 0;
}

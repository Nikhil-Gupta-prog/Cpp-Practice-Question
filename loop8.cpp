/*  54321
    5432
    543          
    54          
    5     */  
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	
for(i=1;i<=n;i++)  
 // for(i=n;i>=1;i--)
{                     
for(j=n;j>=i;j--)  
 //for(j=i;j<=n;j--)
{
cout<<j;
}
cout<<endl;
}
 return 0;
}

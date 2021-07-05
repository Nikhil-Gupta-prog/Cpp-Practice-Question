  /*  5
      44
      333
      2222
	  11111  */
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the value of n"<<endl;
	cin>>n;  
 for(i=n;i>=1;i--)
  {                     
   for(j=i;j<=n;j++)
   {
    cout<<i;
   }
    cout<<endl;
  }
   return 0;
}

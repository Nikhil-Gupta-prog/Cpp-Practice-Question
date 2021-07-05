  /*   5
       45
       345
       2345
       12345  */
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
    cout<<j;
   }
    cout<<endl;
  }
   return 0;
}

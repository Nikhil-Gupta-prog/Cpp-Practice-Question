#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,t,rem,sum=0,count=0;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	t=n;
	while(n>0)      //371=3^3+7^3+1^3
	{               //1634=1^4+6^4+3^4+4^4
		count++;
		n=n/10;
	}
	n=t;
	while(t!=0)
	{
		rem=t%10;
	 sum=sum+pow(rem,count);
	 	t=t/10;
	  
	}
	if(n==sum)
	cout<<"no. is armstrong"<<endl;
	else
	cout<<"no. is not armstrong";
    return 0;
}


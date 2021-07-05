#include<iostream>
using namespace std;
int main()
{
	int n,i;
	bool isprime=true;
	cout<<"enter a positive integer"<<endl;
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			isprime=false;
			break;               // break statement is used inside a loop,to directly come-out the loop 
		}
	}
      if(isprime)
      cout<<"prime\n";
	  else
	  cout<<"no. is not prime";
	
	return 0;
}

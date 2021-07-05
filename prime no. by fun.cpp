   //ERROR
#include<iostream>
using namespace std;
int prime (int n);
int main()
{
		int ans,n;
	cout<<"enter a positive integer"<<endl;
	cin>>n;
    ans=prime(n);
	cout<<"prime";
	return 0;
}
 int prime(int x)
 {	
  int i,f;
      f==1;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			f==0;
			break;
		}
	}
      if(f==1)
      cout<<"prime\n";
	  else
	  cout<<"no. is not prime";
	
	return x;
}

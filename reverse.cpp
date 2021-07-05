#include<iostream>
using namespace std;
int main()
{
	int rev=0,rem,n;
	cout<<"enter the any no."<<endl;
	cin>>n;
    while(n>0)
	{
	   	rem=n%10;
		rev=rev*10+rem;
		n/=10;
		 }
		cout<<"rev="<<rev;
	return 0;
}

// find factorial of any no. by fun.
#include<iostream>
using namespace std;

int fact(int x);
int main()
{
	int n;
	cout<<"enter any no."<<endl;
    cin>>n;
    int ans=fact(n);
    cout<<"fact="<<ans;
    return 0;
}

int fact(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}   

//  find factorial of any negative
/*int fact(int x)
{
	int i,fact=1;
	for(i=x;i>0;i++)
	{
		fact=fact*i;
	}
	return fact;
} */

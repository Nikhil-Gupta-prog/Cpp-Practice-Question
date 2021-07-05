#include<iostream>
using namespace std;

int max(int,int,int);
int main()
{
	int a,b,c;
	cout<<"enter the value of a,b,c"<<endl;
	cin>>a>>b>>c;
	int ans=max(a,b,c);
	cout<<"max ="<<ans;
	return 0;
}
 int max(int x,int y,int z)
 {
 	int max;
 	if(x>y)
 	{
 		if(x>z)
 		max=x;
 		else
 		max=z;
	 }
	 else
	 {
	 	if(y>z)
		 max=y;
		 else 
		 max=z;
	 }
	 return max;
 }

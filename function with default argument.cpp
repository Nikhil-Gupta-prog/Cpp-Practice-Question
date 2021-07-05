#include<iostream>
using namespace std;
int sum(int x,int y,int z=0,int w=0)
{
	return(x+y+z+w);
}
int main()
{                            // A fun with default arguments,it can be called with 2 argu or 3 argu or 4 argu.
	cout<<sum(10,15)<<endl;            //25
	cout<<sum(10,15,25)<<endl;         //50
	cout<<sum(10,15,25,30)<<endl;      //80
    return 0;
 }

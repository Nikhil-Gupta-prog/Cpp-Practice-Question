// print no. 1,2,3............100 by recursion
#include<iostream>
using namespace std;

int printno(int);     
int main()
{
	printno(100);      

}
 int printno (int n)      
 {
 	if(n>0)
 	{
 		printno(n-1);
 		cout<<n<<" ";
	 }
	 return n;
 }

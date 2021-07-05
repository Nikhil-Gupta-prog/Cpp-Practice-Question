#include<iostream>
using namespace std;

int fib(int);               //declaration
int main()
{
   int n;
   cout<<"enter the value of n"<<endl;
   cin>>n;
   fib(n);                  //calling
   return 0;	
}
 
 int fib(int n)             //definition
 {
 	int f,s=1,i=1,next=0;
 	while(i<=n)
 	{
 		cout<<next<<endl;
 		f=s;
 		s=next;
 		next=f+s;
 		i++;
	 }
	 return n;
 }

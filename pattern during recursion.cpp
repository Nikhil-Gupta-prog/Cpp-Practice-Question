#include<iostream>
using namespace std;
void printrow(int n)
{
	if(n<1)
	return ;
	else
	{
		cout<<"*";
		printrow(n-1);
	}
}
 
 void print(int n)
 {
 	if(n<1)
 	return ;
 	printrow(n);
 	cout<<endl;
 	print(n-1);
 }
 
 int main()
 {
 	int n; 	
 	cout<<"enter the value of n\n";
 	cin>>n;
	 print(n);
 	
 	return 0;
 }

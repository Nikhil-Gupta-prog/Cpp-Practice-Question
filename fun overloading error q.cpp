#include<iostream>
using namespace std;

float sum(float a, float b)
{
	return a+b;
}

 long sum(long a,long b)
 {
	return a+b;
 }
int main()
{
	//cout<<sum(5,6)<<endl;             //ambigous error
	cout<<sum(5.0f,6.0f)<<endl;       
//	cout<<sum(5.0,6.0)<<endl;         
	
}

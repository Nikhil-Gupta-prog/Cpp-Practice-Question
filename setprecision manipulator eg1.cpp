#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//this manipulator changes floating-point precision when used in an expression out<<setprecision(n) 
	// or in>>	setprecision(n),sets the precision parameter of the stream out or into exactly n.
		
	const long double pi=9.1234567898767676654;
	cout<<"default precision(6):"<<pi<<'\n'
	<<"setprecision(10):"<<setprecision(10)<<pi<<endl;
	return 0;
}

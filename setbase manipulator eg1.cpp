#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// this manipulator sets the base field to one of its possible values 
	// like decimal,hexadecimal,octal according to argument base
	
	cout<<setbase(16)<<255<<endl;
	cout<<setbase(8)<<255<<endl;
	cout<<setbase(10)<<12<<endl;
	//cout<<setbase(2)<<12<<endl;
	return 0;
	
}

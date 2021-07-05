#include<iostream>
using namespace std;
int main()
{
	float p;
	cout<<"enter percent of student\n";
	cin>>p;
	if(p>75)
	cout<<"hons"<<endl;
	else if(p>60)
	cout<<"first\n";
	else if(p>50)
	cout<<"second\n";
	else if(p>40)
	cout<<"third\n";
	else
	cout<<"FAIL"<<endl;
	return 0;
}

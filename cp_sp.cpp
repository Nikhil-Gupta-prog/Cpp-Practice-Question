#include<iostream>
using namespace std;
int main()
{
	int cp,sp;
	cout<<"enter the value of cp&sp\n";
	cin>>cp>>sp;
	if(cp<sp)
	cout<<"profit of rs."<<sp-cp;
	else if(cp>sp)
	cout<<"loss of amt"<<cp-sp;
	else
	cout<<"no profit no loss";
	return 0;
}

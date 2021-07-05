#include<iostream>
using namespace std;

template<typename T>
void print(T x)
{
	for(int i=1;i<5;i++)
	cout<<x;
	cout<<endl;
} 
template<typename T>
void print(T x,T y)
{
	for(int i=1;i<y;i++)
	cout<<x;
	cout<<endl;
}

int main()
{
	print('*');       //template
	print('$','\n');    //non template
	return 0;
}

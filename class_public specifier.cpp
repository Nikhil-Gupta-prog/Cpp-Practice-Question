#include<iostream>
using namespace std;
class xyz
{
	public:
		int a;
};
int main()
{
	xyz p;
	p.a=5;      //a is public
	cout<<p.a;
	return 0;
}

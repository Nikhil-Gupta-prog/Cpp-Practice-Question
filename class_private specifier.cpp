#include<iostream>
using namespace std;
class xyz
{
	private:
		int a;
};
int main()
{
	xyz p;
	p.a=5;      //a is private
	cout<<p.a;
	return 0;
}

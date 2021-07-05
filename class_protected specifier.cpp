#include<iostream>
using namespace std;
class xyz
{
	protected:
		int a;
};
class abc: public xyz   //xyz base class,abc is derived abc is son or daughter and xyz is father or mother  
{
	public :
		void display()
		{
			a=9;
			cout<<a;
		}
};
  int main()
{
	abc p;
	p.display();
}

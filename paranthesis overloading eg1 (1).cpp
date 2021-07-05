#include<iostream>
#include<conio.h>
using namespace std;
class point 
{
	int x,y;
	 public:
	 	point(){}
	 	point(int px,int py)
	 	{
	 		x=px;
	 		y=py;
		}
		void show()
		{
			cout<<x<<" ";
			cout<<y<<"\n";
		}
		void operator()(int i,int j);
};
//overloaded()for point
void point::operator()(int i,int j)
{
	x=i;
	y=j;
}

int main()
{
	point ob(10,20);
	ob(5,6);             //()overloading fun will be called
	ob.show();
	return 0;
}

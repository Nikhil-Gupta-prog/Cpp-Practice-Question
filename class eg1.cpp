#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private:                              //label/access specifier optional
		int x;                           // member variable (data)
		int y;                           // no memory inside
		public:
			void setdata(int x1, int y1)
			{
				x=x1;
				y=y1;
			}
			void display()
			{
				cout<<x<<"\t"<<y<<endl;
			}
};
int main()
{
	A a1,a2;                               //memory allocation
    cout<<sizeof(a1)<<endl;
    cout<<sizeof(a2)<<endl;
    a1.setdata(10,20);
    a2.setdata(30,40);
    a1.display();
    a2.display();
    getch();
    return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;
class swap1
{
	private:
		int x;
		int y;
		public:
			void getdata()
			{
				cout<<"enter the two no"<<endl;
				cin>>x>>y;
			}
			void swap()
			{
				int t;
				t=x;
				x=y;
				y=t;
			}
			void display()
			{
				cout<<x<<"\t"<<y<<endl;
			}
};
int main()
{
	swap1 s1;
	s1.getdata();
	cout<<"before swap number is"<<endl;
	s1.display();
	s1.swap();
	cout<<"after swaping no is"<<endl;
	s1.display();
	getch();
	return 0;
}

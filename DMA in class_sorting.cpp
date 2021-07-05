#include<iostream>
#include<conio.h>
using namespace std;
class array
{
	int *p;
	int n;
	public:
		void getdata()
		{
			cout<<"enter how many no."<<"\t";
			cin>>n;
			p=new int[n];
			if(p==NULL)
			{
				cout<<"memory is full";
				getch();
				exit(1);
			}
			for(int i=0;i<n;i++)
			{
				cout<<"enter element"<<i+1<<"\t";
				cin>>p[i];
			}
		}
		void sort()
		{
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(p[i]>p[j])
					{
						int t;
						t=p[i];
						p[i]=p[j];
						p[j]=t;
					}
				}
			}
		}
		void display()
		{
			for(int i=0;i<n;i++)
			cout<<p[i]<<endl;
		}
		void distroy()
		{
			delete []p ;
		}
};
int main()
{
	array a;
	a.getdata();
	a.sort();
	a.display();
	a.distroy();
	return 0;
}

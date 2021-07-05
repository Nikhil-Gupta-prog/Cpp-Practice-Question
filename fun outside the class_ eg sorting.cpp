#include<iostream>
#include<conio.h>
using namespace std;
class array
{
	
	int a[10];
	int n;
	
	
	public:
	void getdata();
	void sort();
	void display();
	
};
		
	void array :: getdata()
	{
		cout<<"enter how many no."<<endl;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<"enter element"<<i+1<<"\t";
			cin>>a[i];
		}
	}
	void array :: sort()
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					int t;
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
	 } 
	 void array :: display()
	 {
	 	for(int i=0;i<n;i++)
	 	{
	 		cout<<a[i]<<"\t"<<endl;
		
		 }
	 }

int main()
{
	array a1;
	a1.getdata();
	a1.sort();
	a1.display();
	return 0;
}

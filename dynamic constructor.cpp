#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int *p;
	int n;
	 public:
	 	A();                   //default
	 	A(int);               //parameter
	 	void getdata();
		void display();
		void sort();
		~A();                //destructor
			
};

A::A()
{
	n=0;
	p=NULL;
}

A::A(int n1)
{
	n=n1;
	p=new int[n];
}

void A:: getdata()
{
//	cout<<"enter how many no."<<endl;
//	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter element"<<i+1<<"\t";
		cin>>p[i];
	}
}



void A::sort()
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

void A::display()
{
	for(int i=0;i<n;i++)
	cout<<p[i]<<endl;
}

A::~A()          //dyanmic destructor
{
    delete []p;	
}

 int main()
 {
 	int x;
 	cout<<"enter no of element";
 	cin>>x;
 	A a1(x);
 	a1.getdata();
 	a1.sort();
 	a1.display();
 	getch();
 	return 0;
 }

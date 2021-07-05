#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int **p,r,c;
	int i,j;
	cout<<"Enter number of rows\t";
	cin>>r;
	cout<<"Enter number of columns\t";
	cin>>c;
	
	p=new int*[r];      //creating array of pointers
	
	for(i=0;i<r;i++)
	{
	 p[i]=new int[c];  // creating array of object
	}
	 //INPUT
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter Element"<<i+1<<","<<j+1<<":";
			cin>>p[i][j];
		}
	}
	
	//OUTPUT
	cout<<"ORIGINAL MATRIX"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<p[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//OUTPUT TRANSPOSE
	
	cout<<"transpose matrix"<<endl;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<p[j][i]<<"\t";
		}
		cout<<endl;
	}
	
	//FREE MEMORY
	for(i=0;i<r;i++)
	{
		delete []p[i];
	}
		delete[]p;
		getch();
		return 0;		
}

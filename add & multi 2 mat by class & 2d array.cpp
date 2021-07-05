#include<iostream>
#include<conio.h>
#define ROW [10];
#define COL [10];

using namespace std;
class matrix
{
	private:
		int r,c;
		int mat[ROW][COL];
	public:
		matrix();
		matrix(int,int);
		void getdata();
		void display();
		matrix sum(matrix);
		matrix mult(matrix);
};

matrix::matrix()
{
	r=c=0;
}

matrix::matrix(int r,int c)
{
	this->r=r;
	this->c=c;
}

void matrix::getdata()
{
	cout<<"enter the value of rows\t";
	cin>>r;
	cout<<"enter the value of column\t";
	cin>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			cout<<"enter element"<<i+1<<","<<j+1;
			cin>>mat[i][j];
		}
	}
}

void matrix::display()
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}
matrix matrix::sum(matrix m)
{ 
    if(r!=m||c!=m.c)
	{
		cout<<"cannot add";
		getch();
		exit(1);
	}
	matrix t(r,c)
	for(int i=0;i<n;i++)
	{
	  for(int j=0;j<n;j++)
	  {
	  	t.mat[i][j]=mat[i][j]+m.mat[i][j];
		}	
	}	
	return t;
}

matrix matrix::mult(matrix m)
{
	if(c!=m.r)
	{
		cout<<"cannot multiply";
		getch();
		exit(1);
	}
	matrix t(r,m.c)
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<m.c;j++)
		{
			t.mat[i][j]=0;
			for(int k=0;k<c;k++)
			t.mat[i][j]+=mat[i][k]*m.mat[k][j];
		}
			
	}
	return t;
}

int main()
{
	matrix m1,m2,m3;
	m1.getdata();
	m2.getdata();
	m3=m1.sum(m2);
	cout<<"sum="<<endl;
	m3.display();
	matrix m4,m5,m6;
	m4.getdata();
	m5.getdata();
	m6=m4.mult(m5);
	cout<<"multiply="<<endl;
	m6.display();
	getch();
	return 0;
}

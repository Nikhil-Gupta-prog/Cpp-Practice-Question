#include<iostream>
using namespace std;
void display(char ='*' , int =1  );


int main()
{
	cout<<"no argument passed:\n";
	display();
	
	cout<<"first argument passed\n";
	display('#');
	
	cout<<"both argument passed\n";
	display('$',5);
	
	return 0;
}

   void display(char c,int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<c;
	}
	cout<<endl;
}
